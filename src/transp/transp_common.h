/*
 * This file is part of the gk project (https://github.com/recp/gk)
 * Copyright (c) Recep Aslantas.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef src_transp_common_h
#define src_transp_common_h

#include "../../include/gk/gk.h"
#include "../../include/gk/transparent.h"
#include "../../include/gk/prims/builtin-prim.h"

typedef struct GkTranspBase {
  GkTranspTechnType type;
} GkTranspBase;

_gk_hide
GkRenderPathFn
gkTranpRenderFunc(void);

#endif /* src_transp_common_h */
