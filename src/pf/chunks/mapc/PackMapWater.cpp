// File: pf/chunks/mapc/PackMapWater.cpp

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

#include <gw2formats/pf/chunks/mapc/PackMapWater.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      PackMapWaterSurfaceV1
			//============================================================================/

			PackMapWaterSurfaceV1::PackMapWaterSurfaceV1( )
				: guid( 0 )
				, waterSurfaceFlags( 0 )
				, waterSurfaceZ( 0 ) {
			}

			PackMapWaterSurfaceV1::PackMapWaterSurfaceV1( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapWaterSurfaceV1::PackMapWaterSurfaceV1( const PackMapWaterSurfaceV1& p_other )
				: guid( p_other.guid )
				, waterSurfaceFlags( p_other.waterSurfaceFlags )
				, waterSurfaceZ( p_other.waterSurfaceZ )
				, vertices( p_other.vertices ) {
			}

			PackMapWaterSurfaceV1& PackMapWaterSurfaceV1::operator=( const PackMapWaterSurfaceV1& p_other ) {
				guid = p_other.guid;
				waterSurfaceFlags = p_other.waterSurfaceFlags;
				waterSurfaceZ = p_other.waterSurfaceZ;
				vertices = p_other.vertices;
				return *this;
			}

			const byte* PackMapWaterSurfaceV1::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, guid );
				p_data = helpers::read( p_data, p_size, waterSurfaceFlags );
				p_data = helpers::read( p_data, p_size, waterSurfaceZ );
				p_data = helpers::read( p_data, p_size, vertices );
				return p_data;
			}

			//============================================================================/
			//      PackMapWaterV1
			//============================================================================/

			PackMapWaterV1::PackMapWaterV1( )
				: waterFlags( 0 )
				, waterPlaneZ( 0 ) {
			}

			PackMapWaterV1::PackMapWaterV1( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapWaterV1::PackMapWaterV1( const PackMapWaterV1& p_other )
				: waterFlags( p_other.waterFlags )
				, waterPlaneZ( p_other.waterPlaneZ )
				, waterSurfaces( p_other.waterSurfaces ) {
			}

			PackMapWaterV1& PackMapWaterV1::operator=( const PackMapWaterV1& p_other ) {
				waterFlags = p_other.waterFlags;
				waterPlaneZ = p_other.waterPlaneZ;
				waterSurfaces = p_other.waterSurfaces;
				return *this;
			}

			const byte* PackMapWaterV1::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, waterFlags );
				p_data = helpers::read( p_data, p_size, waterPlaneZ );
				p_data = helpers::read( p_data, p_size, waterSurfaces );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
