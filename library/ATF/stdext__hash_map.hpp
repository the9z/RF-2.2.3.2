// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <std__less.hpp>
#include <std__pair.hpp>
#include <std__allocator.hpp>
#include <stdext__hash_compare.hpp>
#include <stdext___Hash.hpp>
#include <stdext___Hmap_traits.hpp>


START_ATF_NAMESPACE
    namespace stdext
    {
        template<class _Kty,
            typename _Ty,
            typename _Tr = hash_compare<_Kty, std::less<_Kty> >,
            typename _Alloc = std::allocator<std::pair<const _Kty, _Ty> > >
            struct  hash_map : _Hash<_Kty, _Ty, _Tr, _Alloc, false>
        {
        };
    }; // end namespace stdext
END_ATF_NAMESPACE
