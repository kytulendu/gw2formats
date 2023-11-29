// File: pf/chunks/mapc/MapSurfaces.cpp

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
#include <gw2formats/pf/chunks/mapc/MapSurfaces.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      MapSurfaceAttributeV2
			//============================================================================/

			MapSurfaceAttributeV2::MapSurfaceAttributeV2( )
				: id( 0 )
				, sound( 0 )
				, flags( 0 ) {
			}

			MapSurfaceAttributeV2::MapSurfaceAttributeV2( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MapSurfaceAttributeV2::MapSurfaceAttributeV2( const MapSurfaceAttributeV2& p_other )
				: id( p_other.id )
				, sound( p_other.sound )
				, flags( p_other.flags ) {
			}

			MapSurfaceAttributeV2& MapSurfaceAttributeV2::operator=( const MapSurfaceAttributeV2& p_other ) {
				id = p_other.id;
				sound = p_other.sound;
				flags = p_other.flags;
				return *this;
			}

			const byte* MapSurfaceAttributeV2::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, id );
				p_data = helpers::read( p_data, p_size, sound );
				p_data = helpers::read( p_data, p_size, flags );
				return p_data;
			}

			//============================================================================/
			//      MapSurfaceAttributeToolV2
			//============================================================================/

			MapSurfaceAttributeToolV2::MapSurfaceAttributeToolV2( ) {
			}

			MapSurfaceAttributeToolV2::MapSurfaceAttributeToolV2( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MapSurfaceAttributeToolV2::MapSurfaceAttributeToolV2( const MapSurfaceAttributeToolV2& p_other )
				: name( p_other.name )
				, category( p_other.category )
				, color( p_other.color ) {
			}

			MapSurfaceAttributeToolV2& MapSurfaceAttributeToolV2::operator=( const MapSurfaceAttributeToolV2& p_other ) {
				name = p_other.name;
				category = p_other.category;
				color = p_other.color;
				return *this;
			}

			const byte* MapSurfaceAttributeToolV2::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, category );
				p_data = helpers::read( p_data, p_size, color );
				return p_data;
			}

			//============================================================================/
			//      MapSurfaceOverrideV2
			//============================================================================/

			MapSurfaceOverrideV2::MapSurfaceOverrideV2( )
				: surfaceId( 0 ) {
			}

			MapSurfaceOverrideV2::MapSurfaceOverrideV2( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MapSurfaceOverrideV2::MapSurfaceOverrideV2( const MapSurfaceOverrideV2& p_other )
				: surfaceId( p_other.surfaceId )
				, bitArray( p_other.bitArray ) {
			}

			MapSurfaceOverrideV2& MapSurfaceOverrideV2::operator=( const MapSurfaceOverrideV2& p_other ) {
				surfaceId = p_other.surfaceId;
				bitArray = p_other.bitArray;
				return *this;
			}

			const byte* MapSurfaceOverrideV2::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, surfaceId );
				p_data = helpers::read( p_data, p_size, bitArray );
				return p_data;
			}

			//============================================================================/
			//      MapSurfaceTerrainOverrideV2
			//============================================================================/

			MapSurfaceTerrainOverrideV2::MapSurfaceTerrainOverrideV2( ) {
			}

			MapSurfaceTerrainOverrideV2::MapSurfaceTerrainOverrideV2( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MapSurfaceTerrainOverrideV2::MapSurfaceTerrainOverrideV2( const MapSurfaceTerrainOverrideV2& p_other )
				: chunkCoord( p_other.chunkCoord )
				, overrideArray( p_other.overrideArray ) {
			}

			MapSurfaceTerrainOverrideV2& MapSurfaceTerrainOverrideV2::operator=( const MapSurfaceTerrainOverrideV2& p_other ) {
				chunkCoord = p_other.chunkCoord;
				overrideArray = p_other.overrideArray;
				return *this;
			}

			const byte* MapSurfaceTerrainOverrideV2::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, chunkCoord );
				p_data = helpers::read( p_data, p_size, overrideArray );
				return p_data;
			}

			//============================================================================/
			//      MapSurfacePropOverrideV2
			//============================================================================/

			MapSurfacePropOverrideV2::MapSurfacePropOverrideV2( )
				: propId( 0 ) {
			}

			MapSurfacePropOverrideV2::MapSurfacePropOverrideV2( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MapSurfacePropOverrideV2::MapSurfacePropOverrideV2( const MapSurfacePropOverrideV2& p_other )
				: propId( p_other.propId )
				, overrideArray( p_other.overrideArray ) {
			}

			MapSurfacePropOverrideV2& MapSurfacePropOverrideV2::operator=( const MapSurfacePropOverrideV2& p_other ) {
				propId = p_other.propId;
				overrideArray = p_other.overrideArray;
				return *this;
			}

			const byte* MapSurfacePropOverrideV2::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, propId );
				p_data = helpers::read( p_data, p_size, overrideArray );
				return p_data;
			}

			//============================================================================/
			//      MapSurfacesV2
			//============================================================================/

			MapSurfacesV2::MapSurfacesV2( ) {
			}

			MapSurfacesV2::MapSurfacesV2( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MapSurfacesV2::MapSurfacesV2( const MapSurfacesV2& p_other )
				: attributeData( p_other.attributeData )
				, toolData( p_other.toolData )
				, terrainArray( p_other.terrainArray )
				, propArray( p_other.propArray ) {
			}

			MapSurfacesV2& MapSurfacesV2::operator=( const MapSurfacesV2& p_other ) {
				attributeData = p_other.attributeData;
				toolData = p_other.toolData;
				terrainArray = p_other.terrainArray;
				propArray = p_other.propArray;
				return *this;
			}

			const byte* MapSurfacesV2::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, attributeData );
				p_data = helpers::read( p_data, p_size, toolData );
				p_data = helpers::read( p_data, p_size, terrainArray );
				p_data = helpers::read( p_data, p_size, propArray );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
