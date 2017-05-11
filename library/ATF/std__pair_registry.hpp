// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "./common/ATFCore.hpp"
#include "std__pair_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class std::pair<int,int>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : std::detailstd::pair<int,int>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE
#include "./common/ATFCore.hpp"
#include "std__pair_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class std::pair<int,CNationCodeStr *>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : std::detailstd::pair<int,CNationCodeStr *>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE
#include "./common/ATFCore.hpp"
#include "std__pair_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class std::pair<int,CAsyncLogInfo *>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : std::detailstd::pair<int,CAsyncLogInfo *>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE
#include "./common/ATFCore.hpp"
#include "std__pair_detail.hpp"


START_ATF_NAMESPACE
    namespace registry
    {
        class std::pair<int,CNationSettingFactory *>_registry : public IRegistry
        {
            public: virtual void registry() {
                auto& hook_core = CATFCore::get_instance();
                for (auto& r : std::detailstd::pair<int,CNationSettingFactory *>_functions)
                    hook_core.reg_wrapper(r.pBind, r);
            }
        };
        
    }; // end namespace registry
END_ATF_NAMESPACE