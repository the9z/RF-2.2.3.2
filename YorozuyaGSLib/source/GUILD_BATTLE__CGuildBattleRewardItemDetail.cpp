#include <GUILD_BATTLE__CGuildBattleRewardItemDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CGuildBattleRewardItemctor_CGuildBattleRewardItem2_ptr GUILD_BATTLE__CGuildBattleRewardItemctor_CGuildBattleRewardItem2_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleRewardItemctor_CGuildBattleRewardItem2_clbk GUILD_BATTLE__CGuildBattleRewardItemctor_CGuildBattleRewardItem2_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleRewardItemGetAmount4_ptr GUILD_BATTLE__CGuildBattleRewardItemGetAmount4_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleRewardItemGetAmount4_clbk GUILD_BATTLE__CGuildBattleRewardItemGetAmount4_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleRewardItemGetItemCode6_ptr GUILD_BATTLE__CGuildBattleRewardItemGetItemCode6_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleRewardItemGetItemCode6_clbk GUILD_BATTLE__CGuildBattleRewardItemGetItemCode6_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleRewardItemGive8_ptr GUILD_BATTLE__CGuildBattleRewardItemGive8_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleRewardItemGive8_clbk GUILD_BATTLE__CGuildBattleRewardItemGive8_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleRewardItemInit10_ptr GUILD_BATTLE__CGuildBattleRewardItemInit10_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleRewardItemInit10_clbk GUILD_BATTLE__CGuildBattleRewardItemInit10_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleRewardItemIsNull12_ptr GUILD_BATTLE__CGuildBattleRewardItemIsNull12_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleRewardItemIsNull12_clbk GUILD_BATTLE__CGuildBattleRewardItemIsNull12_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleRewardItemSetItem14_ptr GUILD_BATTLE__CGuildBattleRewardItemSetItem14_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleRewardItemSetItem14_clbk GUILD_BATTLE__CGuildBattleRewardItemSetItem14_user(nullptr);
            
            
            void GUILD_BATTLE__CGuildBattleRewardItemctor_CGuildBattleRewardItem2_wrapper(struct GUILD_BATTLE::CGuildBattleRewardItem* _this)
            {
               GUILD_BATTLE__CGuildBattleRewardItemctor_CGuildBattleRewardItem2_user(_this, GUILD_BATTLE__CGuildBattleRewardItemctor_CGuildBattleRewardItem2_next);
            };
            char GUILD_BATTLE__CGuildBattleRewardItemGetAmount4_wrapper(struct GUILD_BATTLE::CGuildBattleRewardItem* _this)
            {
               return GUILD_BATTLE__CGuildBattleRewardItemGetAmount4_user(_this, GUILD_BATTLE__CGuildBattleRewardItemGetAmount4_next);
            };
            char* GUILD_BATTLE__CGuildBattleRewardItemGetItemCode6_wrapper(struct GUILD_BATTLE::CGuildBattleRewardItem* _this)
            {
               return GUILD_BATTLE__CGuildBattleRewardItemGetItemCode6_user(_this, GUILD_BATTLE__CGuildBattleRewardItemGetItemCode6_next);
            };
            struct GUILD_BATTLE::CGuildBattleRewardItem* GUILD_BATTLE__CGuildBattleRewardItemGive8_wrapper(struct GUILD_BATTLE::CGuildBattleRewardItem* _this, struct CPlayer* pkPlayer)
            {
               return GUILD_BATTLE__CGuildBattleRewardItemGive8_user(_this, pkPlayer, GUILD_BATTLE__CGuildBattleRewardItemGive8_next);
            };
            bool GUILD_BATTLE__CGuildBattleRewardItemInit10_wrapper(struct GUILD_BATTLE::CGuildBattleRewardItem* _this, uint16_t usInx)
            {
               return GUILD_BATTLE__CGuildBattleRewardItemInit10_user(_this, usInx, GUILD_BATTLE__CGuildBattleRewardItemInit10_next);
            };
            bool GUILD_BATTLE__CGuildBattleRewardItemIsNull12_wrapper(struct GUILD_BATTLE::CGuildBattleRewardItem* _this)
            {
               return GUILD_BATTLE__CGuildBattleRewardItemIsNull12_user(_this, GUILD_BATTLE__CGuildBattleRewardItemIsNull12_next);
            };
            bool GUILD_BATTLE__CGuildBattleRewardItemSetItem14_wrapper(struct GUILD_BATTLE::CGuildBattleRewardItem* _this, char* szItemCode)
            {
               return GUILD_BATTLE__CGuildBattleRewardItemSetItem14_user(_this, szItemCode, GUILD_BATTLE__CGuildBattleRewardItemSetItem14_next);
            };
            
            ::std::array<hook_record, 7> CGuildBattleRewardItem_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403c8ef0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemctor_CGuildBattleRewardItem2_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemctor_CGuildBattleRewardItem2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleRewardItemctor_CGuildBattleRewardItem2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleRewardItem::*)())&GUILD_BATTLE::CGuildBattleRewardItem::ctor_CGuildBattleRewardItem)
                },
                _hook_record {
                    (LPVOID)0x1403eae80L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemGetAmount4_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemGetAmount4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleRewardItemGetAmount4_wrapper),
                    (LPVOID)cast_pointer_function((char(GUILD_BATTLE::CGuildBattleRewardItem::*)())&GUILD_BATTLE::CGuildBattleRewardItem::GetAmount)
                },
                _hook_record {
                    (LPVOID)0x1403c9270L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemGetItemCode6_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemGetItemCode6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleRewardItemGetItemCode6_wrapper),
                    (LPVOID)cast_pointer_function((char*(GUILD_BATTLE::CGuildBattleRewardItem::*)())&GUILD_BATTLE::CGuildBattleRewardItem::GetItemCode)
                },
                _hook_record {
                    (LPVOID)0x1403c90e0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemGive8_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemGive8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleRewardItemGive8_wrapper),
                    (LPVOID)cast_pointer_function((struct GUILD_BATTLE::CGuildBattleRewardItem*(GUILD_BATTLE::CGuildBattleRewardItem::*)(struct CPlayer*))&GUILD_BATTLE::CGuildBattleRewardItem::Give)
                },
                _hook_record {
                    (LPVOID)0x1403c8f30L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemInit10_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemInit10_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleRewardItemInit10_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CGuildBattleRewardItem::*)(uint16_t))&GUILD_BATTLE::CGuildBattleRewardItem::Init)
                },
                _hook_record {
                    (LPVOID)0x1403eaea0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemIsNull12_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemIsNull12_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleRewardItemIsNull12_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CGuildBattleRewardItem::*)())&GUILD_BATTLE::CGuildBattleRewardItem::IsNull)
                },
                _hook_record {
                    (LPVOID)0x1403c92d0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemSetItem14_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleRewardItemSetItem14_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleRewardItemSetItem14_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CGuildBattleRewardItem::*)(char*))&GUILD_BATTLE::CGuildBattleRewardItem::SetItem)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
