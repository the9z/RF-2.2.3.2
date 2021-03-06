// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMapData.hpp>
#include <CMyTimer.hpp>
#include <CNetIndexList.hpp>


START_ATF_NAMESPACE
    struct CTransportShip
    {
        struct __mgr_member
        {
            struct CPlayer *pPtr;
            unsigned int dwSerial;
        public:
            __mgr_member();
            void ctor___mgr_member();
            void init();
            bool is_fill();
        };
        struct __mgr_ticket
        {
            int nCurTicketNum;
            int nReserTicketNum;
            unsigned int dwNextUpdateTime;
            struct _TicketItem_fld *pLinkTicketItem;
        public:
            __mgr_ticket();
            void ctor___mgr_ticket();
            void init();
        };
        bool m_bAnchor;
        char m_byDirect;
        bool m_bHurry;
        unsigned int m_dwNextHurryTime;
        unsigned int m_dwEventCreateTime;
        char m_byRaceCode_Layer;
        CMapData *m_pLinkShipMap;
        CMapData *m_pLinkPortMap[2];
        CMyTimer m_tmrCheckState;
        __mgr_member m_NewMember[2532];
        __mgr_member m_OldMember[2532];
        CNetIndexList m_listLogoffMember;
        __mgr_ticket m_MgrTicket[2];
    public:
        void AlterState(bool bAnchor, char byDirect, int nPassMin, int nNextSubEventTerm);
        void ApplyTicketReserver();
        CTransportShip();
        void ctor_CTransportShip();
        void CheckHurry();
        void CheckTicket();
        void CheckTicket_Kick(struct CPlayer* pPtr, int nPortalIndex);
        void CheckTicket_Pass(struct CPlayer* pPtr, int nPortalIndex);
        void EnterMember(struct CPlayer* pEnter);
        void ExitMember(struct CPlayer* pExiter, bool bLogoff);
        bool GetCurRideShipThisTicket(struct _TicketItem_fld* pTicketFld);
        struct __mgr_member* GetEmptyNewMember();
        int GetLeftTicketIncludeReserNum(char* pszTarMapCode, int nAdd);
        struct CMapData* GetMapCurDirect();
        int GetOutPortalIndex(int nRaceCode, char byExitDirect);
        int GetRideLimLevel();
        int GetRideUpLimLevel();
        void GetStartPosInShip(float* pfPos);
        bool InitShip(struct CMapData* pLinkShipMap, struct CMapData* pLinkMainbaseMap, struct CMapData* pLinkPlatformMap, char byRaceCode_Layer);
        void InitTicketReserver();
        bool IsMemberBeforeLogoff(unsigned int dwPlayerSerial);
        bool IsOldMember(struct CPlayer* pMember);
        void KickFreeMember();
        void KickOldMember(char byKickDirectCode);
        void Loop();
        void ReEnterMember(struct CPlayer* pExiter);
        bool RenewOldMember(struct CPlayer* pMember);
        void SendMsg_KickForSail(int n);
        void SendMsg_TicketCheck(int n, bool bPass, uint16_t wTicketSerial);
        void SendMsg_TransportShipState(int n);
        bool Ticketting(struct CPlayer* pExiter);
        ~CTransportShip();
        void dtor_CTransportShip();
    };
END_ATF_NAMESPACE
