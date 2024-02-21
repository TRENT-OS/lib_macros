/*
 * Copyright (C) 2021-2024, HENSOLDT Cyber GmbH
 * 
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * For commercial licensing, contact: info.cyber@hensoldt.net
 */

/**
 * @file
 *
 * Macros to perform operations on arrays.
 *
 */

#pragma once

#define ARRAY_ELEMENTS(a) (sizeof(a) / sizeof(a[0]))
