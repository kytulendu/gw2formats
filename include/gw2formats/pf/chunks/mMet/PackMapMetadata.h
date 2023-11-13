// File: gw2formats/pf/chunks/mMet/PackMapMetadata.h

/*
Copyright (C) 2014-2015 Khralkatorrix <https://github.com/kytulendu>
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

// Filetype: mMet
// Chunktype: Main

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_MMET_PACKMAPMETADATA_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_MMET_PACKMAPMETADATA_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/Vector.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			GW2FORMATS_API struct PackMapMetadataMap {
				word mapId;
				byte mapType;
			public:
				PackMapMetadataMap( );
				PackMapMetadataMap( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapMetadataMap( const PackMapMetadataMap& p_other );
				PackMapMetadataMap& operator=( const PackMapMetadataMap& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapMetadata {
				helpers::Array<PackMapMetadataMap> maps;
			public:
				PackMapMetadata( );
				PackMapMetadata( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapMetadata( const PackMapMetadata& p_other );
				PackMapMetadata& operator=( const PackMapMetadata& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef PackMapMetadata PackMapMetadata;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::mMet, fcc::Main> { typedef chunks::PackMapMetadata Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_MMET_PACKMAPMETADATA_H_INCLUDED
