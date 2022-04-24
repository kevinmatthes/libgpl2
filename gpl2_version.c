/*
 * Copyright (C) 2022 Kevin Matthes
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

/**
 * \author      Kevin Matthes
 * \brief       A minimum version information line.
 * \copyright   (C) 2022 Kevin Matthes.
 *              This file is licensed GPL 2 as of June 1991.
 * \date        2022
 * \file        gpl2_version.c
 * \note        See `LICENSE' for full license.
 *              See `README.md' for project details.
 *
 * This file implements a minimal version information function.  The text will
 * be written to the given stream using **hexadecimal integers**.
 */

/******************************************************************************/

/*
 * Includes.
 */

// This project.
#include "GPL_2.0.h"



/**
 * \brief   A minimum version information.
 * \param   stream      The stream to write the information to.
 * \param   app_name    The concerning application's name.
 * \param   major       The concerning application's major version.
 * \param   minor       The concerning application's minor version.
 * \param   fix_level   The concerning application's fix level.
 * \return  Whether the text was printed successfully.
 *
 * This function will write a brief version information for the concerning
 * application to the given stream.  Please note that the version will be output
 * using **hexadecimal integer** numbers.
 */

inline bool gpl2_version ( FILE * const          stream
                         , const char * const    app_name
                         , const int             major
                         , const int             minor
                         , const int             fix_level
                         )
{
    return fix_level < 0x0 ? fprintf ( stream
                                     , "%s, version %x.%x.\n"
                                     , app_name
                                     , major
                                     , minor
                                     )
                           : fprintf (stream
                                     , "%s, version %x.%x.%x.\n"
                                     , app_name
                                     , major
                                     , minor
                                     , fix_level
                                     )
                           ;
}

/******************************************************************************/
