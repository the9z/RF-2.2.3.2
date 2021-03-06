#include <_pt_inform_commission_income_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_pt_inform_commission_income_zoclsize2_ptr _pt_inform_commission_income_zoclsize2_next(nullptr);
        Info::_pt_inform_commission_income_zoclsize2_clbk _pt_inform_commission_income_zoclsize2_user(nullptr);
        
        int _pt_inform_commission_income_zoclsize2_wrapper(struct _pt_inform_commission_income_zocl* _this)
        {
           return _pt_inform_commission_income_zoclsize2_user(_this, _pt_inform_commission_income_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _pt_inform_commission_income_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400f05c0L,
                (LPVOID *)&_pt_inform_commission_income_zoclsize2_user,
                (LPVOID *)&_pt_inform_commission_income_zoclsize2_next,
                (LPVOID)cast_pointer_function(_pt_inform_commission_income_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_pt_inform_commission_income_zocl::*)())&_pt_inform_commission_income_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
