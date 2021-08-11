/*
 * Copyright (C) 2020, HENSOLDT Cyber GmbH
 */

/**
 * @file
 * @brief Macros to allow overload of macros.
 *
 */

// Example for a macro FOO(..) that can be overloaded up to 2 arguments:
// #define FOO(...) Overload_DEFINE_MACRO_2(FOO, __VA_ARGS__)
// this will need to have FOO_1(x) and FOO_2(x,y) previously defined to work

#define Overload_GET_MACRO_1(_1, NAME, ...) NAME
#define Overload_GET_MACRO_2(_1, _2, NAME, ...) NAME
#define Overload_GET_MACRO_3(_1, _2, _3, NAME, ...) NAME
#define Overload_GET_MACRO_4(_1, _2, _3, _4, NAME, ...) NAME
#define Overload_GET_MACRO_5(_1, _2, _3, _4, _5, NAME, ...) NAME
#define Overload_GET_MACRO_6(_1, _2, _3, _4, _5, _6, NAME, ...) NAME
#define Overload_GET_MACRO_7(_1, _2, _3, _4, _5, _6, _7, NAME, ...) NAME
#define Overload_GET_MACRO_8(_1, _2, _3, _4, _5, _6, _7, _8, NAME, ...) NAME

#define Overload_MACRO_1(NAME, ...) Overload_GET_MACRO_1(__VA_ARGS__ __VA_OPT__(,) NAME##_1, NAME##_0)(__VA_ARGS__)
#define Overload_MACRO_2(NAME, ...) Overload_GET_MACRO_2(__VA_ARGS__ __VA_OPT__(,) NAME##_2, NAME##_1, NAME##_0)(__VA_ARGS__)
#define Overload_MACRO_3(NAME, ...) Overload_GET_MACRO_3(__VA_ARGS__ __VA_OPT__(,) NAME##_3, NAME##_2, NAME##_1, NAME##_0)(__VA_ARGS__)
#define Overload_MACRO_4(NAME, ...) Overload_GET_MACRO_4(__VA_ARGS__ __VA_OPT__(,) NAME##_4, NAME##_3, NAME##_2, NAME##_1, NAME##_0)(__VA_ARGS__)
#define Overload_MACRO_5(NAME, ...) Overload_GET_MACRO_5(__VA_ARGS__ __VA_OPT__(,) NAME##_5, NAME##_4, NAME##_3, NAME##_2, NAME##_1, NAME##_0)(__VA_ARGS__)
#define Overload_MACRO_6(NAME, ...) Overload_GET_MACRO_6(__VA_ARGS__ __VA_OPT__(,) NAME##_6, NAME##_5, NAME##_4, NAME##_3, NAME##_2, NAME##_1, NAME##_0)(__VA_ARGS__)
#define Overload_MACRO_7(NAME, ...) Overload_GET_MACRO_7(__VA_ARGS__ __VA_OPT__(,) NAME##_7, NAME##_6, NAME##_5, NAME##_4, NAME##_3, NAME##_2, NAME##_1, NAME##_0)(__VA_ARGS__)
#define Overload_MACRO_8(NAME, ...) Overload_GET_MACRO_8(__VA_ARGS__ __VA_OPT__(,) NAME##_8, NAME##_7, NAME##_6, NAME##_5, NAME##_4, NAME##_3, NAME##_2, NAME##_1, NAME##_0)(__VA_ARGS__)
