// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "std__ios_base_info.hpp"


START_ATF_NAMESPACE
    namespace std
    {
        namespace detail
        {
            info::std__ios_baseeof1_ptr std__ios_baseeof1_next(nullptr);
            info::std__ios_baseeof1_clbk std__ios_baseeof1_user(nullptr);
            info::std__ios_baseflags2_ptr std__ios_baseflags2_next(nullptr);
            info::std__ios_baseflags2_clbk std__ios_baseflags2_user(nullptr);
            info::std__ios_basegood3_ptr std__ios_basegood3_next(nullptr);
            info::std__ios_basegood3_clbk std__ios_basegood3_user(nullptr);
            info::std__ios_basewidth4_ptr std__ios_basewidth4_next(nullptr);
            info::std__ios_basewidth4_clbk std__ios_basewidth4_user(nullptr);
            info::std__ios_basewidth5_ptr std__ios_basewidth5_next(nullptr);
            info::std__ios_basewidth5_clbk std__ios_basewidth5_user(nullptr);
            
            bool std__ios_baseeof1_wrapper(struct std::ios_base* _this)
            {
               return std__ios_baseeof1_user(_this, std__ios_baseeof1_next);
            };
            int64_t std__ios_baseflags2_wrapper(struct std::ios_base* _this)
            {
               return std__ios_baseflags2_user(_this, std__ios_baseflags2_next);
            };
            bool std__ios_basegood3_wrapper(struct std::ios_base* _this)
            {
               return std__ios_basegood3_user(_this, std__ios_basegood3_next);
            };
            int64_t std__ios_basewidth4_wrapper(struct std::ios_base* _this, int64_t arg_0)
            {
               return std__ios_basewidth4_user(_this, arg_0, std__ios_basewidth4_next);
            };
            int64_t std__ios_basewidth5_wrapper(struct std::ios_base* _this)
            {
               return std__ios_basewidth5_user(_this, std__ios_basewidth5_next);
            };
            
            hook_record ios_base_functions[] = {
            {   (LPVOID)0x140676356L,
                (LPVOID *)&std__ios_baseeof1_user,
                (LPVOID *)&std__ios_baseeof1_next,
                (LPVOID)cast_pointer_function(std__ios_baseeof1_wrapper),
                (LPVOID)cast_pointer_function((bool(std::ios_base::*)())&std::ios_base::eof) },
            {   (LPVOID)0x1406762c6L,
                (LPVOID *)&std__ios_baseflags2_user,
                (LPVOID *)&std__ios_baseflags2_next,
                (LPVOID)cast_pointer_function(std__ios_baseflags2_wrapper),
                (LPVOID)cast_pointer_function((int64_t(std::ios_base::*)())&std::ios_base::flags) },
            {   (LPVOID)0x140676308L,
                (LPVOID *)&std__ios_basegood3_user,
                (LPVOID *)&std__ios_basegood3_next,
                (LPVOID)cast_pointer_function(std__ios_basegood3_wrapper),
                (LPVOID)cast_pointer_function((bool(std::ios_base::*)())&std::ios_base::good) },
            {   (LPVOID)0x1406762d2L,
                (LPVOID *)&std__ios_basewidth4_user,
                (LPVOID *)&std__ios_basewidth4_next,
                (LPVOID)cast_pointer_function(std__ios_basewidth4_wrapper),
                (LPVOID)cast_pointer_function((int64_t(std::ios_base::*)(int64_t))&std::ios_base::width) },
            {   (LPVOID)0x1406762f6L,
                (LPVOID *)&std__ios_basewidth5_user,
                (LPVOID *)&std__ios_basewidth5_next,
                (LPVOID)cast_pointer_function(std__ios_basewidth5_wrapper),
                (LPVOID)cast_pointer_function((int64_t(std::ios_base::*)())&std::ios_base::width) },
            
            };
            
        }; // end namespace detail
    }; // end namespace std
END_ATF_NAMESPACE