// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CLogFile.hpp"
#include "CRecordData.hpp"
#include "_TimeItem_fld.hpp"


START_ATF_NAMESPACE
    struct TimeItem
    {
        CLogFile _kLogger;
        CRecordData _kRecTimeItem;
    public:
        bool CheckGoods()
        {
            using org_ptr = bool (WINAPIV*)(struct TimeItem*);
            return (org_ptr(0x14030e7d0L))(this);
        };
        static struct _TimeItem_fld* FindTimeRec(int nTbl, int nIdx)
        {
            using org_ptr = struct _TimeItem_fld* (WINAPIV*)(int, int);
            return (org_ptr(0x14030e510L))(nTbl, nIdx);
        };
        bool Init()
        {
            using org_ptr = bool (WINAPIV*)(struct TimeItem*);
            return (org_ptr(0x14030e160L))(this);
        };
        static struct TimeItem* Instance()
        {
            using org_ptr = struct TimeItem* (WINAPIV*)();
            return (org_ptr(0x14030e0a0L))();
        };
        bool MakeLinkTable(char* szMsg, int nSize)
        {
            using org_ptr = bool (WINAPIV*)(struct TimeItem*, char*, int);
            return (org_ptr(0x14030e270L))(this, szMsg, nSize);
        };
        bool ReadGoods()
        {
            using org_ptr = bool (WINAPIV*)(struct TimeItem*);
            return (org_ptr(0x14030e6b0L))(this);
        };
        TimeItem()
        {
            using org_ptr = void (WINAPIV*)(struct TimeItem*);
            (org_ptr(0x14030f3e0L))(this);
        };
        void ctor_TimeItem()
        {
            using org_ptr = void (WINAPIV*)(struct TimeItem*);
            (org_ptr(0x14030f3e0L))(this);
        };
    };
END_ATF_NAMESPACE