// File: gw2formats/pf/chunks/hvkC/PackMapCollide.h

/*  Copyright (C) 2014-2023 Khralkatorrix <https://github.com/kytulendu>
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

// Filetype: hvkC
// Chunktype: havk

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_HVKC_PACKMAPCOLLIDE_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_HVKC_PACKMAPCOLLIDE_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/Vector.h>
#include <gw2formats/pf/helpers/WString.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			GW2FORMATS_API struct PackMoppType {
				helpers::Array<byte> moppData;
			public:
				PackMoppType( );
				PackMoppType( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMoppType( const PackMoppType& p_other );
				PackMoppType& operator=( const PackMoppType& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapCollideCollisionV16 {
				helpers::Array<word> indices;
				helpers::Array<float3> vertices;
				helpers::Array<word> surfaces;
				PackMoppType moppCodeData;
			public:
				PackMapCollideCollisionV16( );
				PackMapCollideCollisionV16( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapCollideCollisionV16( const PackMapCollideCollisionV16& p_other );
				PackMapCollideCollisionV16& operator=( const PackMapCollideCollisionV16& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapCollideBlockerV16 {
				helpers::Array<float3> vertices;
			public:
				PackMapCollideBlockerV16( );
				PackMapCollideBlockerV16( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapCollideBlockerV16( const PackMapCollideBlockerV16& p_other );
				PackMapCollideBlockerV16& operator=( const PackMapCollideBlockerV16& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapCollideAnimationV16 {
				qword sequence;
				helpers::Array<dword> collisionIndices;
				helpers::Array<dword> blockerIndices;
			public:
				PackMapCollideAnimationV16( );
				PackMapCollideAnimationV16( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapCollideAnimationV16( const PackMapCollideAnimationV16& p_other );
				PackMapCollideAnimationV16& operator=( const PackMapCollideAnimationV16& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapCollideGeometryV16 {
				byte quantizedExtents;
				helpers::Array<dword> animations;
				word navMeshIndex;
			public:
				PackMapCollideGeometryV16( );
				PackMapCollideGeometryV16( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapCollideGeometryV16( const PackMapCollideGeometryV16& p_other );
				PackMapCollideGeometryV16& operator=( const PackMapCollideGeometryV16& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapCollideModelObsV16 {
				float3 translate;
				dword geometryIndex;
			public:
				PackMapCollideModelObsV16( );
				PackMapCollideModelObsV16( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapCollideModelObsV16( const PackMapCollideModelObsV16& p_other );
				PackMapCollideModelObsV16& operator=( const PackMapCollideModelObsV16& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapCollideModelPropV16 {
				qword token;
				qword sequence;
				float scale;
				float3 translate;
				float3 rotate;
				dword geometryIndex;
			public:
				PackMapCollideModelPropV16( );
				PackMapCollideModelPropV16( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapCollideModelPropV16( const PackMapCollideModelPropV16& p_other );
				PackMapCollideModelPropV16& operator=( const PackMapCollideModelPropV16& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapCollideModelZoneV16 {
				float scale;
				float3 translate;
				float3 rotate;
				dword geometryIndex;
			public:
				PackMapCollideModelZoneV16( );
				PackMapCollideModelZoneV16( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapCollideModelZoneV16( const PackMapCollideModelZoneV16& p_other );
				PackMapCollideModelZoneV16& operator=( const PackMapCollideModelZoneV16& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapCollideWaterVolumeV16 {
				qword guid;
				helpers::WString name;
				dword flags;
				float2 verticalRange;
				helpers::Array<float2> vertices;
			public:
				PackMapCollideWaterVolumeV16();
				PackMapCollideWaterVolumeV16(const byte* p_data, size_t p_size, const byte** po_pointer = nullptr);
				PackMapCollideWaterVolumeV16(const PackMapCollideWaterVolumeV16& p_other);
				PackMapCollideWaterVolumeV16& operator=(const PackMapCollideWaterVolumeV16& p_other);
				const byte* assign(const byte* p_data, size_t p_size);
			};

			GW2FORMATS_API struct PackMapCollideV16 {
				float3 boundsMin;
				float3 boundsMax;
				dword flags;
				float waterSurfaceZ;
				helpers::Array<PackMapCollideCollisionV16> collisions;
				helpers::Array<PackMapCollideBlockerV16> blockers;
				helpers::Array<PackMapCollideAnimationV16> animations;
				helpers::Array<PackMapCollideGeometryV16> geometries;
				helpers::Array<PackMapCollideModelObsV16> obsModels;
				helpers::Array<PackMapCollideModelPropV16> propModels;
				helpers::Array<PackMapCollideModelZoneV16> zoneModels;
				helpers::Array<PackMapCollideWaterVolumeV16> waterVolumes;
			public:
				PackMapCollideV16( );
				PackMapCollideV16( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapCollideV16( const PackMapCollideV16& p_other );
				PackMapCollideV16& operator=( const PackMapCollideV16& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef PackMapCollideV16 PackMapCollide;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::hvkC, fcc::havk> { typedef chunks::PackMapCollide Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_HVKC_PACKMAPCOLLIDE_H_INCLUDED
