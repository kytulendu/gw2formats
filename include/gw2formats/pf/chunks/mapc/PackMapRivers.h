// File: gw2formats/pf/chunks/mapc/PackMapRivers.h

/*
Copyright (C) 2014 Khralkatorrix <https://github.com/kytulendu>
Copyright (C) 2012 Rhoot <https://github.com/rhoot>

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
// Chunktype: rive

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPRIVERS_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPRIVERS_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/FileName.h>
#include <gw2formats/pf/helpers/Vector.h>
#include <gw2formats/pf/helpers/WString.h>

#include <gw2formats/pf/chunks/mapc/common.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			GW2FORMATS_API struct MapRiverTextureMapV4 {
				float scale;
				float speedX;
				float speedY;
				float tiling;
				dword flags;
				byte uvIndex;
			public:
				MapRiverTextureMapV4( );
				MapRiverTextureMapV4( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MapRiverTextureMapV4( const MapRiverTextureMapV4& p_other );
				MapRiverTextureMapV4& operator=( const MapRiverTextureMapV4& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MapRiverMaterialV4 {
				helpers::FileName materialFile;
				helpers::Array<helpers::FileName> textureFiles;
				helpers::Array<dword> constantTokens;
				helpers::Array<float4> constantValues;
				helpers::Array<MapRiverTextureMapV4> textureMaps;
				dword flags;
			public:
				MapRiverMaterialV4( );
				MapRiverMaterialV4( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MapRiverMaterialV4( const MapRiverMaterialV4& p_other );
				MapRiverMaterialV4& operator=( const MapRiverMaterialV4& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MapRiverReachV4 {
				float width;
				float curveLength;
				float curvePercent;
				dword xTessellation;
				dword2 yTessellation;
				dword broadId;
				dword fvf;
				dword flags;
				helpers::Array<MapRiverMaterialV4> materials;
				helpers::WString reserved;
			public:
				MapRiverReachV4( );
				MapRiverReachV4( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MapRiverReachV4( const MapRiverReachV4& p_other );
				MapRiverReachV4& operator=( const MapRiverReachV4& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MapRiverV4 {
				qword guid;
				helpers::WString name;
				float xTiling;
				helpers::Array<float3> points;
				helpers::Array<MapRiverReachV4> reaches;
				dword flags;
			public:
				MapRiverV4( );
				MapRiverV4( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MapRiverV4( const MapRiverV4& p_other );
				MapRiverV4& operator=( const MapRiverV4& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapRiversV4 {
				dword flags;
				dword nextBroadId;
				helpers::Array<MapRiverV4> rivers;
				PackBroadphaseType broadPhase;
			public:
				PackMapRiversV4( );
				PackMapRiversV4( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapRiversV4( const PackMapRiversV4& p_other );
				PackMapRiversV4& operator=( const PackMapRiversV4& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef PackMapRiversV4 PackMapRivers;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::mapc, fcc::rive> { typedef chunks::PackMapRivers Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPRIVERS_H_INCLUDED
