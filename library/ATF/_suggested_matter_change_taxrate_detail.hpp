// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_suggested_matter_change_taxrate_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_suggested_matter_change_taxratector__suggested_matter_change_taxrate2_ptr _suggested_matter_change_taxratector__suggested_matter_change_taxrate2_next(nullptr);
        info::_suggested_matter_change_taxratector__suggested_matter_change_taxrate2_clbk _suggested_matter_change_taxratector__suggested_matter_change_taxrate2_user(nullptr);
        info::_suggested_matter_change_taxrateinit4_ptr _suggested_matter_change_taxrateinit4_next(nullptr);
        info::_suggested_matter_change_taxrateinit4_clbk _suggested_matter_change_taxrateinit4_user(nullptr);
        
        void _suggested_matter_change_taxratector__suggested_matter_change_taxrate2_wrapper(struct _suggested_matter_change_taxrate* _this)
        {
           _suggested_matter_change_taxratector__suggested_matter_change_taxrate2_user(_this, _suggested_matter_change_taxratector__suggested_matter_change_taxrate2_next);
        };
        void _suggested_matter_change_taxrateinit4_wrapper(struct _suggested_matter_change_taxrate* _this)
        {
           _suggested_matter_change_taxrateinit4_user(_this, _suggested_matter_change_taxrateinit4_next);
        };
        
        hook_record _suggested_matter_change_taxrate_functions[] = {
        {   (LPVOID)0x1402d97c0L,
            (LPVOID *)&_suggested_matter_change_taxratector__suggested_matter_change_taxrate2_user,
            (LPVOID *)&_suggested_matter_change_taxratector__suggested_matter_change_taxrate2_next,
            (LPVOID)cast_pointer_function(_suggested_matter_change_taxratector__suggested_matter_change_taxrate2_wrapper),
            (LPVOID)cast_pointer_function((void(_suggested_matter_change_taxrate::*)())&_suggested_matter_change_taxrate::ctor__suggested_matter_change_taxrate) },
        {   (LPVOID)0x1402d9810L,
            (LPVOID *)&_suggested_matter_change_taxrateinit4_user,
            (LPVOID *)&_suggested_matter_change_taxrateinit4_next,
            (LPVOID)cast_pointer_function(_suggested_matter_change_taxrateinit4_wrapper),
            (LPVOID)cast_pointer_function((void(_suggested_matter_change_taxrate::*)())&_suggested_matter_change_taxrate::init) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE