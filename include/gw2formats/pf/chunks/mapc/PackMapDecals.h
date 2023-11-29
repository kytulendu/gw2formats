// File: gw2formats/pf/chunks/mapc/PackMapDecals.h

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
// Chunktype: dcal

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPDECALS_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPDECALS_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/FileName.h>
#include <gw2formats/pf/helpers/Vector.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			GW2FORMATS_API struct PackMapDecalVertexV9 {
				float3 position;
				float3 normal;
				float3 tangent;
				float3 bitangent;
			public:
				PackMapDecalVertexV9( );
				PackMapDecalVertexV9( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapDecalVertexV9( const PackMapDecalVertexV9& p_other );
				PackMapDecalVertexV9& operator=( const PackMapDecalVertexV9& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapDecalV10 {
				float3 position;
				float3 extents;
				float3 rotation;
				float2 textureScaleUV0;
				float2 textureOffsetUV0;
				float2 textureScaleUV1;
				float2 textureOffsetUV1;
				float2 gridSize;
				helpers::FileName materialFilename;
				helpers::Array<helpers::FileName> textureFilenames;
				dword flags;
				float2 animTranslation;
				float2 animScaleRangeX;
				float2 animScaleRangeY;
				float2 animScaleSpeed;
				float animRotation;
				float surfaceBias;
				helpers::Array<dword> constantTokens;
				helpers::Array<float4> constantValues;
				helpers::Array<PackMapDecalVertexV9> vertices;
				helpers::Array<word> indices;
				helpers::Array<qword> propIds;
				byte projection;
				qword surfaceId;
				qword id;
			public:
				PackMapDecalV10( );
				PackMapDecalV10( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapDecalV10( const PackMapDecalV10& p_other );
				PackMapDecalV10& operator=( const PackMapDecalV10& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapDecalsV10 {
				helpers::Array<PackMapDecalV10> decals;
			public:
				PackMapDecalsV10( );
				PackMapDecalsV10( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapDecalsV10( const PackMapDecalsV10& p_other );
				PackMapDecalsV10& operator=( const PackMapDecalsV10& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef PackMapDecalsV10 PackMapDecals;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::mapc, fcc::dcal> { typedef chunks::PackMapDecals Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPDECALS_H_INCLUDED
