// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct _personal_automine_download_zocl
    {
        struct  __list
        {
            char byClientSlotIndex;
            char byTblCode;
            unsigned __int16 wItemTblIndex;
            char byDur;
        };
        char byHaveBag;
        char byCnt;
        __list list[40];
    public:
        int size();
    };
    #pragma pack(pop)
    static_assert(ATF::checkSize<_personal_automine_download_zocl, 202>(), "_personal_automine_download_zocl");
END_ATF_NAMESPACE
