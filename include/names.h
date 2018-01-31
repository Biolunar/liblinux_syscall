/*
 * Copyright 2017 Mahdi Khanalizadeh
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef HEADER_LIBLINUX_SYSCALL_NAMES_H_INCLUDED
#define HEADER_LIBLINUX_SYSCALL_NAMES_H_INCLUDED

#ifdef __i386__
# include <x86/names.h>
#elif __x86_64__
# ifdef __ILP32__
#  include <x32/names.h>
# else // __ILP32__
#  include <x86_64/names.h>
# endif // __ILP32__
#elif __aarch64__
# include <arm64/names.h>
#endif

#endif // !HEADER_LIBLINUX_SYSCALL_NAMES_H_INCLUDED
