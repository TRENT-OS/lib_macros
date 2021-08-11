/*
 * Copyright (C) 2020-2021, HENSOLDT Cyber GmbH
 */

#pragma once

#define _ITER_1(_m_)      _m_(1)
#define _ITER_2(_m_)      _ITER_1(_m_),_m_(2)
#define _ITER_3(_m_)      _ITER_2(_m_),_m_(3)
#define _ITER_4(_m_)      _ITER_3(_m_),_m_(4)
#define _ITER_5(_m_)      _ITER_4(_m_),_m_(5)
#define _ITER_6(_m_)      _ITER_5(_m_),_m_(6)
#define _ITER_7(_m_)      _ITER_6(_m_),_m_(7)
#define _ITER_8(_m_)      _ITER_7(_m_),_m_(8)
#define _ITER_9(_m_)      _ITER_8(_m_),_m_(9)
#define _ITER_10(_m_)     _ITER_9(_m_),_m_(10)
#define _ITER_11(_m_)     _ITER_10(_m_),_m_(11)
#define _ITER_12(_m_)     _ITER_11(_m_),_m_(12)
#define _ITER_13(_m_)     _ITER_12(_m_),_m_(13)
#define _ITER_14(_m_)     _ITER_13(_m_),_m_(14)
#define _ITER_15(_m_)     _ITER_14(_m_),_m_(15)
#define _ITER_16(_m_)     _ITER_15(_m_),_m_(16)

#define _ITER(n, macro)   _ITER_##n(macro)

/**
 * Expands macro M in a list of comma separated iteration of it like in the
 * following example: LIST(M, 3) -> M(1), M(2), M(3).
 *
 * @param[in] macro Macro as element of the comma separated list.
 * @param[in] n     Number of elements of the list.
 */
#define LIST(macro, n) _ITER(n, macro)
