// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CLogFile.hpp>
#include <CUnmannedTraderSubClassInfo.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  CUnmannedTraderSubClassInfoForceLiverGrade : CUnmannedTraderSubClassInfo
    {
        char m_byGrade;
    public:
        CUnmannedTraderSubClassInfoForceLiverGrade(struct CUnmannedTraderSubClassInfoForceLiverGrade* lhs);
        void ctor_CUnmannedTraderSubClassInfoForceLiverGrade(struct CUnmannedTraderSubClassInfoForceLiverGrade* lhs);
        CUnmannedTraderSubClassInfoForceLiverGrade(unsigned int dwID);
        void ctor_CUnmannedTraderSubClassInfoForceLiverGrade(unsigned int dwID);
        struct CUnmannedTraderSubClassInfo* Create(unsigned int dwID);
        bool GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* bySubClass);
        bool LoadXML(struct TiXmlElement* elemSubClass, struct CLogFile* kLogger, unsigned int dwDivisionID, unsigned int dwClassID);
        ~CUnmannedTraderSubClassInfoForceLiverGrade();
        void dtor_CUnmannedTraderSubClassInfoForceLiverGrade();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
