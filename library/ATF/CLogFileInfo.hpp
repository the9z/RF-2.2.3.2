// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CLogFile.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CLogFilector_CLogFile2_ptr = void (WINAPIV*)(struct CLogFile*);
        using CLogFilector_CLogFile2_clbk = void (WINAPIV*)(struct CLogFile*, CLogFilector_CLogFile2_ptr);
        using CLogFileSetWriteAble4_ptr = void (WINAPIV*)(struct CLogFile*, bool);
        using CLogFileSetWriteAble4_clbk = void (WINAPIV*)(struct CLogFile*, bool, CLogFileSetWriteAble4_ptr);
        using CLogFileSetWriteLogFile6_ptr = void (WINAPIV*)(struct CLogFile*, char*, int, bool, bool, bool);
        using CLogFileSetWriteLogFile6_clbk = void (WINAPIV*)(struct CLogFile*, char*, int, bool, bool, bool, CLogFileSetWriteLogFile6_ptr);
        using CLogFileWrite8_ptr = void (WINAPIV*)(struct CLogFile*, char*);
        using CLogFileWrite8_clbk = void (WINAPIV*)(struct CLogFile*, char*, CLogFileWrite8_ptr);
        using CLogFileWriteFromArg10_ptr = void (WINAPIV*)(struct CLogFile*, char*, char*);
        using CLogFileWriteFromArg10_clbk = void (WINAPIV*)(struct CLogFile*, char*, char*, CLogFileWriteFromArg10_ptr);
        using CLogFileWriteFromArg12_ptr = void (WINAPIV*)(struct CLogFile*, wchar_t*, char*);
        using CLogFileWriteFromArg12_clbk = void (WINAPIV*)(struct CLogFile*, wchar_t*, char*, CLogFileWriteFromArg12_ptr);
        using CLogFileWriteString14_ptr = void (WINAPIV*)(struct CLogFile*, char*);
        using CLogFileWriteString14_clbk = void (WINAPIV*)(struct CLogFile*, char*, CLogFileWriteString14_ptr);
        
        using CLogFiledtor_CLogFile18_ptr = void (WINAPIV*)(struct CLogFile*);
        using CLogFiledtor_CLogFile18_clbk = void (WINAPIV*)(struct CLogFile*, CLogFiledtor_CLogFile18_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE