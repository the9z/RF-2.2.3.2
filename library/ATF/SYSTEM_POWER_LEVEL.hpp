// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <POWER_ACTION_POLICY.hpp>


START_ATF_NAMESPACE
    struct SYSTEM_POWER_LEVEL
    {
        char Enable;
        char Spare[3];
        unsigned int BatteryLevel;
        POWER_ACTION_POLICY PowerPolicy;
        _SYSTEM_POWER_STATE MinSystemState;
    };
END_ATF_NAMESPACE
