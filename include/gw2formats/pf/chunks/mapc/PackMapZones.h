// File: gw2formats/pf/chunks/mapc/PackMapZones.h

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
// Chunktype: zon2

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPZONES_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPZONES_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/FileName.h>
#include <gw2formats/pf/helpers/Ptr.h>
#include <gw2formats/pf/helpers/Vector.h>
#include <gw2formats/pf/helpers/WString.h>

#include <gw2formats/pf/chunks/mapc/common.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			GW2FORMATS_API struct PackMapZoneModelV23 {
				helpers::FileName filename;
				float probability;
				dword flags;
				float3 hslOffset;
				byte zOffsets[2];
				qword permutation;
			public:
				PackMapZoneModelV23( );
				PackMapZoneModelV23( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapZoneModelV23( const PackMapZoneModelV23& p_other );
				PackMapZoneModelV23& operator=( const PackMapZoneModelV23& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapZoneLayerDefV23 {
				byte type;
				byte height;
				byte width;
				byte radiusGround;
				byte sortGroup;
				byte tiling;
				float2 scaleRange;
				float probability;
				float2 fadeRange;
				float2 rotRange[3];
				float2 hslRanges[4];
				float instanceScaleJitter;
				byte noise;
				dword layerFlags;
				helpers::FileName materialname;
				helpers::Array<PackMapZoneModelV23> modelArray;
				helpers::Ptr<PackMapZoneModelV23> subModel;
				helpers::WString reserved;
			public:
				PackMapZoneLayerDefV23( );
				PackMapZoneLayerDefV23( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapZoneLayerDefV23( const PackMapZoneLayerDefV23& p_other );
				PackMapZoneLayerDefV23& operator=( const PackMapZoneLayerDefV23& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapZonePageV11 {
				helpers::Array<byte> flags;
				dword2 chunkCoord;
				byte seed;
				helpers::Array<dword> paintFlags;
				helpers::WString string;
			public:
				PackMapZonePageV11( );
				PackMapZonePageV11( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapZonePageV11( const PackMapZonePageV11& p_other );
				PackMapZonePageV11& operator=( const PackMapZonePageV11& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapZonePageTableV11 {
				helpers::Array<PackMapZonePageV11> pageArray;
				dword flags;
			public:
				PackMapZonePageTableV11( );
				PackMapZonePageTableV11( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapZonePageTableV11( const PackMapZonePageTableV11& p_other );
				PackMapZonePageTableV11& operator=( const PackMapZonePageTableV11& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapZoneDefV23 {
				helpers::FileName defFilename;
				dword token;
				helpers::Array<PackMapZoneLayerDefV23> layerDefArray;
				qword timeStamp;
				helpers::Ptr<PackMapZonePageTableV11> pageTable;
				helpers::WString reserved;
			public:
				PackMapZoneDefV23( );
				PackMapZoneDefV23( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapZoneDefV23( const PackMapZoneDefV23& p_other );
				PackMapZoneDefV23& operator=( const PackMapZoneDefV23& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapZoneEncodingDataV23 {
				word index;
				byte offset;
			public:
				PackMapZoneEncodingDataV23( );
				PackMapZoneEncodingDataV23( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapZoneEncodingDataV23( const PackMapZoneEncodingDataV23& p_other );
				PackMapZoneEncodingDataV23& operator=( const PackMapZoneEncodingDataV23& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapZoneCollideDataV23 {
				float normalX;
				float normalY;
				float zPos;
			public:
				PackMapZoneCollideDataV23( );
				PackMapZoneCollideDataV23( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapZoneCollideDataV23( const PackMapZoneCollideDataV23& p_other );
				PackMapZoneCollideDataV23& operator=( const PackMapZoneCollideDataV23& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapZoneV23 {
				dword zoneFlags;
				dword4 vertRect;
				float waterHeight;
				byte seed;
				dword defToken;
				float2 range;
				float zPos;
				helpers::Array<byte> flags;
				helpers::Array<PackMapZoneEncodingDataV23> encodeData;
				helpers::Array<PackMapZoneCollideDataV23> collideData;
				helpers::Array<word> offsetData;
				helpers::Array<float2> vertices;
				word broadId;
				helpers::WString reserved;
			public:
				PackMapZoneV23( );
				PackMapZoneV23( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapZoneV23( const PackMapZoneV23& p_other );
				PackMapZoneV23& operator=( const PackMapZoneV23& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapZonesV23 {
				helpers::Array<PackMapZoneDefV23> zoneDefArray;
				helpers::Array<PackMapZoneV23> zoneArray;
				PackBroadphaseType broadPhase;
				word maxBroadId;
				helpers::WString string;
			public:
				PackMapZonesV23( );
				PackMapZonesV23( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapZonesV23( const PackMapZonesV23& p_other );
				PackMapZonesV23& operator=( const PackMapZonesV23& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef PackMapZonesV23 PackMapZones;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::mapc, fcc::zon2> { typedef chunks::PackMapZones Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPZONES_H_INCLUDED
