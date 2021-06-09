/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

<<<<<<< HEAD
<<<<<<< HEAD:Marlin/src/pins/stm32f4/env_validate.h
=======
>>>>>>> upstream/2.0.x
#if NOT_TARGET(STM32F4) && (DISABLED(ALLOW_STM32DUINO) || NOT_TARGET(STM32F4xx))
  #error "Oops! Select an STM32F4 board in 'Tools > Board.'"
#endif

#undef ALLOW_STM32DUINO
<<<<<<< HEAD
=======
#define BOARD_INFO_NAME "BTT SKR V2 Rev.B"

#include "pins_BTT_SKR_V2_0_common.h"
>>>>>>> upstream/2.0.x:Marlin/src/pins/stm32f4/pins_BTT_SKR_V2_0_REV_B.h
=======
>>>>>>> upstream/2.0.x
