// File: pf/chunks/mapc/PackMapRivers.cpp

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

#include <gw2formats/pf/chunks/mapc/PackMapRivers.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      MapRiverTextureMapV4
			//============================================================================/

			MapRiverTextureMapV4::MapRiverTextureMapV4( )
				: scale( 0 )
				, speedX( 0 )
				, speedY( 0 )
				, tiling( 0 )
				, flags( 0 )
				, uvIndex( 0 ) {
			}

			MapRiverTextureMapV4::MapRiverTextureMapV4( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MapRiverTextureMapV4::MapRiverTextureMapV4( const MapRiverTextureMapV4& p_other )
				: scale( p_other.scale )
				, speedX( p_other.speedX )
				, speedY( p_other.speedY )
				, tiling( p_other.tiling )
				, flags( p_other.flags )
				, uvIndex( p_other.uvIndex ) {
			}

			MapRiverTextureMapV4& MapRiverTextureMapV4::operator=( const MapRiverTextureMapV4& p_other ) {
				scale = p_other.scale;
				speedX = p_other.speedX;
				speedY = p_other.speedY;
				tiling = p_other.tiling;
				flags = p_other.flags;
				uvIndex = p_other.uvIndex;
				return *this;
			}

			const byte* MapRiverTextureMapV4::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, scale );
				p_data = helpers::read( p_data, p_size, speedX );
				p_data = helpers::read( p_data, p_size, speedY );
				p_data = helpers::read( p_data, p_size, tiling );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, uvIndex );
				return p_data;
			}

			//============================================================================/
			//      MapRiverMaterialV4
			//============================================================================/

			MapRiverMaterialV4::MapRiverMaterialV4( )
				: flags( 0 ) {
			}

			MapRiverMaterialV4::MapRiverMaterialV4( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MapRiverMaterialV4::MapRiverMaterialV4( const MapRiverMaterialV4& p_other )
				: materialFile( p_other.materialFile )
				, textureFiles( p_other.textureFiles )
				, constantTokens( p_other.constantTokens )
				, constantValues( p_other.constantValues )
				, textureMaps( p_other.textureMaps )
				, flags( p_other.flags ) {
			}

			MapRiverMaterialV4& MapRiverMaterialV4::operator=( const MapRiverMaterialV4& p_other ) {
				materialFile = p_other.materialFile;
				textureFiles = p_other.textureFiles;
				constantTokens = p_other.constantTokens;
				constantValues = p_other.constantValues;
				textureMaps = p_other.textureMaps;
				flags = p_other.flags;
				return *this;
			}

			const byte* MapRiverMaterialV4::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, materialFile );
				p_data = helpers::read( p_data, p_size, textureFiles );
				p_data = helpers::read( p_data, p_size, constantTokens );
				p_data = helpers::read( p_data, p_size, constantValues );
				p_data = helpers::read( p_data, p_size, textureMaps );
				p_data = helpers::read( p_data, p_size, flags );
				return p_data;
			}

			//============================================================================/
			//      MapRiverReachV4
			//============================================================================/

			MapRiverReachV4::MapRiverReachV4( )
				: width( 0 )
				, curveLength( 0 )
				, curvePercent( 0 )
				, xTessellation( 0 )
				, broadId( 0 )
				, fvf( 0 )
				, flags( 0 ) {
			}

			MapRiverReachV4::MapRiverReachV4( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MapRiverReachV4::MapRiverReachV4( const MapRiverReachV4& p_other )
				: width( p_other.width )
				, curveLength( p_other.curveLength )
				, curvePercent( p_other.curvePercent )
				, xTessellation( p_other.xTessellation )
				, yTessellation( p_other.yTessellation )
				, broadId( p_other.broadId )
				, fvf( p_other.fvf )
				, flags( p_other.flags )
				, materials( p_other.materials )
				, reserved( p_other.reserved ) {
			}

			MapRiverReachV4& MapRiverReachV4::operator=( const MapRiverReachV4& p_other ) {
				width = p_other.width;
				curveLength = p_other.curveLength;
				curvePercent = p_other.curvePercent;
				xTessellation = p_other.xTessellation;
				yTessellation = p_other.yTessellation;
				broadId = p_other.broadId;
				fvf = p_other.fvf;
				flags = p_other.flags;
				materials = p_other.materials;
				reserved = p_other.reserved;
				return *this;
			}

			const byte* MapRiverReachV4::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, width );
				p_data = helpers::read( p_data, p_size, curveLength );
				p_data = helpers::read( p_data, p_size, curvePercent );
				p_data = helpers::read( p_data, p_size, xTessellation );
				p_data = helpers::read( p_data, p_size, yTessellation );
				p_data = helpers::read( p_data, p_size, broadId );
				p_data = helpers::read( p_data, p_size, fvf );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, materials );
				p_data = helpers::read( p_data, p_size, reserved );
				return p_data;
			}

			//============================================================================/
			//      MapRiverV4
			//============================================================================/

			MapRiverV4::MapRiverV4( )
				: guid( 0 )
				, xTiling( 0 )
				, flags( 0 ) {
			}

			MapRiverV4::MapRiverV4( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MapRiverV4::MapRiverV4( const MapRiverV4& p_other )
				: guid( p_other.guid )
				, name( p_other.name )
				, xTiling( p_other.xTiling )
				, points( p_other.points )
				, reaches( p_other.reaches )
				, flags( p_other.flags ) {
			}

			MapRiverV4& MapRiverV4::operator=( const MapRiverV4& p_other ) {
				guid = p_other.guid;
				name = p_other.name;
				xTiling = p_other.xTiling;
				points = p_other.points;
				reaches = p_other.reaches;
				flags = p_other.flags;
				return *this;
			}

			const byte* MapRiverV4::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, guid );
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, xTiling );
				p_data = helpers::read( p_data, p_size, points );
				p_data = helpers::read( p_data, p_size, reaches );
				p_data = helpers::read( p_data, p_size, flags );
				return p_data;
			}

			//============================================================================/
			//      PackMapRiversV4
			//============================================================================/

			PackMapRiversV4::PackMapRiversV4( )
				: flags( 0 )
				, nextBroadId( 0 ) {
			}

			PackMapRiversV4::PackMapRiversV4( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapRiversV4::PackMapRiversV4( const PackMapRiversV4& p_other )
				: flags( p_other.flags )
				, nextBroadId( p_other.nextBroadId )
				, rivers( p_other.rivers )
				, broadPhase( p_other.broadPhase ) {
			}

			PackMapRiversV4& PackMapRiversV4::operator=( const PackMapRiversV4& p_other ) {
				flags = p_other.flags;
				nextBroadId = p_other.nextBroadId;
				rivers = p_other.rivers;
				broadPhase = p_other.broadPhase;
				return *this;
			}

			const byte* PackMapRiversV4::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, nextBroadId );
				p_data = helpers::read( p_data, p_size, rivers );
				p_data = helpers::read( p_data, p_size, broadPhase );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
