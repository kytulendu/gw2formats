// File: gw2formats/pf/chunks/mapc/MapSurfaces.h


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
// Chunktype: surf

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_MAPC_MAPSURFACES_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_MAPC_MAPSURFACES_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/Vector.h>
#include <gw2formats/pf/helpers/WString.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			GW2FORMATS_API struct MapSurfaceAttributeV2 {
				qword id;
				qword sound;
				dword flags;
			public:
				MapSurfaceAttributeV2( );
				MapSurfaceAttributeV2( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MapSurfaceAttributeV2( const MapSurfaceAttributeV2& p_other );
				MapSurfaceAttributeV2& operator=( const MapSurfaceAttributeV2& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MapSurfaceAttributeToolV2 {
				helpers::WString name;
				helpers::WString category;
				byte4 color;
			public:
				MapSurfaceAttributeToolV2( );
				MapSurfaceAttributeToolV2( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MapSurfaceAttributeToolV2( const MapSurfaceAttributeToolV2& p_other );
				MapSurfaceAttributeToolV2& operator=( const MapSurfaceAttributeToolV2& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MapSurfaceOverrideV2 {
				qword surfaceId;
				helpers::Array<dword> bitArray;
			public:
				MapSurfaceOverrideV2( );
				MapSurfaceOverrideV2( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MapSurfaceOverrideV2( const MapSurfaceOverrideV2& p_other );
				MapSurfaceOverrideV2& operator=( const MapSurfaceOverrideV2& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MapSurfaceTerrainOverrideV2 {
				dword2 chunkCoord;
				helpers::Array<MapSurfaceOverrideV2> overrideArray;
			public:
				MapSurfaceTerrainOverrideV2( );
				MapSurfaceTerrainOverrideV2( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MapSurfaceTerrainOverrideV2( const MapSurfaceTerrainOverrideV2& p_other );
				MapSurfaceTerrainOverrideV2& operator=( const MapSurfaceTerrainOverrideV2& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MapSurfacePropOverrideV2 {
				qword propId;
				helpers::Array<MapSurfaceOverrideV2> overrideArray;
			public:
				MapSurfacePropOverrideV2( );
				MapSurfacePropOverrideV2( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MapSurfacePropOverrideV2( const MapSurfacePropOverrideV2& p_other );
				MapSurfacePropOverrideV2& operator=( const MapSurfacePropOverrideV2& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MapSurfacesV2 {
				helpers::Array<MapSurfaceAttributeV2> attributeData;
				helpers::Array<MapSurfaceAttributeToolV2> toolData;
				helpers::Array<MapSurfaceTerrainOverrideV2> terrainArray;
				helpers::Array<MapSurfacePropOverrideV2> propArray;
			public:
				MapSurfacesV2( );
				MapSurfacesV2( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MapSurfacesV2( const MapSurfacesV2& p_other );
				MapSurfacesV2& operator=( const MapSurfacesV2& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef MapSurfacesV2 MapSurfaces;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::mapc, fcc::surf> { typedef chunks::MapSurfaces Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_MAPC_MAPSURFACES_H_INCLUDED
