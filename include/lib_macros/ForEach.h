/*
 * Copyright (C) 2020-2024, HENSOLDT Cyber GmbH
 * 
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * For commercial licensing, contact: info.cyber@hensoldt.net
 */

/**
 * @file
 *
 * Macros to be used in variadic connector macros.
 *
 */

#pragma once

/*
 * The following are just helper macros, to do a FOR_EACH loop with no extra
 * param and have the "loop index" in the right order.
 */

#define FOR_EACH_0P_8_1(_fn_,_inst_,_cli_)      _fn_(_inst_,_cli_,8)
#define FOR_EACH_0P_8_2(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,7) \
    FOR_EACH_0P_8_1(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_8_3(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,6) \
    FOR_EACH_0P_8_2(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_8_4(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,5) \
    FOR_EACH_0P_8_3(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_8_5(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,4) \
    FOR_EACH_0P_8_4(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_8_6(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,3) \
    FOR_EACH_0P_8_5(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_8_7(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,2) \
    FOR_EACH_0P_8_6(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_8(_fn_,_inst_,_cli_, ...)   _fn_(_inst_,_cli_,1) \
    FOR_EACH_0P_8_7(_fn_,_inst_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_0P_7_1(_fn_,_inst_,_cli_)      _fn_(_inst_,_cli_,7)
#define FOR_EACH_0P_7_2(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,6) \
    FOR_EACH_0P_7_1(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_7_3(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,5) \
    FOR_EACH_0P_7_2(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_7_4(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,4) \
    FOR_EACH_0P_7_3(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_7_5(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,3) \
    FOR_EACH_0P_7_4(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_7_6(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,2) \
    FOR_EACH_0P_7_5(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_7(_fn_,_inst_,_cli_, ...)   _fn_(_inst_,_cli_,1) \
    FOR_EACH_0P_7_6(_fn_,_inst_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_0P_6_1(_fn_,_inst_,_cli_)      _fn_(_inst_,_cli_,6)
#define FOR_EACH_0P_6_2(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,5) \
    FOR_EACH_0P_6_1(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_6_3(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,4) \
    FOR_EACH_0P_6_2(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_6_4(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,3) \
    FOR_EACH_0P_6_3(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_6_5(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,2) \
    FOR_EACH_0P_6_4(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_6(_fn_,_inst_,_cli_, ...)   _fn_(_inst_,_cli_,1) \
    FOR_EACH_0P_6_5(_fn_,_inst_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_0P_5_1(_fn_,_inst_,_cli_)      _fn_(_inst_,_cli_,5)
#define FOR_EACH_0P_5_2(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,4) \
    FOR_EACH_0P_5_1(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_5_3(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,3) \
    FOR_EACH_0P_5_2(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_5_4(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,2) \
    FOR_EACH_0P_5_3(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_5(_fn_,_inst_,_cli_, ...)   _fn_(_inst_,_cli_,1) \
    FOR_EACH_0P_5_4(_fn_,_inst_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_0P_4_1(_fn_,_inst_,_cli_)      _fn_(_inst_,_cli_,4)
#define FOR_EACH_0P_4_2(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,3) \
    FOR_EACH_0P_4_1(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_4_3(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,2) \
    FOR_EACH_0P_4_2(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_4(_fn_,_inst_,_cli_, ...)   _fn_(_inst_,_cli_,1) \
    FOR_EACH_0P_4_3(_fn_,_inst_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_0P_3_1(_fn_,_inst_,_cli_)      _fn_(_inst_,_cli_,3)
#define FOR_EACH_0P_3_2(_fn_,_inst_,_cli_, ...) _fn_(_inst_,_cli_,2) \
    FOR_EACH_0P_3_1(_fn_,_inst_,__VA_ARGS__)
#define FOR_EACH_0P_3(_fn_,_inst_,_cli_, ...)   _fn_(_inst_,_cli_,1) \
    FOR_EACH_0P_3_2(_fn_,_inst_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_0P_2_1(_fn_,_inst_,_cli_)      _fn_(_inst_,_cli_,2)
#define FOR_EACH_0P_2(_fn_,_inst_,_cli_, ...)   _fn_(_inst_,_cli_,1) \
    FOR_EACH_0P_2_1(_fn_,_inst_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_0P_1(_fn_,_inst_,_cli_)        _fn_(_inst_,_cli_,1)
// -----------------------------------------------------------------------------
#define FOR_EACH_0P_GET_MACRO( \
    _0,_1,_2,_3,_4,_5,_6,_7,_8,NAME,...) \
        FOR_EACH_0P_ ## NAME


/*
 * The following are just helper macros, to do a FOR_EACH loop with one extra
 * param and have the "loop index" in the right order.
 */
#define FOR_EACH_1P_16_1(_fn_,_inst_,_cli_,_p0_)      _fn_(_inst_,_cli_,_p0_,16)
#define FOR_EACH_1P_16_2(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,15) \
    FOR_EACH_1P_16_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_16_3(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,14) \
    FOR_EACH_1P_16_2(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_16_4(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,13) \
    FOR_EACH_1P_16_3(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_16_5(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,12) \
    FOR_EACH_1P_16_4(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_16_6(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,11) \
    FOR_EACH_1P_16_5(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_16_7(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,10) \
    FOR_EACH_1P_16_6(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_16_8(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,9) \
    FOR_EACH_1P_16_7(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_16_9(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,8) \
    FOR_EACH_1P_16_8(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_16_10(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,7) \
    FOR_EACH_1P_16_9(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_16_11(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,6) \
    FOR_EACH_1P_16_10(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_16_12(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,5) \
    FOR_EACH_1P_16_11(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_16_13(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,4) \
    FOR_EACH_1P_16_12(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_16_14(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,3) \
    FOR_EACH_1P_16_13(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_16_15(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,2) \
    FOR_EACH_1P_16_14(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_16(_fn_,_inst_,_cli_,_p0_, ...)   _fn_(_inst_,_cli_,_p0_,1) \
    FOR_EACH_1P_16_15(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_1P_15_1(_fn_,_inst_,_cli_,_p0_)      _fn_(_inst_,_cli_,_p0_,15)
#define FOR_EACH_1P_15_2(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,14) \
    FOR_EACH_1P_15_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_15_3(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,13) \
    FOR_EACH_1P_15_2(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_15_4(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,12) \
    FOR_EACH_1P_15_3(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_15_5(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,11) \
    FOR_EACH_1P_15_4(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_15_6(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,10) \
    FOR_EACH_1P_15_5(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_15_7(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,9) \
    FOR_EACH_1P_15_6(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_15_8(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,8) \
    FOR_EACH_1P_15_7(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_15_9(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,7) \
    FOR_EACH_1P_15_8(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_15_10(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,6) \
    FOR_EACH_1P_15_9(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_15_11(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,5) \
    FOR_EACH_1P_15_10(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_15_12(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,4) \
    FOR_EACH_1P_15_11(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_15_13(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,3) \
    FOR_EACH_1P_15_12(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_15_14(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,2) \
    FOR_EACH_1P_15_13(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_15(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,1) \
    FOR_EACH_1P_15_14(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_1P_14_1(_fn_,_inst_,_cli_,_p0_)      _fn_(_inst_,_cli_,_p0_,14)
#define FOR_EACH_1P_14_2(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,13) \
    FOR_EACH_1P_14_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_14_3(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,12) \
    FOR_EACH_1P_14_2(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_14_4(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,11) \
    FOR_EACH_1P_14_3(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_14_5(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,10) \
    FOR_EACH_1P_14_4(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_14_6(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,9) \
    FOR_EACH_1P_14_5(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_14_7(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,8) \
    FOR_EACH_1P_14_6(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_14_8(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,7) \
    FOR_EACH_1P_14_7(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_14_9(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,6) \
    FOR_EACH_1P_14_8(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_14_10(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,5) \
    FOR_EACH_1P_14_9(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_14_11(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,4) \
    FOR_EACH_1P_14_10(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_14_12(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,3) \
    FOR_EACH_1P_14_11(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_14_13(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,2) \
    FOR_EACH_1P_14_12(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_14(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,1) \
    FOR_EACH_1P_14_13(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_1P_13_1(_fn_,_inst_,_cli_,_p0_)      _fn_(_inst_,_cli_,_p0_,13)
#define FOR_EACH_1P_13_2(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,12) \
    FOR_EACH_1P_13_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_13_3(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,11) \
    FOR_EACH_1P_13_2(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_13_4(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,10) \
    FOR_EACH_1P_13_3(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_13_5(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,9) \
    FOR_EACH_1P_13_4(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_13_6(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,8) \
    FOR_EACH_1P_13_5(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_13_7(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,7) \
    FOR_EACH_1P_13_6(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_13_8(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,6) \
    FOR_EACH_1P_13_7(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_13_9(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,5) \
    FOR_EACH_1P_13_8(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_13_10(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,4) \
    FOR_EACH_1P_13_9(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_13_11(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,3) \
    FOR_EACH_1P_13_10(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_13_12(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,2) \
    FOR_EACH_1P_13_11(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_13(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,1) \
    FOR_EACH_1P_13_12(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_1P_12_1(_fn_,_inst_,_cli_,_p0_)      _fn_(_inst_,_cli_,_p0_,12)
#define FOR_EACH_1P_12_2(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,11) \
    FOR_EACH_1P_12_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_12_3(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,10) \
    FOR_EACH_1P_12_2(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_12_4(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,9) \
    FOR_EACH_1P_12_3(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_12_5(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,8) \
    FOR_EACH_1P_12_4(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_12_6(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,7) \
    FOR_EACH_1P_12_5(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_12_7(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,6) \
    FOR_EACH_1P_12_6(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_12_8(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,5) \
    FOR_EACH_1P_12_7(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_12_9(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,4) \
    FOR_EACH_1P_12_8(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_12_10(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,3) \
    FOR_EACH_1P_12_9(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_12_11(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,2) \
    FOR_EACH_1P_12_10(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_12(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,1) \
    FOR_EACH_1P_12_11(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_1P_11_1(_fn_,_inst_,_cli_,_p0_)      _fn_(_inst_,_cli_,_p0_,11)
#define FOR_EACH_1P_11_2(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,10) \
    FOR_EACH_1P_11_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_11_3(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,9) \
    FOR_EACH_1P_11_2(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_11_4(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,8) \
    FOR_EACH_1P_11_3(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_11_5(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,7) \
    FOR_EACH_1P_11_4(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_11_6(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,6) \
    FOR_EACH_1P_11_5(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_11_7(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,5) \
    FOR_EACH_1P_11_6(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_11_8(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,4) \
    FOR_EACH_1P_11_7(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_11_9(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,3) \
    FOR_EACH_1P_11_8(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_11_10(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,2) \
    FOR_EACH_1P_11_9(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_11(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,1) \
    FOR_EACH_1P_11_10(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_1P_10_1(_fn_,_inst_,_cli_,_p0_)      _fn_(_inst_,_cli_,_p0_,10)
#define FOR_EACH_1P_10_2(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,9) \
    FOR_EACH_1P_10_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_10_3(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,8) \
    FOR_EACH_1P_10_2(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_10_4(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,7) \
    FOR_EACH_1P_10_3(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_10_5(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,6) \
    FOR_EACH_1P_10_4(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_10_6(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,5) \
    FOR_EACH_1P_10_5(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_10_7(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,4) \
    FOR_EACH_1P_10_6(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_10_8(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,3) \
    FOR_EACH_1P_10_7(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_10_9(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,2) \
    FOR_EACH_1P_10_8(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_10(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,1) \
    FOR_EACH_1P_10_9(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_1P_9_1(_fn_,_inst_,_cli_,_p0_)      _fn_(_inst_,_cli_,_p0_,9)
#define FOR_EACH_1P_9_2(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,8) \
    FOR_EACH_1P_9_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_9_3(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,7) \
    FOR_EACH_1P_9_2(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_9_4(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,6) \
    FOR_EACH_1P_9_3(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_9_5(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,5) \
    FOR_EACH_1P_9_4(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_9_6(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,4) \
    FOR_EACH_1P_9_5(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_9_7(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,3) \
    FOR_EACH_1P_9_6(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_9_8(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,2) \
    FOR_EACH_1P_9_7(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_9(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,1) \
    FOR_EACH_1P_9_8(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_1P_8_1(_fn_,_inst_,_cli_,_p0_)      _fn_(_inst_,_cli_,_p0_,8)
#define FOR_EACH_1P_8_2(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,7) \
    FOR_EACH_1P_8_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_8_3(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,6) \
    FOR_EACH_1P_8_2(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_8_4(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,5) \
    FOR_EACH_1P_8_3(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_8_5(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,4) \
    FOR_EACH_1P_8_4(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_8_6(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,3) \
    FOR_EACH_1P_8_5(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_8_7(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,2) \
    FOR_EACH_1P_8_6(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_8(_fn_,_inst_,_cli_,_p0_, ...)   _fn_(_inst_,_cli_,_p0_,1) \
    FOR_EACH_1P_8_7(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_1P_7_1(_fn_,_inst_,_cli_,_p0_)      _fn_(_inst_,_cli_,_p0_,7)
#define FOR_EACH_1P_7_2(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,6) \
    FOR_EACH_1P_7_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_7_3(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,5) \
    FOR_EACH_1P_7_2(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_7_4(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,4) \
    FOR_EACH_1P_7_3(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_7_5(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,3) \
    FOR_EACH_1P_7_4(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_7_6(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,2) \
    FOR_EACH_1P_7_5(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_7(_fn_,_inst_,_cli_,_p0_, ...)   _fn_(_inst_,_cli_,_p0_,1) \
    FOR_EACH_1P_7_6(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_1P_6_1(_fn_,_inst_,_cli_,_p0_)      _fn_(_inst_,_cli_,_p0_,6)
#define FOR_EACH_1P_6_2(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,5) \
    FOR_EACH_1P_6_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_6_3(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,4) \
    FOR_EACH_1P_6_2(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_6_4(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,3) \
    FOR_EACH_1P_6_3(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_6_5(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,2) \
    FOR_EACH_1P_6_4(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_6(_fn_,_inst_,_cli_,_p0_, ...)   _fn_(_inst_,_cli_,_p0_,1) \
    FOR_EACH_1P_6_5(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_1P_5_1(_fn_,_inst_,_cli_,_p0_)      _fn_(_inst_,_cli_,_p0_,5)
#define FOR_EACH_1P_5_2(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,4) \
    FOR_EACH_1P_5_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_5_3(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,3) \
    FOR_EACH_1P_5_2(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_5_4(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,2) \
    FOR_EACH_1P_5_3(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_5(_fn_,_inst_,_cli_,_p0_, ...)   _fn_(_inst_,_cli_,_p0_,1) \
    FOR_EACH_1P_5_4(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_1P_4_1(_fn_,_inst_,_cli_,_p0_)      _fn_(_inst_,_cli_,_p0_,4)
#define FOR_EACH_1P_4_2(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,3) \
    FOR_EACH_1P_4_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_4_3(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,2) \
    FOR_EACH_1P_4_2(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_4(_fn_,_inst_,_cli_,_p0_, ...)   _fn_(_inst_,_cli_,_p0_,1) \
    FOR_EACH_1P_4_3(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_1P_3_1(_fn_,_inst_,_cli_,_p0_)      _fn_(_inst_,_cli_,_p0_,3)
#define FOR_EACH_1P_3_2(_fn_,_inst_,_cli_,_p0_, ...) _fn_(_inst_,_cli_,_p0_,2) \
    FOR_EACH_1P_3_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_1P_3(_fn_,_inst_,_cli_,_p0_, ...)   _fn_(_inst_,_cli_,_p0_,1) \
    FOR_EACH_1P_3_2(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_1P_2_1(_fn_,_inst_,_cli_,_p0_)      _fn_(_inst_,_cli_,_p0_,2)
#define FOR_EACH_1P_2(_fn_,_inst_,_cli_,_p0_, ...)   _fn_(_inst_,_cli_,_p0_,1) \
    FOR_EACH_1P_2_1(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_1P_1(_fn_,_inst_,_cli_,_p0_)        _fn_(_inst_,_cli_,_p0_,1)
// -----------------------------------------------------------------------------
#define FOR_EACH_1P_GET_MACRO( \
    _0,_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,NAME,...) \
        FOR_EACH_1P_ ## NAME

/*
 * The following are just helper macros, to do a FOR_EACH loop with two extra
 * params and have the "loop index" in the right order.
 */

#define FOR_EACH_2P_8_1(_fn_,_inst_,_cli_,_p0_,_p1_)      _fn_(_inst_,_cli_,_p0_,_p1_,8)
#define FOR_EACH_2P_8_2(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,7) \
    FOR_EACH_2P_8_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_8_3(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,6) \
    FOR_EACH_2P_8_2(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_8_4(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,5) \
    FOR_EACH_2P_8_3(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_8_5(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,4) \
    FOR_EACH_2P_8_4(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_8_6(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,3) \
    FOR_EACH_2P_8_5(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_8_7(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,2) \
    FOR_EACH_2P_8_6(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_8(_fn_,_inst_,_cli_,_p0_,_p1_, ...)   _fn_(_inst_,_cli_,_p0_,_p1_,1) \
    FOR_EACH_2P_8_7(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_2P_7_1(_fn_,_inst_,_cli_,_p0_,_p1_)      _fn_(_inst_,_cli_,_p0_,_p1_,7)
#define FOR_EACH_2P_7_2(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,6) \
    FOR_EACH_2P_7_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_7_3(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,5) \
    FOR_EACH_2P_7_2(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_7_4(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,4) \
    FOR_EACH_2P_7_3(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_7_5(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,3) \
    FOR_EACH_2P_7_4(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_7_6(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,2) \
    FOR_EACH_2P_7_5(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_7(_fn_,_inst_,_cli_,_p0_,_p1_, ...)   _fn_(_inst_,_cli_,_p0_,_p1_,1) \
    FOR_EACH_2P_7_6(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_2P_6_1(_fn_,_inst_,_cli_,_p0_,_p1_)      _fn_(_inst_,_cli_,_p0_,_p1_,6)
#define FOR_EACH_2P_6_2(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,5) \
    FOR_EACH_2P_6_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_6_3(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,4) \
    FOR_EACH_2P_6_2(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_6_4(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,3) \
    FOR_EACH_2P_6_3(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_6_5(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,2) \
    FOR_EACH_2P_6_4(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_6(_fn_,_inst_,_cli_,_p0_,_p1_, ...)   _fn_(_inst_,_cli_,_p0_,_p1_,1) \
    FOR_EACH_2P_6_5(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_2P_5_1(_fn_,_inst_,_cli_,_p0_,_p1_)      _fn_(_inst_,_cli_,_p0_,_p1_,5)
#define FOR_EACH_2P_5_2(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,4) \
    FOR_EACH_2P_5_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_5_3(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,3) \
    FOR_EACH_2P_5_2(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_5_4(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,2) \
    FOR_EACH_2P_5_3(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_5(_fn_,_inst_,_cli_,_p0_,_p1_, ...)   _fn_(_inst_,_cli_,_p0_,_p1_,1) \
    FOR_EACH_2P_5_4(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_2P_4_1(_fn_,_inst_,_cli_,_p0_,_p1_)      _fn_(_inst_,_cli_,_p0_,_p1_,4)
#define FOR_EACH_2P_4_2(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,3) \
    FOR_EACH_2P_4_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_4_3(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,2) \
    FOR_EACH_2P_4_2(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_4(_fn_,_inst_,_cli_,_p0_,_p1_, ...)   _fn_(_inst_,_cli_,_p0_,_p1_,1) \
    FOR_EACH_2P_4_3(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_2P_3_1(_fn_,_inst_,_cli_,_p0_,_p1_)      _fn_(_inst_,_cli_,_p0_,_p1_,3)
#define FOR_EACH_2P_3_2(_fn_,_inst_,_cli_,_p0_,_p1_, ...) _fn_(_inst_,_cli_,_p0_,_p1_,2) \
    FOR_EACH_2P_3_1(_fn_,_inst_,_cli_,__VA_ARGS__)
#define FOR_EACH_2P_3(_fn_,_inst_,_cli_,_p0_,_p1_, ...)   _fn_(_inst_,_cli_,_p0_,_p1_,1) \
    FOR_EACH_2P_3_2(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_2P_2_1(_fn_,_inst_,_cli_,_p0_,_p1_)      _fn_(_inst_,_cli_,_p0_,_p1_,2)
#define FOR_EACH_2P_2(_fn_,_inst_,_cli_,_p0_,_p1_, ...)   _fn_(_inst_,_cli_,_p0_,_p1_,1) \
    FOR_EACH_2P_2_1(_fn_,_inst_,_cli_,__VA_ARGS__)
// -----------------------------------------------------------------------------
#define FOR_EACH_2P_1(_fn_,_inst_,_cli_,_p0_,_p1_)        _fn_(_inst_,_cli_,_p0_,_p1_,1)
// -----------------------------------------------------------------------------
#define FOR_EACH_2P_GET_MACRO(_0, \
    _10,_11,_20,_21,_30,_31,_40,_41, \
    _50,_51,_60,_61,_70,_71,_80,_81, \
    NAME,...) \
        FOR_EACH_2P_ ## NAME
// -----------------------------------------------------------------------------

/*
 * The following are just helper macros, to do a FOR_EACH_nFP_nVP_ loop with n
 * fixed parameters and n variable ones.
 */

#define HELPER_FOR_EACH_nFP_nVP_GET_MACRO(_nfp_, _nvp_, _name_) \
            HELPER_FOR_EACH_ ## _nfp_ ## FP_ ## _nvp_ ## VP_ ##  _name_

// All _dxpy_ and the variable args are thrown away.
#define HELPER2_FOR_EACH_nFP_2VP_GET_MACRO( \
            _nfp_, \
            _d0p0_, _d0p1_, \
            _d1p0_, _d1p1_, \
            _d2p0_, _d2p1_, \
            _d3p0_, _d3p1_, \
            _d4p0_, _d4p1_, \
            _d5p0_, _d5p1_, \
            _d6p0_, _d6p1_, \
            _d7p0_, _d7p1_, \
            _name_, \
            ... \
        ) \
            HELPER_FOR_EACH_nFP_nVP_GET_MACRO(_nfp_, 2, _name_)

#define HELPER_FOR_EACH_nFP_2VP_GET_MACRO(_nfp_, ...) \
            HELPER2_FOR_EACH_nFP_2VP_GET_MACRO( \
                _nfp_, \
                __VA_ARGS__, \
                8,8x,7,7x,6,6x,5,5x,4,4x,3,3x,2,2x,1,1x)


#define HELPER_FOR_EACH_0FP_2VP_1(_fn_,_vp0_,_vp1_) \
            _fn_(_vp0_,_vp1_)

#define HELPER_FOR_EACH_0FP_2VP_2(_fn_,_vp0_,_vp1_, ...) \
            _fn_(_vp0_,_vp1_) \
            HELPER_FOR_EACH_0FP_2VP_1(_fn_,__VA_ARGS__)

#define HELPER_FOR_EACH_0FP_2VP_3(_fn_,_vp0_,_vp1_, ...) \
            _fn_(_vp0_,_vp1_) \
            HELPER_FOR_EACH_0FP_2VP_2(_fn_,__VA_ARGS__)

#define HELPER_FOR_EACH_0FP_2VP_4(_fn_,_vp0_,_vp1_, ...) \
            _fn_(_vp0_,_vp1_) \
            HELPER_FOR_EACH_0FP_2VP_3(_fn_,__VA_ARGS__)

#define HELPER_FOR_EACH_0FP_2VP_5(_fn_,_vp0_,_vp1_, ...) \
            _fn_(_vp0_,_vp1_) \
            HELPER_FOR_EACH_0FP_2VP_4(_fn_,__VA_ARGS__)

#define HELPER_FOR_EACH_0FP_2VP_6(_fn_,_vp0_,_vp1_, ...) \
            _fn_(_vp0_,_vp1_) \
            HELPER_FOR_EACH_0FP_2VP_5(_fn_,__VA_ARGS__)

#define HELPER_FOR_EACH_0FP_2VP_7(_fn_,_vp0_,_vp1_, ...) \
            _fn_(_vp0_,_vp1_) \
            HELPER_FOR_EACH_0FP_2VP_6(_fn_,__VA_ARGS__)

#define HELPER_FOR_EACH_0FP_2VP_8(_fn_,_vp0_,_vp1_, ...) \
            _fn_(_vp0_,_vp1_) \
            HELPER_FOR_EACH_0FP_2VP_7(_fn_,__VA_ARGS__)

//------------------------------------------------------------------------------
#define FOR_EACH_0FP_2VP(_fn_,...) \
            HELPER_FOR_EACH_nFP_2VP_GET_MACRO(0, __VA_ARGS__)(\
                _fn_,__VA_ARGS__ \
            )

//------------------------------------------------------------------------------
#define FOR_EACH_PARAM_DROP_FIRST(_p0_, ...)        __VA_ARGS__

#define FOR_EACH_PARAM_DROP_0(...)                  __VA_ARGS__

#define FOR_EACH_PARAM_DROP_1(...) \
            FOR_EACH_PARAM_DROP_FIRST(__VA_ARGS__)

#define FOR_EACH_PARAM_DROP_2(...) \
            FOR_EACH_PARAM_DROP_1(FOR_EACH_PARAM_DROP_FIRST(__VA_ARGS__) )

#define FOR_EACH_PARAM_DROP_3(...) \
            FOR_EACH_PARAM_DROP_2(FOR_EACH_PARAM_DROP_FIRST(__VA_ARGS__) )

#define FOR_EACH_PARAM_DROP_4(...) \
            FOR_EACH_PARAM_DROP_3(FOR_EACH_PARAM_DROP_FIRST(__VA_ARGS__) )

#define FOR_EACH_PARAM_DROP_8(...) \
            FOR_EACH_PARAM_DROP_4(FOR_EACH_PARAM_DROP_4(__VA_ARGS__) )

#define FOR_EACH_PARAM_DROP_16(...) \
            FOR_EACH_PARAM_DROP_8( FOR_EACH_PARAM_DROP_8(__VA_ARGS__) )

// We can't use this macro above, because the preprocessor will not resolve the
// recursion then.
#define FOR_EACH_PARAM_DROP(_n_, ...) \
            FOR_EACH_PARAM_DROP_ ## _n_(__VA_ARGS__)

//------------------------------------------------------------------------------
#define FOR_EACH_PARAM_EXTRACT_FIRST(_p0_, ...)      _p0_

#define FOR_EACH_PARAM_EXTRACT_1(...) \
            FOR_EACH_PARAM_EXTRACT_FIRST(__VA_ARGS__)

#define FOR_EACH_PARAM_EXTRACT_2(...) \
            FOR_EACH_PARAM_EXTRACT_FIRST(__VA_ARGS__), \
            FOR_EACH_PARAM_EXTRACT_1( FOR_EACH_PARAM_DROP(1, __VA_ARGS__))

#define FOR_EACH_PARAM_EXTRACT_3(...) \
            FOR_EACH_PARAM_EXTRACT_FIRST(__VA_ARGS__), \
            FOR_EACH_PARAM_EXTRACT_2( FOR_EACH_PARAM_DROP(1, __VA_ARGS__))

#define FOR_EACH_PARAM_EXTRACT_4(...) \
            FOR_EACH_PARAM_EXTRACT_FIRST(__VA_ARGS__), \
            FOR_EACH_PARAM_EXTRACT_3( FOR_EACH_PARAM_DROP(1, __VA_ARGS__))

// We can't use this macro above, because the preprocessor will not resolve the
// recursion then.
#define FOR_EACH_PARAM_EXTRACT(_n_,...) \
            FOR_EACH_PARAM_EXTRACT_ ## _n_(__VA_ARGS__)

//------------------------------------------------------------------------------

#define GET_MULTIPLE_PARAMS_AT_IDX(_idx_,_cnt_, ...) \
            FOR_EACH_PARAM_EXTRACT(_cnt_, FOR_EACH_PARAM_DROP(_idx_, __VA_ARGS__) )

#define GET_PARAM_AT_IDX(_idx_, ...) \
            GET_MULTIPLE_PARAMS_AT_IDX(_idx_, 1, __VA_ARGS__)


//------------------------------------------------------------------------------

// Indirection for invoking a macro.
#define HELPER_FOR_EACH_EXECUTE_MACRO(_fn_, ...)     _fn_(__VA_ARGS__)

// Helper to remove the brackets from the fixes parameter list.
#define HELPER_FOR_EACH_DUMMY_MACRO(...)    __VA_ARGS__

// For this macro to work, we need a few level of macros that ensure the
// parameters are resolved as expected.
#define FOR_EACH_EXECUTE_MACRO_VP(_fn_, _fp_, _nvp_, ...) \
            HELPER_FOR_EACH_EXECUTE_MACRO( \
                _fn_, \
                HELPER_FOR_EACH_DUMMY_MACRO _fp_, \
                FOR_EACH_PARAM_EXTRACT(_nvp_, __VA_ARGS__) \
            )

// These functions deal with 1 to 8 groups of variable parameters.
#define FOR_EACH_FP_nVP_1(_fn_,_fp_, _nvp_, ...) \
            FOR_EACH_EXECUTE_MACRO_VP(_fn_, _fp_, _nvp_, __VA_ARGS__)

#define FOR_EACH_FP_nVP_2(_fn_,_fp_, _nvp_, ...) \
            FOR_EACH_EXECUTE_MACRO_VP(_fn_, _fp_, _nvp_, __VA_ARGS__) \
            FOR_EACH_FP_nVP_1(_fn_,_fp_, _nvp_, FOR_EACH_PARAM_DROP(_nvp_, __VA_ARGS__))

#define FOR_EACH_FP_nVP_3(_fn_,_fp_, _nvp_, ...) \
            FOR_EACH_EXECUTE_MACRO_VP(_fn_, _fp_, _nvp_, __VA_ARGS__) \
            FOR_EACH_FP_nVP_2(_fn_,_fp_, _nvp_, FOR_EACH_PARAM_DROP(_nvp_, __VA_ARGS__))

#define FOR_EACH_FP_nVP_4(_fn_,_fp_, _nvp_, ...) \
            FOR_EACH_EXECUTE_MACRO_VP(_fn_, _fp_, _nvp_, __VA_ARGS__) \
            FOR_EACH_FP_nVP_3(_fn_,_fp_, _nvp_, FOR_EACH_PARAM_DROP(_nvp_, __VA_ARGS__))

#define FOR_EACH_FP_nVP_5(_fn_,_fp_, _nvp_, ...) \
            FOR_EACH_EXECUTE_MACRO_VP(_fn_, _fp_, _nvp_, __VA_ARGS__) \
            FOR_EACH_FP_nVP_4(_fn_,_fp_, _nvp_, FOR_EACH_PARAM_DROP(_nvp_, __VA_ARGS__))

#define FOR_EACH_FP_nVP_6(_fn_,_fp_, _nvp_, ...) \
            FOR_EACH_EXECUTE_MACRO_VP(_fn_, _fp_, _nvp_, __VA_ARGS__) \
            FOR_EACH_FP_nVP_5(_fn_,_fp_, _nvp_, FOR_EACH_PARAM_DROP(_nvp_, __VA_ARGS__))

#define FOR_EACH_FP_nVP_7(_fn_,_fp_, _nvp_, ...) \
            FOR_EACH_EXECUTE_MACRO_VP(_fn_, _fp_, _nvp_, __VA_ARGS__) \
            FOR_EACH_FP_nVP_6(_fn_,_fp_, _nvp_, FOR_EACH_PARAM_DROP(_nvp_, __VA_ARGS__))

#define FOR_EACH_FP_nVP_8(_fn_,_fp_, _nvp_, ...) \
            FOR_EACH_EXECUTE_MACRO_VP(_fn_, _fp_, _nvp_, __VA_ARGS__) \
            FOR_EACH_FP_nVP_7(_fn_,_fp_, _nvp_, FOR_EACH_PARAM_DROP(_nvp_, __VA_ARGS__))


// Call FOR_EACH_FP_nVP_[x](...) after some level of indirection that seem to
// be necessary for macro parameter evaluation to produce what we need.
#define HELPER_FOR_EACH_nFP_nVP_caller2(_num_, ...) \
             FOR_EACH_FP_nVP_ ## _num_(__VA_ARGS__)

// Another layer of indirection that seem necessary.
#define HELPER_FOR_EACH_nFP_nVP_caller(_num_, ...) \
            HELPER_FOR_EACH_nFP_nVP_caller2(_num_, __VA_ARGS__)

// This uses the macro HELPER_FOR_EACH_GET_MACRO_NUM_[n]VP() which will be
// defined below for various values of n.
#define FOR_EACH_nFP_nVP(_fn_, _nfp_, _nvp_, ...) \
            HELPER_FOR_EACH_nFP_nVP_caller( \
                HELPER_FOR_EACH_GET_MACRO_NUM_## _nvp_ ## VP( \
                    FOR_EACH_PARAM_DROP(_nfp_, __VA_ARGS__) \
                ), \
                _fn_, \
                ( FOR_EACH_PARAM_EXTRACT(_nfp_, __VA_ARGS__) ), \
                _nvp_, \
                FOR_EACH_PARAM_DROP(_nfp_, __VA_ARGS__) \
            )

/*
 * This macro is to be used in variadic client connection macros, where every
 * client is connected via n fixed parameters which are shared by all clients
 * and one client-specific parameter.
 *
 * This macro requires another macro (passed via _fn_) which has to look like
 * this:
 *
 *      #define DO_SOMETHING_1P(_inst_,_cli_,_p0_,_num_) \
 *
 * It can then be used as follows:
 *
 *      FOR_EACH_nFP_1VP(DO_SOMETHING_1P,_inst_,_cli_,__VA_ARGS__)
 *
 * The variadic list can contain up to 8 arguments.
 */

#define HELPER_FOR_EACH_GET_MACRO_NUM_1VP(...) \
            GET_PARAM_AT_IDX( \
                8, \
                __VA_ARGS__, \
                8,7,6,5,4,3,2,1)

//#define FOR_EACH_0FP_1VP(_fn_, ...)  FOR_EACH_nFP_nVP(_fn_, 0, 1, __VA_ARGS__)
#define FOR_EACH_1FP_1VP(_fn_, ...)  FOR_EACH_nFP_nVP(_fn_, 1, 1, __VA_ARGS__)
#define FOR_EACH_2FP_1VP(_fn_, ...)  FOR_EACH_nFP_nVP(_fn_, 2, 1, __VA_ARGS__)


//------------------------------------------------------------------------------
/*
 * This macro is to be used in variadic client connection macros, where every
 * client is connected via n fixed parameters which are shared by all clients
 * and two client-specific parameters.
 *
 * This macro requires another macro (passed via _fn_) which has to look like
 * this:
 *
 *      #define DO_SOMETHING_2P(_inst_,_cli_,_p0_,_p1_,_num_) \
 *          ...
 *
 * It can then be used as follows:
 *
 *      FOR_EACH_nFP_2VP(DO_SOMETHING_2P,_inst_,_cli_,__VA_ARGS__)
 *
 * The variadic list can contain up to 16 arguments (= 8 tuples).
 */

#define HELPER_FOR_EACH_GET_MACRO_NUM_2VP(...) \
            GET_PARAM_AT_IDX( \
                16, \
                __VA_ARGS__, \
                8,err8,7,err7,6,err6,5,err5,4,err4,3,err3,2,err2,1,err1)

//#define FOR_EACH_0FP_2VP(_fn_, ...)  FOR_EACH_nFP_nVP(_fn_, 0, 2, __VA_ARGS__)
#define FOR_EACH_1FP_2VP(_fn_, ...)  FOR_EACH_nFP_nVP(_fn_, 1, 2, __VA_ARGS__)
#define FOR_EACH_2FP_2VP(_fn_, ...)  FOR_EACH_nFP_nVP(_fn_, 2, 2, __VA_ARGS__)

/*
 * This macro is to be used in variadic client connection macros, where every
 * client is connected without specifying how (e.g., rpc endpoint, or signal,
 *  ...) as macro parameter.
 *
 * This macro requires another macro (passed via _fn_) which has to look
 * like this:
 *
 *      #define DO_SOMETHING_0P(_inst_,_cli_,_num_) \
 *          ...
 *
  * It can then be used as follows:
 *
 *      FOR_EACH_0P(DO_SOMETHING_0P,_inst_,__VA_ARGS__)
 *
 * This macro will be "called" for every arg passed in the variadic part of
 * FOR_EACH_0() with _inst_ as the first arg and one of the
 * variadic args (_cli_).
 *
 * The variadic list can contain up to 8 arguments.
 *
 */
#define FOR_EACH_0P(_fn_,_inst_,...) \
  FOR_EACH_0P_GET_MACRO( \
    _0,__VA_ARGS__, 8,7,6,5,4,3,2,1) \
        (_fn_,_inst_,__VA_ARGS__)

/*
 * This macro is to be used in variadic client connection macros, where every
 * client is connected via ONE param (e.g., rpc endpoint, or signal, ...)
 *
 * This macro requires another macro (passed via _fn_) which has to look like
 *  this:
 *
 *      #define DO_SOMETHING_1P(_inst_,_cli_,_p0_,_num_) \
 *          ...
 *
  * It can then be used as follows:
 *
 *      FOR_EACH_1P(DO_SOMETHING_1P,_inst_,_cli_,__VA_ARGS__)
 *
 * This macro will be "called" for every arg passed in the variadic part of
 * FOR_EACH_1P() with _inst_ as the first arg, _cli_ as second and one of the
 * variadic args as _p0_ and the index where in the list of the variadic
 * arguments this macro has been.
 *
 * The variadic list can contain up to 8 arguments.
 *
 */
#define FOR_EACH_1P(_fn_,_inst_,_cli_,...) \
  FOR_EACH_1P_GET_MACRO( \
    _0,__VA_ARGS__, 16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1) \
        (_fn_,_inst_,_cli_,__VA_ARGS__)

/*
 * This macro is to be used in variadic client connection macros, where every
 * client is connected via TWO params (e.g., rpc endpoint and dataport)
 *
 * This macro requires another macro (passed via _fn_) which has to look
 * like this:
 *
 *      #define DO_SOMETHING_2P(_inst_,_cli_,_p0_,_p1_,_num_) \
 *          ...
 *
 * It can then be used as follows:
 *
 *      FOR_EACH_2P(DO_SOMETHING_2P,_inst_,_cli_,__VA_ARGS__)
 *
 * This macro will be "called" for every two args passed in the variadic part
 * of FOR_EACH_2P() with _inst_ as the first arg, _cli_ as second and then a
 * tuple of two args from the variadic list, and the index where in the list of
 * the variadic arguments this tuple has been.
 *
 * The variadic list can contain up to 16 arguments (= 8 tuples).
 */
#define FOR_EACH_2P(_fn_,_inst_,_cli_,...) \
  FOR_EACH_2P_GET_MACRO( \
    _0,__VA_ARGS__, 8,8,7,7,6,6,5,5,4,4,3,3,2,2,1,1) \
        (_fn_,_inst_,_cli_,__VA_ARGS__)
