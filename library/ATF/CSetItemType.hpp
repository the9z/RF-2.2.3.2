// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CRecordData.hpp"
#include "si_interpret.hpp"


START_ATF_NAMESPACE
    struct CSetItemType
    {
        int m_iEffectTypeCount;
        si_interpret **m_pEffectCountInfo;
    public:
        CSetItemType()
        {
            using org_ptr = void (WINAPIV*)(struct CSetItemType*);
            (org_ptr(0x1402e1cb0L))(this);
        };
        void ctor_CSetItemType()
        {
            using org_ptr = void (WINAPIV*)(struct CSetItemType*);
            (org_ptr(0x1402e1cb0L))(this);
        };
        void Class_Init()
        {
            using org_ptr = void (WINAPIV*)(struct CSetItemType*);
            (org_ptr(0x1402e1fc0L))(this);
        };
        int GetEffectTypeCount()
        {
            using org_ptr = int (WINAPIV*)(struct CSetItemType*);
            return (org_ptr(0x1402e2090L))(this);
        };
        struct si_interpret* Getsi_interpret(int set_pos)
        {
            using org_ptr = struct si_interpret* (WINAPIV*)(struct CSetItemType*, int);
            return (org_ptr(0x1402e1f70L))(this, set_pos);
        };
        bool SetItemType_Init(struct CRecordData* prd)
        {
            using org_ptr = bool (WINAPIV*)(struct CSetItemType*, struct CRecordData*);
            return (org_ptr(0x1402e1d40L))(this, prd);
        };
        bool SetItemType_UnInit()
        {
            using org_ptr = bool (WINAPIV*)(struct CSetItemType*);
            return (org_ptr(0x1402e1f30L))(this);
        };
        ~CSetItemType()
        {
            using org_ptr = void (WINAPIV*)(struct CSetItemType*);
            (org_ptr(0x1402e1d00L))(this);
        };
        void dtor_CSetItemType()
        {
            using org_ptr = void (WINAPIV*)(struct CSetItemType*);
            (org_ptr(0x1402e1d00L))(this);
        };
    };
END_ATF_NAMESPACE