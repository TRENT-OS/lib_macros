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
 * @brief   Max test name length
 *
 * Name of the test function, should not be required to be too big.
 */
#if !defined(_TEST_NAME_MAX_LEN)
# define _TEST_NAME_MAX_LEN 128
#endif

/**
 * @brief   Name of the test being executed.
 *
 * Is set to the current test's name in the TEST_START macro, and is used for
 * printing the results.
 *
 * @note    If TEST_START was not called, result still will be correctly printed
 *          but test name will be set to "<undefined>".
 */

static __attribute__((unused)) char
_testName[_TEST_NAME_MAX_LEN] = "<undefined>";

/**
 * @brief   Test's start and finish macros.
 *
 * With the help of TEST_START() and TEST_FINISH() we can track which test is
 * currently running so we know the test's name in case an assertion is hit.
 *
 * TEST_START() can take 0, 2, 4, 6 arguments which will then be used to
 * generate the output message if a test fails.
 *
 * To be as flexible as possible, every argument for TEST_START() has to come
 * with its own format specifier, here are some examples:
 *
 * @code
 *  TEST_START()
 *      Test has no arguments
 *  TEST_START("i", mode)
 *      Test has one argument (mode), which is an int
 *  TEST_START("s", desc, "i", mode)
 *      Test has two arguments (desc, mode), the first is a string and the
 *      second an int.
 * @endcode
 * @{
 */
#define SELECT_START(_prfx_,_7,_6,_5,_4,_3,_2,_1,_0,_sufx_, ...) \
    _prfx_##_##_sufx_
#define _TEST_START_INVALID(...) \
    Debug_ASSERT_PRINTFLN(0, "Invalid number of many arguments for TEST_START.")
#define _TEST_START_3(_f0_,_p0_,_f1_,_p1_,_f2_,_p2_) \
do { \
    snprintf( \
        _testName, sizeof(_testName), \
        "%s(%s=%"_f0_",%s=%"_f1_",%s=%"_f2_")", \
        __func__, #_p0_,_p0_,#_p1_,_p1_,#_p2_,_p2_ \
    ); \
} while(0)
#define _TEST_START_2(_f0_,_p0_,_f1_,_p1_) \
do { \
    snprintf( \
        _testName, sizeof(_testName), \
        "%s(%s=%"_f0_",%s=%"_f1_")", \
        __func__,#_p0_,_p0_,#_p1_,_p1_ \
    ); \
} while(0)
#define _TEST_START_1(_f0_,_p0_) \
do { \
    snprintf( \
        _testName, sizeof(_testName), \
        "%s(%s=%"_f0_")", \
        __func__,#_p0_,_p0_ \
    ); \
} while(0)
#define _TEST_START_0(...) \
do { \
    snprintf( \
        _testName, sizeof(_testName), \
        "%s", \
        __func__ \
    ); \
} while(0)
#define TEST_START(...) \
    SELECT_START( \
        _TEST_START,##__VA_ARGS__, \
        INVALID,3,3,2,2,1,1,INVALID,0 \
    )(__VA_ARGS__)

// This outputs the tests name as a marker that it has been completed. Also, we
// reset the _testName to make incorrect use of TEST_START/TEST_FINISH more easy
// to spot.
#define TEST_FINISH() \
do { \
    Debug_LOG_INFO("!!! %s: OK", _testName); \
    snprintf(_testName, sizeof(_testName), "<undefined>"); \
} while(0)
///@}

/**
 * @brief   Compares expected and actual values with a given operator.
 *
 * @note    Use this macro only if other ASSERT_xx macros are not sufficient.
 *
 * @note    Any C operator is accepted as parameter here as long as the result
 *          is a boolean value.
 *
 * @see     Other ASSERT_xx macros for specific comparision functions.
 *
 * @param   _exp_ - [in] Expected value to be compared with.
 * @param   _val_ - [in] Actual value that expected value is compared with.
 * @param   _fmt_ - [in] Value's format used for printing it.
 * @param   _op_  - [in] Comparision operator e.g. `==`, `<`, `>`.
 */
#define ASSERT_COMPARE(_exp_,_val_,_fmt_,_op_) \
do { \
    const typeof(_exp_) exp = _exp_; \
    const typeof(_val_) val = _val_; \
    const bool compareResult = (exp _op_ val); \
    \
    Debug_ASSERT_PRINTFLN( \
        compareResult, \
        "@%s: Comparison failure: " #_exp_ " " #_op_ " " #_val_ " " \
        "[expected value: %" _fmt_ " actual value: %" _fmt_ "]", \
        _testName, exp, val); \
} while(0)

/**
 * @brief   Compares expected and actual values with a given operator.
 *
 * Those macros are shorthands for the most of the basic C types and operators,
 * so that the format and operator can be properly selected.
 *
 * The following comparision function types are available:
 *
 * | Type |   Literal Meaning   |    Operator    |
 * |------|---------------------|----------------|
 * |  EQ  | Equals?             | _exp_ == _val_ |
 * |  NE  | Not equals?         | _exp_ != _val_ |
 * |  LT  | Less than?          | _exp_ <  _val_ |
 * |  LE  | Less or equals?     | _exp_ <= _val_ |
 * |  GT  | Greater than?       | _exp_ >  _val_ |
 * |  GE  | Greater or equals?  | _exp_ >= _val_ |
 *
 * @param   _exp_ - [in] Expected value to be compered with.
 * @param   _val_ - [in] Value that expected is compared with.
 *
 * @{
 */
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
///@}

/**
 * @brief   Asserts function's return error codes.
 *
 * With the help of these TEST_xxx we obtain practical shorthands for asserting
 * a function's result against the OS_Error_t error codes.
 *
 * Furthermore (and more importantly), we can define and use our own assertions,
 * so that we can add the name of the test to a failing assertion. This is
 * useful if the assert does not fail in the test function itself, but in a
 * function called by the test (in this case, assert does not give the test
 * function name but the name of the subfunction).
 *
 * @param   _fn_ - [in] Function to be asserted.
 *
 * @{
 */

// Check DEVICE return codes
#define TEST_DEV_INVALID(_fn_)      ASSERT_EQ_INT(OS_ERROR_DEVICE_INVALID,     _fn_)
#define TEST_DEV_NOT_PRESENT(_fn_)  ASSERT_EQ_INT(OS_ERROR_DEVICE_NOT_PRESENT, _fn_)
#define TEST_DEV_BUSY(_fn_)         ASSERT_EQ_INT(OS_ERROR_DEVICE_BUSY,        _fn_)
// Check generic return codes
#define TEST_BUF_FULL(_fn_)         ASSERT_EQ_INT(OS_ERROR_BUFFER_FULL,        _fn_)
#define TEST_BUF_EMPTY(_fn_)        ASSERT_EQ_INT(OS_ERROR_BUFFER_EMPTY,       _fn_)
#define TEST_NO_DATA(_fn_)          ASSERT_EQ_INT(OS_ERROR_NO_DATA,            _fn_)
#define TEST_NOT_INIT(_fn_)         ASSERT_EQ_INT(OS_ERROR_NOT_INITIALIZED,    _fn_)
#define TEST_TRY_AGAIN(_fn_)        ASSERT_EQ_INT(OS_ERROR_TRY_AGAIN,          _fn_)
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
#define TEST_INVAL_NAME(_fn_)       ASSERT_EQ_INT(OS_ERROR_INVALID_NAME,       _fn_)
#define TEST_INVAL_PARAM(_fn_)      ASSERT_EQ_INT(OS_ERROR_INVALID_PARAMETER,  _fn_)
#define TEST_INVAL_STATE(_fn_)      ASSERT_EQ_INT(OS_ERROR_INVALID_STATE,      _fn_)
#define TEST_NOT_SUPP(_fn_)         ASSERT_EQ_INT(OS_ERROR_NOT_SUPPORTED,      _fn_)
#define TEST_NOT_IMPL(_fn_)         ASSERT_EQ_INT(OS_ERROR_NOT_IMPLEMENTED,    _fn_)
#define TEST_GENERIC(_fn_)          ASSERT_EQ_INT(OS_ERROR_GENERIC,            _fn_)
#define TEST_SUCCESS(_fn_)          ASSERT_EQ_INT(OS_SUCCESS,                  _fn_)
// Check domain specific return codes
#define TEST_CFG_PARAM_NOT_FOUND(_fn_) \
            ASSERT_EQ_INT(OS_ERROR_CONFIG_PARAMETER_NOT_FOUND, _fn_)
///@}

/**
 * @brief   Asserts boolean expression and not an error code.
 *
 * @param   _st_ - [in] Boolean expression to be asserted.
 *
 * @{
 */
#define TEST_TRUE(_st_) do \
{ \
    Debug_ASSERT_PRINTFLN(_st_, "@%s: " #_st_ "is not true.", _testName); \
} while(0)

#define ASSERT_TRUE(_val_)  TEST_TRUE(_val_)
#define ASSERT_FALSE(_val_) TEST_TRUE(!_val_)
///@}
