// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "tagNMHDR.hpp"
#include "tagPOINT.hpp"


START_ATF_NAMESPACE
    struct tagNMLISTVIEW
    {
        tagNMHDR hdr;
        int iItem;
        int iSubItem;
        unsigned int uNewState;
        unsigned int uOldState;
        unsigned int uChanged;
        tagPOINT ptAction;
        __int64 lParam;
    };
END_ATF_NAMESPACE