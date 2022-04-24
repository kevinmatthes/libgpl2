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
 * \brief       The GPL 2.0 warranty information.
 * \copyright   (C) 2022 Kevin Matthes.
 *              This file is licensed GPL 2 as of June 1991.
 * \date        2022
 * \file        gpl2_warranty.c
 * \note        See `LICENSE' for full license.
 *              See `README.md' for project details.
 *
 * This file implements the GPL 2.0 warranty function.  It will write a brief
 * warranty notice to the given stream and than cite the according section of
 * the GPL 2.0 license.
 */

/******************************************************************************/

/*
 * Includes.
 */

// This project.
#include "GPL_2.0.h"



/**
 * \brief   Write the GPL 2.0 warranty information to the given stream.
 * \param   stream  The stream to write the GPL 2.0 warranty information to.
 * \return  Whether the text was printed successfully.
 *
 * This function will write a warranty information to the given stream.
 */

inline bool gpl2_warranty (FILE * const stream)
{
    return fprintf ( stream
                   , "This application comes with ABSOLUTELY NO WARRANTY, not"
                     " even for MERCHANTABILITY\nor FITNESS FOR A PARTICULAR "
                     "PURPOSE.\n\nThe GPL 2.0 license specifies the following"
                     ":\n\n" GPL_2_0__WARRANTY
                   );
}

/******************************************************************************/
