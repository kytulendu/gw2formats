// File: pf/chunks/mMet/PackMapMetadata.cpp

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

#include <gw2formats/pf/chunks/mMet/PackMapMetadata.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      PackMapMetadataMap
			//============================================================================/

			PackMapMetadataMap::PackMapMetadataMap( )
				: mapId( 0 )
				, mapType( 0 ) {
			}

			PackMapMetadataMap::PackMapMetadataMap( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapMetadataMap::PackMapMetadataMap( const PackMapMetadataMap& p_other )
				: mapId( p_other.mapId )
				, mapType( p_other.mapType ) {
			}

			PackMapMetadataMap& PackMapMetadataMap::operator=( const PackMapMetadataMap& p_other ) {
				mapId = p_other.mapId;
				mapType = p_other.mapType;
				return *this;
			}

			const byte* PackMapMetadataMap::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, mapId );
				p_data = helpers::read( p_data, p_size, mapType );
				return p_data;
			}

			//============================================================================/
			//      PackMapMetadata
			//============================================================================/

			PackMapMetadata::PackMapMetadata( ) {
			}

			PackMapMetadata::PackMapMetadata( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapMetadata::PackMapMetadata( const PackMapMetadata& p_other )
				: maps( p_other.maps ) {
			}

			PackMapMetadata& PackMapMetadata::operator=( const PackMapMetadata& p_other ) {
				maps = p_other.maps;
				return *this;
			}

			const byte* PackMapMetadata::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, maps );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
