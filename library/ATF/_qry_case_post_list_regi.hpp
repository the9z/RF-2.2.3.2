// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _qry_case_post_list_regi
    {
        struct __list
        {
            unsigned int dwIndex;
            bool bRet;
            char bySendRace;
            char bySenderDgr;
            char byState;
            unsigned int dwSenderSerial;
            char wszSendName[17];
            char wszRecvName[17];
            char wszTitle[21];
            char wszContent[201];
            _INVENKEY key;
            unsigned __int64 dwDur;
            unsigned int dwUpt;
            unsigned __int64 lnUID;
            unsigned int dwGold;
        public:
            __list()
            {
                using org_ptr = void (WINAPIV*)(struct __list*);
                (org_ptr(0x1403281e0L))(this);
            };
            void ctor___list()
            {
                using org_ptr = void (WINAPIV*)(struct __list*);
                (org_ptr(0x1403281e0L))(this);
            };
        };
        unsigned int dwCount;
        __list List[20];
    public:
        _qry_case_post_list_regi()
        {
            using org_ptr = void (WINAPIV*)(struct _qry_case_post_list_regi*);
            (org_ptr(0x140328150L))(this);
        };
        void ctor__qry_case_post_list_regi()
        {
            using org_ptr = void (WINAPIV*)(struct _qry_case_post_list_regi*);
            (org_ptr(0x140328150L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _qry_case_post_list_regi*);
            return (org_ptr(0x1403281d0L))(this);
        };
    };
END_ATF_NAMESPACE