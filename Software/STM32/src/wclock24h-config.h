/*-------------------------------------------------------------------------------------------------------------------------------------------
 * wclock24h-config.h - configuration constants of wclock24h project
 *
 * Copyright (c) 2014-2018 Frank Meyer - frank(at)fli4l.de
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *-------------------------------------------------------------------------------------------------------------------------------------------
 */
#ifndef WCLOCK24H_CONFIG_H
#define WCLOCK24H_CONFIG_H

#if WCLOCK24H == 1
#define WC_ROWS     18
#define WC_COLUMNS  19
#else
#define WC_ROWS     10
#define WC_COLUMNS  11
#endif

#define NOIR

#endif // WCLOCK24H_CONFIG_H
