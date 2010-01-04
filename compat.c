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
      along with lib302dl.  If not, see <http://www.gnu.org/licenses/>. */

/* compatibility functions; library was intended to be used with Peter Fleury's i2c library, but should be useable with anything else */
#include <stdio.h>
#include "i2cmaster.h"

void
twi_initialize (void)
{
  i2c_init ();
}

void
twi_stop (void)
{
  i2c_stop ();
}

void
twi_start (uint8_t addr)
{
  i2c_start_wait (addr);
}

uint8_t
twi_write (uint8_t data)
{
  return i2c_write (data);
}

uint8_t
twi_read (void)
{
  return i2c_readNak ();
}
