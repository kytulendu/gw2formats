// File: gw2formats/pf/chunks/mapc/MapShore.h

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
// Chunktype: shor

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_MAPC_MAPSHORE_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_MAPC_MAPSHORE_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/FileName.h>
#include <gw2formats/pf/helpers/Vector.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			GW2FORMATS_API struct MapShoreChainV0 {
				float offset;
				float opacity;
				float animationSpeed;
				float2 edgeSize;
				dword flags;
				helpers::Array<float2> points;
				helpers::FileName materialFilename;
				helpers::Array<helpers::FileName> textureFilenames;
				float restTime;
				float2 fadeRanges[4];
				float simplifyDistMin;
				float simplifyDistMax;
				float simplifyDot;
			public:
				MapShoreChainV0( );
				MapShoreChainV0( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MapShoreChainV0( const MapShoreChainV0& p_other );
				MapShoreChainV0& operator=( const MapShoreChainV0& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MapShoreV0 {
				helpers::Array<MapShoreChainV0> chains;
			public:
				MapShoreV0( );
				MapShoreV0( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MapShoreV0( const MapShoreV0& p_other );
				MapShoreV0& operator=( const MapShoreV0& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef MapShoreV0 MapShore;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::mapc, fcc::shor> { typedef chunks::MapShore Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_MAPC_MAPSHORE_H_INCLUDED
