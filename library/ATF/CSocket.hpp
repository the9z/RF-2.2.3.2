// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CAsyncSocket.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  CSocket : CAsyncSocket
    {
        int m_nTimeOut;
        int *m_pbBlocking;
        int m_nConnectError;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
