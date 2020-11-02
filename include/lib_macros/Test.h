/* Copyright (C) 2019-2020, Hensoldt Cyber GmbH */

/**
 * @file
 * @brief   Component's test API
 *
 * Feel free to use the macros that are provided here for testing your software
 * module.
 *
 * Each test group must be started with the TEST_START() and ended with the
 * TEST_FINISH() macro.
 *
 * Once the tests are written, just pipe the output to the test_parser.py, so
 * that the pytest part can be generated.
 *
 * @see https://wiki.hensoldt-cyber.systems/display/HEN/Testing+SEOS+with+PyTest
 *
 */
#pragma once

#include "lib_debug/Debug.h"

#include <assert.h>
#include <string.h>
#include <inttypes.h>

/**
 * @brief   Max test frameworks message length
 *
 * This is an arbitrary value chosen so that it is not too big i.e. does not
 * pollute the test logs and does not have a big impact on the test run time but
 * on the other hand can store the test name, message itself, the path, and
 * the line number.
 *
 * Feel free to increase it if there is a strong need, but the current value
 * should be more than enough.
 */
#if !defined(_TEST_MSG_MAX_LEN)
# define _TEST_MSG_MAX_LEN 512
#endif

/**
 * @brief   Max test name length
 *
 * Name of the test function, should not be required to be too big.
  */
#if !defined(_TEST_NAME_MAX_LEN)
# define _TEST_NAME_MAX_LEN 128
#endif

// We use this to keep track of the name of the test that is is currently being
// executed, see below...
#if defined(_testName)
# error "_testName is already defined"
#else
static char _testName[_TEST_NAME_MAX_LEN] = "<undefined>";
#endif

/*
 * With the help of TEST_START() and TEST_FINISH() we can track which test is
 * currently running so we know the test's name in case an assertion is hit.
 *
 * TEST_START can take up to two arguments (which will be interpreted as int)
 * TEST_FINISH takes no arguments
 */

// With this trick, we can map between zero to two arguments to the respective
// "sub-macro" and use the appropriate format string.
#define SELECT_START(_prfx_, _2, _1, _0, _sufx_, ...) \
  _prfx_##_##_sufx_
#define _TEST_START_STOP(...) \
  Debug_ASSERT_PRINTFLN(0, "Too many arguments for TEST_START.")
#define _TEST_START_2(_arg0_, _arg1_) \
  snprintf(_testName, sizeof(_testName), "%s(%s=%i,%s=%i)", \
           __func__, #_arg0_, (int)_arg0_, #_arg1_, (int)_arg1_)
#define _TEST_START_1(_arg0_) \
  snprintf(_testName, sizeof(_testName), "%s(%s=%i)", \
           __func__, #_arg0_, (int)_arg0_)
#define _TEST_START_0(...) \
  snprintf(_testName, sizeof(_testName), "%s", __func__)
#define TEST_START(...) \
  SELECT_START(_TEST_START, ##__VA_ARGS__, STOP, 2, 1, 0)(__VA_ARGS__)

// This outputs the tests name as a marker that it has been completed. Also, we
// reset the _testName to make incorrect use of TEST_START/TEST_FINISH more easy
// to spot.
#define TEST_FINISH() do \
{ \
    Debug_LOG_INFO("!!! %s: OK", _testName); \
    snprintf(_testName, sizeof(_testName), "<undefined>"); \
} while(0)

/**
 * @brief   Compares expected and actual values with a given operator.
 *
 * @note    Use this macro only if other ASSERT_xx macros are not sufficient.
 *
 * @note    Any C operator is accepted as parameter here as long as the result
 *          is a boolean value.
 *
 * @see     Other ASSERT_x macros for specific comparision functions.
 *
 * @param   _exp_ - [in] Expected value to be compered with.
 * @param   _val_ - [in] _val_ value that expected is compared with.
 * @param   _op_  - [in] Comparision operator e.g. `==`, `<`, `>`.
 */
#define ASSERT_COMPARE(_exp_,_val_,_fmt_,_op_) \
do { \
    if(!(_exp_ _op_ _val_)) \
    { \
        char msg[_TEST_MSG_MAX_LEN]; \
        const int ret = snprintf( \
                            msg, sizeof(msg), \
                            "@%s: Comparison failure: %s " #_op_ " %s " \
                            "[actual value: %" _fmt_ "]", \
                            _testName, #_exp_, #_val_, _val_); \
        if(ret>=sizeof(msg)) \
        { \
            printf("Message was truncated.\n"); \
        } \
        __assert_fail(msg, __FILE__, __LINE__, __func__); \
    } \
} while(0)

#define ASSERT_EQ(_exp_,_val_,_fmt_) ASSERT_COMPARE(_exp_,_val_,_fmt_, ==)
#define ASSERT_NE(_exp_,_val_,_fmt_) ASSERT_COMPARE(_exp_,_val_,_fmt_, !=)
#define ASSERT_LT(_exp_,_val_,_fmt_) ASSERT_COMPARE(_exp_,_val_,_fmt_, <)
#define ASSERT_LE(_exp_,_val_,_fmt_) ASSERT_COMPARE(_exp_,_val_,_fmt_, <=)
#define ASSERT_GT(_exp_,_val_,_fmt_) ASSERT_COMPARE(_exp_,_val_,_fmt_, >)
#define ASSERT_GE(_exp_,_val_,_fmt_) ASSERT_COMPARE(_exp_,_val_,_fmt_, >=)

#define ASSERT_EQ_UINT(_exp_,_val_) ASSERT_EQ(_exp_,_val_,"u")
#define ASSERT_NE_UINT(_exp_,_val_) ASSERT_NE(_exp_,_val_,"u")
#define ASSERT_LT_UINT(_exp_,_val_) ASSERT_LT(_exp_,_val_,"u")
#define ASSERT_LE_UINT(_exp_,_val_) ASSERT_LE(_exp_,_val_,"u")
#define ASSERT_GT_UINT(_exp_,_val_) ASSERT_GT(_exp_,_val_,"u")
#define ASSERT_GE_UINT(_exp_,_val_) ASSERT_GE(_exp_,_val_,"u")

#define ASSERT_EQ_INT(_exp_,_val_) ASSERT_EQ(_exp_,_val_,"d")
#define ASSERT_NE_INT(_exp_,_val_) ASSERT_NE(_exp_,_val_,"d")
#define ASSERT_LT_INT(_exp_,_val_) ASSERT_LT(_exp_,_val_,"d")
#define ASSERT_LE_INT(_exp_,_val_) ASSERT_LE(_exp_,_val_,"d")
#define ASSERT_GT_INT(_exp_,_val_) ASSERT_GT(_exp_,_val_,"d")
#define ASSERT_GE_INT(_exp_,_val_) ASSERT_GE(_exp_,_val_,"d")

#define ASSERT_EQ_SZ(_exp_,_val_) ASSERT_EQ(_exp_,_val_,"zu")
#define ASSERT_NE_SZ(_exp_,_val_) ASSERT_NE(_exp_,_val_,"zu")
#define ASSERT_LT_SZ(_exp_,_val_) ASSERT_LT(_exp_,_val_,"zu")
#define ASSERT_LE_SZ(_exp_,_val_) ASSERT_LE(_exp_,_val_,"zu")
#define ASSERT_GT_SZ(_exp_,_val_) ASSERT_GT(_exp_,_val_,"zu")
#define ASSERT_GE_SZ(_exp_,_val_) ASSERT_GE(_exp_,_val_,"zu")

#define ASSERT_EQ_UINT64(_exp_,_val_) ASSERT_EQ(_exp_,_val_,PRIu64)
#define ASSERT_NE_UINT64(_exp_,_val_) ASSERT_NE(_exp_,_val_,PRIu64)
#define ASSERT_LT_UINT64(_exp_,_val_) ASSERT_LT(_exp_,_val_,PRIu64)
#define ASSERT_LE_UINT64(_exp_,_val_) ASSERT_LE(_exp_,_val_,PRIu64)
#define ASSERT_GT_UINT64(_exp_,_val_) ASSERT_GT(_exp_,_val_,PRIu64)
#define ASSERT_GE_UINT64(_exp_,_val_) ASSERT_GE(_exp_,_val_,PRIu64)

#define ASSERT_EQ_INT64(_exp_,_val_) ASSERT_EQ(_exp_,_val_,PRIi64)
#define ASSERT_NE_INT64(_exp_,_val_) ASSERT_NE(_exp_,_val_,PRIi64)
#define ASSERT_LT_INT64(_exp_,_val_) ASSERT_LT(_exp_,_val_,PRIi64)
#define ASSERT_LE_INT64(_exp_,_val_) ASSERT_LE(_exp_,_val_,PRIi64)
#define ASSERT_GT_INT64(_exp_,_val_) ASSERT_GT(_exp_,_val_,PRIi64)
#define ASSERT_GE_INT64(_exp_,_val_) ASSERT_GE(_exp_,_val_,PRIi64)

#define ASSERT_EQ_UINT_MAX(_exp_,_val_) ASSERT_EQ(_exp_,_val_,PRIuMAX)
#define ASSERT_NE_UINT_MAX(_exp_,_val_) ASSERT_NE(_exp_,_val_,PRIuMAX)
#define ASSERT_LT_UINT_MAX(_exp_,_val_) ASSERT_LT(_exp_,_val_,PRIuMAX)
#define ASSERT_LE_UINT_MAX(_exp_,_val_) ASSERT_LE(_exp_,_val_,PRIuMAX)
#define ASSERT_GT_UINT_MAX(_exp_,_val_) ASSERT_GT(_exp_,_val_,PRIuMAX)
#define ASSERT_GE_UINT_MAX(_exp_,_val_) ASSERT_GE(_exp_,_val_,PRIuMAX)

#define ASSERT_EQ_INT_MAX(_exp_,_val_) ASSERT_EQ(_exp_,_val_,PRIiMAX)
#define ASSERT_NE_INT_MAX(_exp_,_val_) ASSERT_NE(_exp_,_val_,PRIiMAX)
#define ASSERT_LT_INT_MAX(_exp_,_val_) ASSERT_LT(_exp_,_val_,PRIiMAX)
#define ASSERT_LE_INT_MAX(_exp_,_val_) ASSERT_LE(_exp_,_val_,PRIiMAX)
#define ASSERT_GT_INT_MAX(_exp_,_val_) ASSERT_GT(_exp_,_val_,PRIiMAX)
#define ASSERT_GE_INT_MAX(_exp_,_val_) ASSERT_GE(_exp_,_val_,PRIiMAX)

/**
 * With the help of these TEST_xxx we obtain practical shorthands for checking
 * a function result agains OS_Error_t error codes.
 *
 * Furthermore (and more importantly), we can define and use our own assertions,
 * so that we can add the name of the test to a failing assertion. This is
 * useful if the assert does not fail in the test function itself, but in a
 * function called by the test (in this case, assert does not give the test
 * function name but the name of the subfunction).
 */

// Check DEVICE return codes
#define TEST_DEV_INVALID(_fn_)      ASSERT_EQ_INT(OS_ERROR_DEVICE_INVALID,     _fn_)
#define TEST_DEV_NOT_PRESENT(_fn_)  ASSERT_EQ_INT(OS_ERROR_DEVICE_NOT_PRESENT, _fn_)
#define TEST_DEV_BUSY(_fn_)         ASSERT_EQ_INT(OS_ERROR_DEVICE_BUSY,        _fn_)
// Check generic return codes
#define TEST_WOULD_BLOCK(_fn_)      ASSERT_EQ_INT(OS_ERROR_WOULD_BLOCK,        _fn_)
#define TEST_OOBOUNDS(_fn_)         ASSERT_EQ_INT(OS_ERROR_OUT_OF_BOUNDS,      _fn_)
#define TEST_CONN_CLOSED(_fn_)      ASSERT_EQ_INT(OS_ERROR_CONNECTION_CLOSED,  _fn_)
#define TEST_OVERFLOW(_fn_)         ASSERT_EQ_INT(OS_ERROR_OVERFLOW_DETECTED,  _fn_)
#define TEST_INSUFF_SPACE(_fn_)     ASSERT_EQ_INT(OS_ERROR_INSUFFICIENT_SPACE, _fn_)
#define TEST_TOO_SMALL(_fn_)        ASSERT_EQ_INT(OS_ERROR_BUFFER_TOO_SMALL,   _fn_)
#define TEST_ABORTED(_fn_)          ASSERT_EQ_INT(OS_ERROR_ABORTED,            _fn_)
#define TEST_OP_DENIED(_fn_)        ASSERT_EQ_INT(OS_ERROR_OPERATION_DENIED,   _fn_)
#define TEST_ACC_DENIED(_fn_)       ASSERT_EQ_INT(OS_ERROR_ACCESS_DENIED,      _fn_)
#define TEST_NOT_FOUND(_fn_)        ASSERT_EQ_INT(OS_ERROR_NOT_FOUND,          _fn_)
#define TEST_INVAL_HANDLE(_fn_)     ASSERT_EQ_INT(OS_ERROR_INVALID_HANDLE,     _fn_)
#define TEST_INVAL_STATE(_fn_)      ASSERT_EQ_INT(OS_ERROR_INVALID_STATE,      _fn_)
#define TEST_INVAL_NAME(_fn_)       ASSERT_EQ_INT(OS_ERROR_INVALID_NAME,       _fn_)
#define TEST_INVAL_PARAM(_fn_)      ASSERT_EQ_INT(OS_ERROR_INVALID_PARAMETER,  _fn_)
#define TEST_NOT_SUPP(_fn_)         ASSERT_EQ_INT(OS_ERROR_NOT_SUPPORTED,      _fn_)
#define TEST_GENERIC(_fn_)          ASSERT_EQ_INT(OS_ERROR_GENERIC,            _fn_)
#define TEST_SUCCESS(_fn_)          ASSERT_EQ_INT(OS_SUCCESS,                  _fn_)

/**
 * Check boolean expression and not an error code
 */
#define TEST_TRUE(_st_) do \
{ \
    if(!(_st_)) \
    { \
        char msg[_TEST_MSG_MAX_LEN]; \
        int ret = snprintf(msg, sizeof(msg), "@%s: %s", _testName, #_st_); \
        if(ret>=sizeof(msg)) \
        { \
            printf("Message was truncated.\n"); \
        } \
        __assert_fail(msg, __FILE__, __LINE__, __func__); \
    } \
} while(0)

#define ASSERT_TRUE(_val_)  TEST_TRUE(_val_)
#define ASSERT_FALSE(_val_) TEST_TRUE(!_val_)