// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _notify_max_pvp_point_zocl
    {
        int nMaxPoint;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _notify_max_pvp_point_zocl*);
            return (org_ptr(0x1400f0840L))(this);
        };
    };
END_ATF_NAMESPACE