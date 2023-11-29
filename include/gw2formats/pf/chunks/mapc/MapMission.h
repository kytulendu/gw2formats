// File: gw2formats/pf/chunks/mapc/MapMission.h

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
// Chunktype: msn

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_MAPC_MAPMISSION_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_MAPC_MAPMISSION_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/Vector.h>
#include <gw2formats/pf/helpers/WString.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			GW2FORMATS_API struct PackMapInterestPointV2 {
				float3 position;
				float3 forward;
				helpers::WString description;
			public:
				PackMapInterestPointV2( );
				PackMapInterestPointV2( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapInterestPointV2( const PackMapInterestPointV2& p_other );
				PackMapInterestPointV2& operator=( const PackMapInterestPointV2& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MapMissionV2 {
				helpers::Array<PackMapInterestPointV2> interestPoints;
			public:
				MapMissionV2( );
				MapMissionV2( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MapMissionV2( const MapMissionV2& p_other );
				MapMissionV2& operator=( const MapMissionV2& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef MapMissionV2 MapMission;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::mapc, fcc::msn> { typedef chunks::MapMission Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_MAPC_MAPMISSION_H_INCLUDED
