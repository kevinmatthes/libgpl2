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
 * \brief       The brief license text of the GPL 2.0 license.
 * \copyright   (C) 2022 Kevin Matthes.
 *              This file is licensed GPL 2 as of June 1991.
 * \date        2022
 * \file        GPL_2_0.h
 * \note        See `LICENSE' for full license.
 *              See `README.md' for project details.
 *
 * This header defines utility functions and macros concering the GPL 2.0
 * license.
 */

/******************************************************************************/

/*
 * Security settings.
 */

#pragma once
#ifndef __GPL_2_0_H__
#define __GPL_2_0_H__



/*
 * Includes.
 */

// The C standard library.
#include <stdbool.h>
#include <stdio.h>



/**
 * \brief   The GPL 2.0 license (brief version).
 *
 * This macro represents the brief version of the GPL 2.0 license text.
 */

#define GPL_2_0                                                                \
    "This program is free software; you can redistribute it and/or modify\n"   \
    "it under the terms of the GNU General Public License as published by\n"   \
    "the Free Software Foundation; either version 2 of the License, or\n"      \
    "(at your option) any later version.\n"                                    \
    "\n"                                                                       \
    "This program is distributed in the hope that it will be useful,\n"        \
    "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"         \
    "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"          \
    "GNU General Public License for more details.\n"                           \
    "\n"                                                                       \
    "You should have received a copy of the GNU General Public License along\n"\
    "with this program; if not, write to the Free Software Foundation, Inc.,\n"\
    "51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.\n"



/**
 * \brief   The GPL 2.0 warranty.
 *
 * This macro represents the entire warranty section of the GPL 2.0 license.
 */

#define GPL_2_0__WARRANTY                                                       \
"                            NO WARRANTY\n"                                     \
"\n"                                                                            \
"  11. BECAUSE THE PROGRAM IS LICENSED FREE OF CHARGE, THERE IS NO WARRANTY\n"  \
"FOR THE PROGRAM, TO THE EXTENT PERMITTED BY APPLICABLE LAW.  EXCEPT WHEN\n"    \
"OTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS AND/OR OTHER PARTIES\n"      \
"PROVIDE THE PROGRAM \"AS IS\" WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED\n"\
"OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF\n"        \
"MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE ENTIRE RISK AS\n"   \
"TO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH YOU.  SHOULD THE\n"      \
"PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING,\n"    \
"REPAIR OR CORRECTION.\n"                                                       \
"\n"                                                                            \
"  12. IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING\n" \
"WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MAY MODIFY AND/OR\n"         \
"REDISTRIBUTE THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES,\n"  \
"INCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING\n" \
"OUT OF THE USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED\n"   \
"TO LOSS OF DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY\n"    \
"YOU OR THIRD PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER\n"  \
"PROGRAMS), EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE\n"       \
"POSSIBILITY OF SUCH DAMAGES.\n"



/*
 * Function declarations.
 */

extern  bool    gpl2_copyright_line ( FILE * const          stream
                                    , const int             year_first
                                    , const int             year_latest
                                    , const char * const    people
                                    );
extern  bool    gpl2_information    ( FILE * const          stream
                                    , const char * const    app_name
                                    , const int             major
                                    , const int             minor
                                    , const int             fix_level
                                    , const int             year_first
                                    , const int             year_latest
                                    , const char * const    people
                                    );
extern  bool    gpl2_license        ( FILE * const          stream
                                    , const int             year_first
                                    , const int             year_latest
                                    , const char * const    people
                                    );
extern  bool    gpl2_version        ( FILE * const          stream
                                    , const char * const    app_name
                                    , const int             major
                                    , const int             minor
                                    , const int             fix_level
                                    );
extern  bool    gpl2_warranty       (FILE * const stream);



/*
 * End of header.
 */

// Leaving the header.
#endif  // ! __GPL_2_0_H__

/******************************************************************************/
