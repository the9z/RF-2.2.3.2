// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CNationSettingData.hpp>
#include <CNationSettingFactory.hpp>


START_ATF_NAMESPACE
    struct  CNationSettingFactoryES : CNationSettingFactory
    {
    public:
        CNationSettingFactoryES();
        void ctor_CNationSettingFactoryES();
        struct CNationSettingData* Create(int iNationCode, char* szNationCodeStr, bool bServiceMode);
    };
END_ATF_NAMESPACE
