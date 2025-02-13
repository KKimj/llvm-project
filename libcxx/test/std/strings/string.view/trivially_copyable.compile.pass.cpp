//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// P2251 was voted into C++23, but is supported even in C++17 mode by all vendors.

// <string_view>

#include <string_view>
#include <type_traits>

static_assert(std::is_trivially_copyable<std::basic_string_view<char> >::value, "");
static_assert(std::is_trivially_copyable<std::basic_string_view<wchar_t> >::value, "");
#ifndef _LIBCPP_HAS_NO_CHAR8_T
static_assert(std::is_trivially_copyable<std::basic_string_view<char8_t> >::value, "");
#endif
static_assert(std::is_trivially_copyable<std::basic_string_view<char16_t> >::value, "");
static_assert(std::is_trivially_copyable<std::basic_string_view<char32_t> >::value, "");
