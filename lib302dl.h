/*    Copyright (C) 2009 Evgeny Grablyk <evgeny.grablyk@gmail.com>

      This file is part of lib302dl.
      
      lib302dl is free software: you can redistribute it and/or modify
      it under the terms of the GNU Lesser General Public License as published by
      the Free Software Foundation, either version 3 of the License, or
      (at your option) any later version.
      
      Foobar is distributed in the hope that it will be useful,
      but WITHOUT ANY WARRANTY; without even the implied warranty of
      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
      GNU General Public License for more details.
      
      You should have received a copy of the GNU Lesser General Public License
      along with lib302dl.  If not, see <http://www.gnu.org/licenses/>.
*/

/* write to a specific register on the accelerometer */
void lis_rwrite (uint8_t reg, uint8_t value);
/* read a spicific register from the accelerometer */
int8_t lis_rread (uint8_t reg);
/* initialize the accelerometer for operation */
uint8_t lis_initialize (uint8_t high_datarate, uint8_t dopowerup,
			uint8_t setfullscale);
int8_t lis_rx (void);
int8_t lis_ry (void);
int8_t lis_rz (void);
/* following three lis_r<axis>a functions read acceleration on corresponding axis in milli g */
int16_t lis_rxa (void);
int16_t lis_rya (void);
int16_t lis_rza (void);

uint8_t lis_mrx (void);
uint8_t lis_mry (void);
uint8_t lis_mrz (void);

enum checks
  {
    LIS_RCHECK,
    LIS_NORCHECK
  };
/* maximum acceleration value in fullscale mode is around 10000 milli g, so this is usable */
#define LIS_ERROR 15000;
