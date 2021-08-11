/*
 * Copyright (C) 2020-2021, HENSOLDT Cyber GmbH
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
