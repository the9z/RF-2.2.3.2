// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CException.hpp>


START_ATF_NAMESPACE
    struct  CInternetException : CException
    {
        unsigned int m_dwError;
        unsigned __int64 m_dwContext;
    };
END_ATF_NAMESPACE
