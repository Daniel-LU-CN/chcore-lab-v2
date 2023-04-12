/*
 * Copyright (c) 2022 Institute of Parallel And Distributed Systems (IPADS)
 * ChCore-Lab is licensed under the Mulan PSL v1.
 * You can use this software according to the terms and conditions of the Mulan
 * PSL v1. You may obtain a copy of Mulan PSL v1 at:
 *     http://license.coscl.org.cn/MulanPSL
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY
 * KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO
 * NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE. See the
 * Mulan PSL v1 for more details.
 */

#pragma once

#include <lib/printk.h>

#define lab_check(expr, test_name)                                        \
        do {                                                              \
                if (expr) {                                               \
                        printk("[TEST] %s: OK\n", test_name);             \
                } else {                                                  \
                        printk("[TEST] %s: FAIL, loc: %s:%d, expr: %s\n", \
                               test_name,                                 \
                               __FILE__,                                  \
                               __LINE__,                                  \
                               #expr);                                    \
                }                                                         \
        } while (0)

#define lab_assert(expr)           \
        do {                       \
                ok = ok && (expr); \
        } while (0)
