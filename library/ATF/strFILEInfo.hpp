// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <strFILE.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using strFILEload5_ptr = bool (WINAPIV*)(struct strFILE*, char*);
        using strFILEload5_clbk = bool (WINAPIV*)(struct strFILE*, char*, strFILEload5_ptr);
        using strFILEread_line_count7_ptr = int (WINAPIV*)(struct strFILE*);
        using strFILEread_line_count7_clbk = int (WINAPIV*)(struct strFILE*, strFILEread_line_count7_ptr);
        
        using strFILEctor_strFILE9_ptr = void (WINAPIV*)(struct strFILE*);
        using strFILEctor_strFILE9_clbk = void (WINAPIV*)(struct strFILE*, strFILEctor_strFILE9_ptr);
        using strFILEword11_ptr = bool (WINAPIV*)(struct strFILE*, char*);
        using strFILEword11_clbk = bool (WINAPIV*)(struct strFILE*, char*, strFILEword11_ptr);
        using strFILEword13_ptr = bool (WINAPIV*)(struct strFILE*, long double*);
        using strFILEword13_clbk = bool (WINAPIV*)(struct strFILE*, long double*, strFILEword13_ptr);
        using strFILEword15_ptr = bool (WINAPIV*)(struct strFILE*, float*);
        using strFILEword15_clbk = bool (WINAPIV*)(struct strFILE*, float*, strFILEword15_ptr);
        using strFILEword17_ptr = bool (WINAPIV*)(struct strFILE*, int*);
        using strFILEword17_clbk = bool (WINAPIV*)(struct strFILE*, int*, strFILEword17_ptr);
        
        using strFILEdtor_strFILE19_ptr = void (WINAPIV*)(struct strFILE*);
        using strFILEdtor_strFILE19_clbk = void (WINAPIV*)(struct strFILE*, strFILEdtor_strFILE19_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE