/*********************  P r o g r a m  -  M o d u l e ***********************/
/*!
 *         \file  _istrata_stub.c
 *
 *       \author  Christian.Kauntz@men.de
 *
 *        \brief  instance for IntelStrata Flash normal version
 *
 *
 *     Required: -
 *    \switches  (none)
 */
 /*---------------------------[ Public Functions ]----------------------------
 *
 *
 *---------------------------------------------------------------------------
 * Copyright 2007-2019, MEN Mikro Elektronik GmbH
 ****************************************************************************/
 /*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef FL_SWAP_SW
#undef FL_SWAP_SW
#endif /* FL_SWAP_SW */
#ifdef FL_SWAP_MMOD_SW
#undef FL_SWAP_MMOD_SW
#endif /* FL_SWAP_MMOD_SW */
#ifdef FL_SWAP_MMOD
#undef FL_SWAP_MMOD
#endif /* FL_SWAP_MMOD */

#define Z100_ISTRATAPC28FXXXP30_TRY Z100_ISTRATAPC28FXXXP30_TRY

#undef PROG_FILE_NAME
#include "fpga_load.h"
#include "hw_acc.c"
#include "hw_acc_mmod.c"
#include "istratapc28fxxxp30.c"


