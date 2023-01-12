/*
  # Colossal, a UCI chess playing engine
  # Copyright (C) 2023 The Colossal developers (see AUTHORS file)
  # 
  # Colossal is free software: you can redistribute it and/or modify
  # it under the terms of the GNU General Public License as published by
  # the Free Software Foundation, either version 3 of the License, or
  # (at your option) any later version.

  # Colossal is distributed in the hope that it will be useful,
  # but WITHOUT ANY WARRANTY; without even the implied warranty of
  # MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  # GNU General Public License for more details.
  # 
  # You should have received a copy of the GNU General Public License
  # along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef PSQT_H_INCLUDED
#define PSQT_H_INCLUDED


#include "types.h"


namespace Colossal::PSQT
{

extern Score psq[PIECE_NB][SQUARE_NB];

// Fill psqt array from a set of internally linked parameters
extern void init();

} // namespace Colossal::PSQT


#endif // PSQT_H_INCLUDED
