/* Copyright (C) 2019-2020, HENSOLDT Cyber GmbH */

/**
 * @file
 * @brief Macros to perform common input parameter checks.
 *
 */
#pragma once

#include "lib_debug/Debug.h"
#include "OS_Dataport.h"

#include <string.h>
#include <inttypes.h>

#define CHECK_PTR_NOT_NULL(_ptr_) \
    do { \
        if (NULL == (_ptr_)) \
        { \
            Debug_LOG_ERROR("%s: Parameter check failed! " \
                            "Input pointer '%s' is NULL", __func__, #_ptr_); \
            return OS_ERROR_INVALID_PARAMETER; \
        } \
    } while(0)

#define CHECK_FLAGS_NOT_ZERO(_flags_) \
    do { \
        if (0 == (_flags_)) \
        { \
            Debug_LOG_ERROR("%s: Parameter check failed! " \
                            "Flag value '%s' is unset", __func__, #_flags_); \
            return OS_ERROR_INVALID_PARAMETER; \
        } \
    } while(0)

#define CHECK_VALUE_NOT_ZERO(_value_) \
    do { \
        if (0 == (_value_)) \
        { \
            Debug_LOG_ERROR("%s: Parameter check failed! " \
                            "Value of '%s' is 0", __func__, #_value_); \
            return OS_ERROR_INVALID_PARAMETER; \
        } \
    } while(0)

// NOTE: _max_ is NOT included in this range check!
#define CHECK_VALUE_IN_RANGE(_value_,_min_,_max_) \
    do { \
        typeof(_value_) value = (_value_); \
        typeof(_min_) min = (_min_); \
        typeof(_max_) max = (_max_); \
        if ( !( (min <= value) && (value < max) ) ) \
        { \
            Debug_LOG_ERROR("%s: Parameter check failed! " \
                            "Value of '%s' is not in range " \
                            "%"PRId64"-%"PRId64, \
                            __func__, #_value_, (int64_t)min, (int64_t)max); \
            return OS_ERROR_INVALID_PARAMETER; \
        } \
    } while(0)

#define CHECK_VALUE_IN_CLOSED_INTERVAL(_value_,_min_,_max_) \
    do { \
        typeof(_value_) value = (_value_); \
        typeof(_min_) min = (_min_); \
        typeof(_max_) max = (_max_); \
        if ( !( (min <= value) && (value <= max) ) ) \
        { \
            Debug_LOG_ERROR("%s: Parameter check failed! " \
                            "Value of '%s' is not in closed interval " \
                            "%"PRId64"-%"PRId64, \
                            __func__, #_value_, (int64_t)min, (int64_t)max); \
            return OS_ERROR_INVALID_PARAMETER; \
        } \
    } while(0)

#define CHECK_STR_NOT_EMPTY(_str_) \
    do { \
        const char* const str = (_str_); \
        if ((NULL == str) || ('\0' == str[0])) \
        { \
            Debug_LOG_ERROR("%s: Parameter check failed! " \
                            "String '%s' is NULL or has length 0", \
                            __func__, #_str_); \
            return OS_ERROR_INVALID_PARAMETER; \
        } \
    } while(0)

#define CHECK_DATAPORT_SET(_port_) \
    do { \
        if (OS_Dataport_isUnset(_port_)) \
        { \
            Debug_LOG_ERROR("%s: Parameter check failed! " \
                            "Dataport '%s' is not set", __func__, #_port_); \
            return OS_ERROR_INVALID_PARAMETER; \
        } \
    } while(0)

#define CHECK_DATAPORT_SIZE(_port_,_sz_) \
    do  { \
        if ((_sz_) > OS_Dataport_getSize(_port_)) {  \
            Debug_LOG_ERROR("%s: Parameter check failed! " \
                             "Size passed via '%s' too big for dataport '%s'", \
                            __func__, #_sz_, #_port_); \
            return OS_ERROR_INVALID_PARAMETER; \
        } \
    } while(0)
