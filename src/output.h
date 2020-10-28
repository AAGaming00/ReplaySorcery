/*
 * Copyright (C) 2020  Joshua Minter
 *
 * This file is part of ReplaySorcery.
 *
 * ReplaySorcery is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ReplaySorcery is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ReplaySorcery.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef RS_OUTPUT_H
#define RS_OUTPUT_H
#include "encoder/encoder.h"
#include "util/pktcircle.h"

typedef struct RSOutput RSOutput;

int rsOutputCreate(RSOutput **output);
void rsOutputStream(RSOutput *output, RSEncoder *encoder);
int rsOutputRun(RSOutput *output, RSPktCircle *circle);
void rsOutputDestroy(RSOutput **output);

#endif