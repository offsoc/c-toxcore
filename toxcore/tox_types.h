/* SPDX-License-Identifier: GPL-3.0-or-later
 * Copyright © 2016-2025 The TokTok team.
 * Copyright © 2013 Tox project.
 */

/** @brief Typedefs for Tox types.
 *
 * This file contains typedefs for Tox structs. It's not necessary to include
 * this file directly, as it's included and exported by other headers with
 * functions.
 *
 * More documentation about the types is available in the respective header
 * files, e.g. tox.h, tox_options.h, etc. linked in the comments.
 */
#ifndef C_TOXCORE_TOXCORE_TOX_TYPES_H
#define C_TOXCORE_TOXCORE_TOX_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/** @{ @namespace tox */

#ifndef TOX_DEFINED
#define TOX_DEFINED
typedef struct Tox Tox;  // tox.h
#endif /* TOX_DEFINED */

#ifndef TOX_OPTIONS_DEFINED
#define TOX_OPTIONS_DEFINED
typedef struct Tox_Options Tox_Options;  // tox_options.h
#endif /* TOX_OPTIONS_DEFINED */

/** @} */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* C_TOXCORE_TOXCORE_TOX_TYPES_H */
