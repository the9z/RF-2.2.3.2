// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _gm_msg_gmcall_list_response_zocl
    {
        struct  _call_node
        {
            unsigned int dwSerial;
            char m_wszUserName[17];
        public:
            void Init();
        };
        int m_nCurrPageIndex;
        int m_MaxPage;
        int m_nCurrPageUserNum;
        int m_nMaxUser;
        _call_node m_arCallNode[10];
    public:
        void Init();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_gm_msg_gmcall_list_response_zocl, 226>(), "_gm_msg_gmcall_list_response_zocl");
END_ATF_NAMESPACE
