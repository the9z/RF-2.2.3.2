// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <TimeLimitJade.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using TimeLimitJadeCheckEndTime2_ptr = int (WINAPIV*)(struct TimeLimitJade*);
        using TimeLimitJadeCheckEndTime2_clbk = int (WINAPIV*)(struct TimeLimitJade*, TimeLimitJadeCheckEndTime2_ptr);
        using TimeLimitJadeCheckStartTime4_ptr = int (WINAPIV*)(struct TimeLimitJade*);
        using TimeLimitJadeCheckStartTime4_clbk = int (WINAPIV*)(struct TimeLimitJade*, TimeLimitJadeCheckStartTime4_ptr);
        using TimeLimitJadeDeleteUseList6_ptr = bool (WINAPIV*)(struct TimeLimitJade*, struct _STORAGE_LIST::_db_con*, bool);
        using TimeLimitJadeDeleteUseList6_clbk = bool (WINAPIV*)(struct TimeLimitJade*, struct _STORAGE_LIST::_db_con*, bool, TimeLimitJadeDeleteUseList6_ptr);
        using TimeLimitJadeDeleteWaitList8_ptr = bool (WINAPIV*)(struct TimeLimitJade*, struct _STORAGE_LIST::_db_con*);
        using TimeLimitJadeDeleteWaitList8_clbk = bool (WINAPIV*)(struct TimeLimitJade*, struct _STORAGE_LIST::_db_con*, TimeLimitJadeDeleteWaitList8_ptr);
        using TimeLimitJadeInit10_ptr = bool (WINAPIV*)(struct TimeLimitJade*);
        using TimeLimitJadeInit10_clbk = bool (WINAPIV*)(struct TimeLimitJade*, TimeLimitJadeInit10_ptr);
        using TimeLimitJadeInitUse12_ptr = bool (WINAPIV*)(struct TimeLimitJade*);
        using TimeLimitJadeInitUse12_clbk = bool (WINAPIV*)(struct TimeLimitJade*, TimeLimitJadeInitUse12_ptr);
        using TimeLimitJadeInitWait14_ptr = bool (WINAPIV*)(struct TimeLimitJade*);
        using TimeLimitJadeInitWait14_clbk = bool (WINAPIV*)(struct TimeLimitJade*, TimeLimitJadeInitWait14_ptr);
        using TimeLimitJadeInsertUseList16_ptr = bool (WINAPIV*)(struct TimeLimitJade*, struct _STORAGE_LIST::_db_con*, unsigned int, unsigned int);
        using TimeLimitJadeInsertUseList16_clbk = bool (WINAPIV*)(struct TimeLimitJade*, struct _STORAGE_LIST::_db_con*, unsigned int, unsigned int, TimeLimitJadeInsertUseList16_ptr);
        using TimeLimitJadeInsertWaitList18_ptr = bool (WINAPIV*)(struct TimeLimitJade*, struct _STORAGE_LIST::_db_con*);
        using TimeLimitJadeInsertWaitList18_clbk = bool (WINAPIV*)(struct TimeLimitJade*, struct _STORAGE_LIST::_db_con*, TimeLimitJadeInsertWaitList18_ptr);
        using TimeLimitJadeRelease20_ptr = void (WINAPIV*)(struct TimeLimitJade*);
        using TimeLimitJadeRelease20_clbk = void (WINAPIV*)(struct TimeLimitJade*, TimeLimitJadeRelease20_ptr);
        
        using TimeLimitJadector_TimeLimitJade22_ptr = void (WINAPIV*)(struct TimeLimitJade*, struct CPlayer*);
        using TimeLimitJadector_TimeLimitJade22_clbk = void (WINAPIV*)(struct TimeLimitJade*, struct CPlayer*, TimeLimitJadector_TimeLimitJade22_ptr);
        
        using TimeLimitJadedtor_TimeLimitJade26_ptr = void (WINAPIV*)(struct TimeLimitJade*);
        using TimeLimitJadedtor_TimeLimitJade26_clbk = void (WINAPIV*)(struct TimeLimitJade*, TimeLimitJadedtor_TimeLimitJade26_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE