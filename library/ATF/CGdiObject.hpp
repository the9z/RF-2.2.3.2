// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CObject.hpp"


START_ATF_NAMESPACE
    struct  CGdiObject : CObject
    {
        void *m_hObject;
    public:
        int64_t DeleteObject()
        {
            using org_ptr = int64_t (WINAPIV*)(struct CGdiObject*);
            return (org_ptr(0x1404dc3fcL))(this);
        };
    };
END_ATF_NAMESPACE