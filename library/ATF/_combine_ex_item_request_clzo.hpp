// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _combine_ex_item_request_clzo
    {
        struct _list
        {
            char byStorageCode;
             __declspec(align(1)) unsigned __int16 wItemSerial;
            char byAmount;
        };
        unsigned int wManualIndex;
        char byCombineSlotNum;
        _list iCombineSlot[5];
        int bUseNpcLink;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE