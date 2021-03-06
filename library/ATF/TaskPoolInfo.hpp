// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <TaskPool.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using TaskPoolInitialize2_ptr = TaskPool::RCODE (WINAPIV*)(struct TaskPool*, int, int);
        using TaskPoolInitialize2_clbk = TaskPool::RCODE (WINAPIV*)(struct TaskPool*, int, int, TaskPoolInitialize2_ptr);
        using TaskPoolIsEmpty4_ptr = bool (WINAPIV*)(struct TaskPool*);
        using TaskPoolIsEmpty4_clbk = bool (WINAPIV*)(struct TaskPool*, TaskPoolIsEmpty4_ptr);
        using TaskPoolPopCompleteTsk6_ptr = struct Task* (WINAPIV*)(struct TaskPool*, unsigned int*);
        using TaskPoolPopCompleteTsk6_clbk = struct Task* (WINAPIV*)(struct TaskPool*, unsigned int*, TaskPoolPopCompleteTsk6_ptr);
        using TaskPoolPopWaitTsk8_ptr = struct Task* (WINAPIV*)(struct TaskPool*, unsigned int*);
        using TaskPoolPopWaitTsk8_clbk = struct Task* (WINAPIV*)(struct TaskPool*, unsigned int*, TaskPoolPopWaitTsk8_ptr);
        using TaskPoolPushCompleteTsk10_ptr = TaskPool::RCODE (WINAPIV*)(struct TaskPool*, unsigned int);
        using TaskPoolPushCompleteTsk10_clbk = TaskPool::RCODE (WINAPIV*)(struct TaskPool*, unsigned int, TaskPoolPushCompleteTsk10_ptr);
        using TaskPoolPushEmptyTsk12_ptr = TaskPool::RCODE (WINAPIV*)(struct TaskPool*, unsigned int);
        using TaskPoolPushEmptyTsk12_clbk = TaskPool::RCODE (WINAPIV*)(struct TaskPool*, unsigned int, TaskPoolPushEmptyTsk12_ptr);
        using TaskPoolPushWaitTsk14_ptr = TaskPool::RCODE (WINAPIV*)(struct TaskPool*, int, char*, uint64_t);
        using TaskPoolPushWaitTsk14_clbk = TaskPool::RCODE (WINAPIV*)(struct TaskPool*, int, char*, uint64_t, TaskPoolPushWaitTsk14_ptr);
        using TaskPoolRelease16_ptr = void (WINAPIV*)(struct TaskPool*);
        using TaskPoolRelease16_clbk = void (WINAPIV*)(struct TaskPool*, TaskPoolRelease16_ptr);
        
        using TaskPoolctor_TaskPool18_ptr = void (WINAPIV*)(struct TaskPool*);
        using TaskPoolctor_TaskPool18_clbk = void (WINAPIV*)(struct TaskPool*, TaskPoolctor_TaskPool18_ptr);
        using TaskPool_create_task20_ptr = bool (WINAPIV*)(struct TaskPool*, int);
        using TaskPool_create_task20_clbk = bool (WINAPIV*)(struct TaskPool*, int, TaskPool_create_task20_ptr);
        using TaskPool_init_index_lists22_ptr = bool (WINAPIV*)(struct TaskPool*);
        using TaskPool_init_index_lists22_clbk = bool (WINAPIV*)(struct TaskPool*, TaskPool_init_index_lists22_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
