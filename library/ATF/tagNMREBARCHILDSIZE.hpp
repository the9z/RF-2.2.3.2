// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "tagNMHDR.hpp"
#include "tagRECT.hpp"


START_ATF_NAMESPACE
    struct tagNMREBARCHILDSIZE
    {
        tagNMHDR hdr;
        unsigned int uBand;
        unsigned int wID;
        tagRECT rcChild;
        tagRECT rcBand;
    };
END_ATF_NAMESPACE