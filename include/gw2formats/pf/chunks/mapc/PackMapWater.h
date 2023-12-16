// File: gw2formats/pf/chunks/mapc/PackMapWater.h

/*
Copyright (C) 2023 Khralkatorrix <https://github.com/kytulendu>

This file is part of gw2formats.

gw2formats is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// Filetype: mapc
// Chunktype: watr

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPWATER_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPWATER_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/FileName.h>
#include <gw2formats/pf/helpers/Vector.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			GW2FORMATS_API struct PackMapWaterSurfaceV1 {
				qword guid;
				dword waterSurfaceFlags;
				float waterSurfaceZ;
				helpers::Array<float2> vertices;
			public:
				PackMapWaterSurfaceV1( );
				PackMapWaterSurfaceV1( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapWaterSurfaceV1( const PackMapWaterSurfaceV1& p_other );
				PackMapWaterSurfaceV1& operator=( const PackMapWaterSurfaceV1& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapWaterV1 {
				dword waterFlags;
				float waterPlaneZ;
				helpers::Array<PackMapWaterSurfaceV1> waterSurfaces;
			public:
				PackMapWaterV1( );
				PackMapWaterV1( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapWaterV1( const PackMapWaterV1& p_other );
				PackMapWaterV1& operator=( const PackMapWaterV1& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef PackMapWaterV1 PackMapWater;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::mapc, fcc::watr> { typedef chunks::PackMapWater Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPWATER_H_INCLUDED
