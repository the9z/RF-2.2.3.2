#include "stdafx.h"

#include "LootExchange.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <bitset>
#include <ATF/global.hpp>

namespace GameServer
{
    namespace Addon
    {
        bool CLootExchange::m_bActivated = false;
        bool CLootExchange::m_bExchangeAll = false;
        
        void CLootExchange::load()
        {
            enable_hook(&ATF::CPlayer::pc_TakeGroundingItem, &CLootExchange::pc_TakeGroundingItem);
        }

        void CLootExchange::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CLootExchange::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "addon.loot_exchange";
            return name;
        }

        void CLootExchange::configure(
            const rapidjson::Value& nodeConfig)
        {
            m_bActivated = RapidHelper::GetValueOrDefault(nodeConfig, "activated", false);
            m_bExchangeAll = RapidHelper::GetValueOrDefault(nodeConfig, "exchange_all", false);
        }

        void WINAPIV CLootExchange::pc_TakeGroundingItem(
            ATF::CPlayer* pObj,
            ATF::CItemBox* pBox,
            uint16_t wAddSerial,
            ATF::Info::CPlayerpc_TakeGroundingItem1947_ptr next)
        {
            bool bApplyModule = false;

            do
            {
                if (!CLootExchange::m_bActivated)
                {
                    break;
                }

                if (!pBox->m_bLive)
                {
                    break;
                }
                
                if (!pBox->IsTakeRight(pObj))
                {
                    break;
                }

                if (ATF::Global::Get3DSqrt(pBox->m_fCurPos, pObj->m_fCurPos) > 100.f)
                {
                    break;
                }

                if (pBox->m_Item.m_byTableCode >= _countof(ATF::Global::g_MainThread->m_tblItemData))
                {
                    break;
                }

                auto& ItemRecords = ATF::Global::g_MainThread->m_tblItemData[pBox->m_Item.m_byTableCode];
                auto pRecord = ItemRecords.GetRecord(pBox->m_Item.m_wItemIndex);
                if (pRecord == nullptr)
                {
                    break;
                }

                ::std::bitset<32> bMoneyType(GetMoneyType(pRecord, pBox->m_Item.m_byTableCode));
                if (!CLootExchange::m_bExchangeAll && !bMoneyType.test(4))
                {
                    break;
                }

                bMoneyType.set(4, false);
                uint32_t nMoneyType = bMoneyType.to_ulong();
                int nMoneyValue = GetMoneyValue(pRecord, pBox->m_Item.m_byTableCode, nMoneyType, pObj->GetObjRace());
                if (nMoneyValue <= 0)
                {
                    break;
                }

                nMoneyValue *= pBox->m_Item.m_dwDur ? pBox->m_Item.m_dwDur : 1;
                if (nMoneyValue <= 0)
                {
                    break;
                }

                bool bAddMoney = AddMoney(pObj, nMoneyType, nMoneyValue);
                if (!bAddMoney)
                {
                    break;
                }

                ATF::_STORAGE_LIST::_db_con BoxItem;
                memcpy(&BoxItem, &pBox->m_Item, sizeof(BoxItem));
                pBox->Destroy();
                pObj->SendMsg_TakeAddResult(0, &BoxItem);

                bApplyModule = true;
            } while (false);

            if (!bApplyModule)
                return next(pObj, pBox, wAddSerial);
        }

        int CLootExchange::GetMoneyType(
            ATF::_base_fld * pRec,
            char byTableCode)
        {
            int nMoneyType = 0;
            switch ((e_code_item_table)byTableCode)
            {
            case e_code_item_table::tbl_code_upper:
            case e_code_item_table::tbl_code_lower:
            case e_code_item_table::tbl_code_gauntlet:
            case e_code_item_table::tbl_code_shoe:
            case e_code_item_table::tbl_code_shield:
            case e_code_item_table::tbl_code_helmet:
            case e_code_item_table::tbl_code_cloak: 
                {
                    ATF::_DfnEquipItem_fld* pItemRec= (ATF::_DfnEquipItem_fld*)pRec;
                    nMoneyType = pItemRec->m_nMoney;
                }break;
            case e_code_item_table::tbl_code_weapon: {
                    ATF::_WeaponItem_fld* pItemRec= (ATF::_WeaponItem_fld*)pRec;
                    nMoneyType = pItemRec->m_nMoney;
                }break;
            case e_code_item_table::tbl_code_maketool: {
                    ATF::_MakeToolItem_fld* pItemRec= (ATF::_MakeToolItem_fld*)pRec;
                    nMoneyType = pItemRec->m_nMoney;
                }break;
            case e_code_item_table::tbl_code_bag: {
                    ATF::_BagItem_fld* pItemRec= (ATF::_BagItem_fld*)pRec;
                    nMoneyType = pItemRec->m_nMoney;
                }break;
            case e_code_item_table::tbl_code_potion: {
                    ATF::_PotionItem_fld* pItemRec= (ATF::_PotionItem_fld*)pRec;
                    nMoneyType = pItemRec->m_nMoney;
                }break;
            case e_code_item_table::tbl_code_bullet: {
                    ATF::_BulletItem_fld* pItemRec= (ATF::_BulletItem_fld*)pRec;
                    nMoneyType = pItemRec->m_nMoney;
                }break;
            case e_code_item_table::tbl_code_res: {
                    ATF::_ResourceItem_fld* pItemRec= (ATF::_ResourceItem_fld*)pRec;
                    nMoneyType = pItemRec->m_nMoney;
                }break;
            case e_code_item_table::tbl_code_booty: {
                    ATF::_BootyItem_fld* pItemRec= (ATF::_BootyItem_fld*)pRec;
                    nMoneyType = pItemRec->m_nMoney;
                }break;
            case e_code_item_table::tbl_code_battery: {
                    ATF::_BatteryItem_fld* pItemRec= (ATF::_BatteryItem_fld*)pRec;
                    nMoneyType = pItemRec->m_nMoney;
                }break;
            case e_code_item_table::tbl_code_fcitem: {
                    ATF::_ForceItem_fld* pItemRec= (ATF::_ForceItem_fld*)pRec;
                    nMoneyType = pItemRec->m_nMoney;
                }break;
            case e_code_item_table::tbl_code_ring: {
                    ATF::_RingItem_fld* pItemRec= (ATF::_RingItem_fld*)pRec;
                    nMoneyType = pItemRec->m_nMoney;
                }break;
            case e_code_item_table::tbl_code_amulet: {
                    ATF::_AmuletItem_fld* pItemRec= (ATF::_AmuletItem_fld*)pRec;
                    nMoneyType = pItemRec->m_nMoney;
                }break;
            case e_code_item_table::tbl_code_map: {
                    ATF::_MapItem_fld* pItemRec= (ATF::_MapItem_fld*)pRec;
                    nMoneyType = pItemRec->m_nMoney;
                }break;
            case e_code_item_table::tbl_code_town: {
                    ATF::_TOWNItem_fld* pItemRec= (ATF::_TOWNItem_fld*)pRec;
                    nMoneyType = pItemRec->m_nMoney;
                }break;
            case e_code_item_table::tbl_code_bdungeon: {
                    ATF::_BattleDungeonItem_fld* pItemRec= (ATF::_BattleDungeonItem_fld*)pRec;
                    nMoneyType = pItemRec->m_nMoney;
                }break;
            case e_code_item_table::tbl_code_animus: {
                    ATF::_AnimusItem_fld* pItemRec= (ATF::_AnimusItem_fld*)pRec;
                    nMoneyType = pItemRec->m_nMoney;
                }break;
            case e_code_item_table::tbl_code_tower: {
                    ATF::_GuardTowerItem_fld* pItemRec= (ATF::_GuardTowerItem_fld*)pRec;
                    nMoneyType = pItemRec->m_nMoney;
                }break;
            default:
                break;
            }
            return nMoneyType;
        }

        template<typename _Ty>
        int GetValue(_Ty* pRec, uint32_t nMoneyType)
        {
            switch ((e_money_type)nMoneyType)
            {
            case e_money_type::cp:
            case e_money_type::gold:
                return pRec->m_nStdPrice;
            case e_money_type::pvp_point:
            case e_money_type::pvp_point_2:
                return pRec->m_nStdPoint;
            case e_money_type::processing_point:
                return pRec->m_nProcPoint;
            case e_money_type::hunter_point:
                return pRec->m_nKillPoint;
            case e_money_type::gold_point:
                return pRec->m_nGoldPoint;
            }
            return 0;
        }

        int GetValueRecource(ATF::_ResourceItem_fld* pRec, int nRace, uint32_t nMoneyType)
        {
            switch ((e_money_type)nMoneyType)
            {
            case e_money_type::cp:
            case e_money_type::gold:
                if (nRace == 0)
                    return pRec->m_nAncStdPrice;
                if (nRace == 1)
                    return pRec->m_nExStdPrice;
                if (nRace == 2)
                    return pRec->m_nMecaStdPrice;
            case e_money_type::pvp_point:
            case e_money_type::pvp_point_2:
                return pRec->m_nStdPoint;
            case e_money_type::processing_point:
                return pRec->m_nProcPoint;
            case e_money_type::hunter_point:
                return pRec->m_nKillPoint;
            case e_money_type::gold_point:
                return pRec->m_nGoldPoint;
            }
            return 0;
        }

        int CLootExchange::GetMoneyValue(
            ATF::_base_fld * pRec,
            char byTableCode,
            uint32_t nMoneyType,
            int nRace)
        {
            int nMoneyValue = 0;
            switch ((e_code_item_table)byTableCode)
            {
            case e_code_item_table::tbl_code_upper:
            case e_code_item_table::tbl_code_lower:
            case e_code_item_table::tbl_code_gauntlet:
            case e_code_item_table::tbl_code_shoe:
            case e_code_item_table::tbl_code_shield:
            case e_code_item_table::tbl_code_helmet:
            case e_code_item_table::tbl_code_cloak:
            {
                ATF::_DfnEquipItem_fld* pItemRec = (ATF::_DfnEquipItem_fld*)pRec;
                nMoneyValue = GetValue(pItemRec, nMoneyType);
            }break;
            case e_code_item_table::tbl_code_weapon: {
                ATF::_WeaponItem_fld* pItemRec = (ATF::_WeaponItem_fld*)pRec;
                nMoneyValue = GetValue(pItemRec, nMoneyType);
            }break;
            case e_code_item_table::tbl_code_maketool: {
                ATF::_MakeToolItem_fld* pItemRec = (ATF::_MakeToolItem_fld*)pRec;
                nMoneyValue = GetValue(pItemRec, nMoneyType);
            }break;
            case e_code_item_table::tbl_code_bag: {
                ATF::_BagItem_fld* pItemRec = (ATF::_BagItem_fld*)pRec;
                nMoneyValue = GetValue(pItemRec, nMoneyType);
            }break;
            case e_code_item_table::tbl_code_potion: {
                ATF::_PotionItem_fld* pItemRec = (ATF::_PotionItem_fld*)pRec;
                nMoneyValue = GetValue(pItemRec, nMoneyType);
            }break;
            case e_code_item_table::tbl_code_bullet: {
                ATF::_BulletItem_fld* pItemRec = (ATF::_BulletItem_fld*)pRec;
                nMoneyValue = GetValue(pItemRec, nMoneyType);
            }break;
            case e_code_item_table::tbl_code_res: {
                ATF::_ResourceItem_fld* pItemRec = (ATF::_ResourceItem_fld*)pRec;
                nMoneyValue = GetValueRecource(pItemRec, nMoneyType, nRace);
            }break;
            case e_code_item_table::tbl_code_booty: {
                ATF::_BootyItem_fld* pItemRec = (ATF::_BootyItem_fld*)pRec;
                nMoneyValue = GetValue(pItemRec, nMoneyType);
            }break;
            case e_code_item_table::tbl_code_battery: {
                ATF::_BatteryItem_fld* pItemRec = (ATF::_BatteryItem_fld*)pRec;
                nMoneyValue = GetValue(pItemRec, nMoneyType);
            }break;
            case e_code_item_table::tbl_code_fcitem: {
                ATF::_ForceItem_fld* pItemRec = (ATF::_ForceItem_fld*)pRec;
                nMoneyValue = GetValue(pItemRec, nMoneyType);
            }break;
            case e_code_item_table::tbl_code_ring: {
                ATF::_RingItem_fld* pItemRec = (ATF::_RingItem_fld*)pRec;
                nMoneyValue = GetValue(pItemRec, nMoneyType);
            }break;
            case e_code_item_table::tbl_code_amulet: {
                ATF::_AmuletItem_fld* pItemRec = (ATF::_AmuletItem_fld*)pRec;
                nMoneyValue = GetValue(pItemRec, nMoneyType);
            }break;
            case e_code_item_table::tbl_code_map: {
                ATF::_MapItem_fld* pItemRec = (ATF::_MapItem_fld*)pRec;
                nMoneyValue = GetValue(pItemRec, nMoneyType);
            }break;
            case e_code_item_table::tbl_code_town: {
                ATF::_TOWNItem_fld* pItemRec = (ATF::_TOWNItem_fld*)pRec;
                nMoneyValue = GetValue(pItemRec, nMoneyType);
            }break;
            case e_code_item_table::tbl_code_bdungeon: {
                ATF::_BattleDungeonItem_fld* pItemRec = (ATF::_BattleDungeonItem_fld*)pRec;
                nMoneyValue = GetValue(pItemRec, nMoneyType);
            }break;
            case e_code_item_table::tbl_code_animus: {
                ATF::_AnimusItem_fld* pItemRec = (ATF::_AnimusItem_fld*)pRec;
                nMoneyValue = GetValue(pItemRec, nMoneyType);
            }break;
            case e_code_item_table::tbl_code_tower: {
                ATF::_GuardTowerItem_fld* pItemRec = (ATF::_GuardTowerItem_fld*)pRec;
                nMoneyValue = GetValue(pItemRec, nMoneyType);
            }break;
            default:
                break;
            }
            return nMoneyValue;
        }

        bool CLootExchange::AddMoney(
            ATF::CPlayer * pObj,
            uint32_t nMoneyType,
            int nMoneyValue)
        {
            auto fnAddActPoint = [&](char byActionCode)->bool
            {
                bool result = ATF::CActionPointSystemMgr::Instance()->GetEventStatus(byActionCode) == 2;
                if (!result)
                    return result;

                auto dwPoint = pObj->m_pUserDB->GetActPoint(byActionCode);
                dwPoint += nMoneyValue;
                pObj->m_pUserDB->Update_User_Action_Point(byActionCode, dwPoint);
                pObj->SendMsg_Alter_Action_Point(byActionCode, dwPoint);

                return result;
            };

            bool result = false;
            switch ((e_money_type)nMoneyType)
            {
            case e_money_type::cp:
                pObj->AlterDalant(nMoneyValue);
                pObj->SendMsg_AlterMoneyInform(0);
                result = true;
                break;
            case e_money_type::gold:
                pObj->AlterGold(nMoneyValue);
                pObj->SendMsg_AlterMoneyInform(0);
                result = true;
                break;
            case e_money_type::pvp_point:
                pObj->AlterPvPPoint(nMoneyValue, ATF::PVP_ALTER_TYPE::cheat, -1);
                result = true;
                break;
            case e_money_type::pvp_point_2:
                pObj->AlterPvPCashBag(nMoneyValue, ATF::PVP_MONEY_ALTER_TYPE::pm_kill);
                result = true;
                break;
            case e_money_type::processing_point:
                result = fnAddActPoint(0);
                break;
            case e_money_type::hunter_point:
                result = fnAddActPoint(1);
                break;
            case e_money_type::gold_point:
                result = fnAddActPoint(2);
                break;
            }

            return result;
        }
    }
}