// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct qry_case_select_golden_box_item
    {
        struct _db_golden_box_item_List
        {
            int ncode;
            unsigned __int16 wcount;
        };
        char bydck;
        unsigned int dwStarterBoxCnt;
        int nBoxcode[2];
        unsigned __int16 wBoxMax[2];
        char bygolden_item_num[2];
        _db_golden_box_item_List List[2][100];
    };
END_ATF_NAMESPACE
