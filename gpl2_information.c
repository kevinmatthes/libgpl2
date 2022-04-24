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
 * \brief       The GPL 2.0 information.
 * \copyright   (C) 2022 Kevin Matthes.
 *              This file is licensed GPL 2 as of June 1991.
 * \date        2022
 * \file        gpl2_information.c
 * \note        See `LICENSE' for full license.
 *              See `README.md' for project details.
 *
 * This file implements the GPL 2.0 information function.  The text will be
 * written to the given stream.
 */

/******************************************************************************/

/*
 * Includes.
 */

// This project.
#include "GPL_2.0.h"



/**
 * \brief   The information for the interactive mode.
 * \param   stream      The stream to write the information to.
 * \param   app_name    The concerning application's name.
 * \param   major       The concerning application's major version.
 * \param   minor       The concerning application's minor version.
 * \param   fix_level   The concerning application's fix level.
 * \param   year_first  The year of the first commit.
 * \param   year_latest The year of the latest commit.
 * \param   people      The people who contributed.
 * \return  Whether the text was printed successfully.
 *
 * This function will write a brief information block to the given stream.  This
 * is useful especially for the interactive mode.
 */

inline bool gpl2_information ( FILE * const          stream
                             , const char * const    app_name
                             , const int             major
                             , const int             minor
                             , const int             fix_level
                             , const int             year_first
                             , const int             year_latest
                             , const char * const    people
                             )
{
    return        gpl2_version ( stream, app_name,   major, minor, fix_level )
        && gpl2_copyright_line ( stream, year_first, year_latest,  people    )
        &&             fprintf ( stream
                               , "This application is free software.  For copyi"
                                 "ng details, see\nthe GNU General Public Licen"
                                 "se, version 2, as of June 1991.\n\nThis appli"
                                 "cation comes with ABSOLUTELY NO WARRANTY, not"
                                 " even\nfor MERCHANTABILITY or FITNESS FOR A P"
                                 "ARTICULAR PURPOSE;\nrun `%s -w' for more deta"
                                 "ils.\n\n"
                               , app_name
                               )
         ;
}

/******************************************************************************/
