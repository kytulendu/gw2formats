// File: pf/chunks/mapc/PackMapZones.cpp

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

#include <gw2formats/pf/chunks/mapc/PackMapZones.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      PackMapZoneModelV23
			//============================================================================/

			PackMapZoneModelV23::PackMapZoneModelV23( )
				: probability( 0 )
				, flags( 0 )
				, zOffsets{}
				, permutation( 0 ) {
			}

			PackMapZoneModelV23::PackMapZoneModelV23( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapZoneModelV23::PackMapZoneModelV23( const PackMapZoneModelV23& p_other )
				: filename( p_other.filename )
				, probability( p_other.probability )
				, flags( p_other.flags )
				, hslOffset( p_other.hslOffset )
				, permutation( p_other.permutation ) {
				std::copy( p_other.zOffsets, p_other.zOffsets + 2, zOffsets );
			}

			PackMapZoneModelV23& PackMapZoneModelV23::operator=( const PackMapZoneModelV23& p_other ) {
				filename = p_other.filename;
				probability = p_other.probability;
				flags = p_other.flags;
				hslOffset = p_other.hslOffset;
				permutation = p_other.permutation;
				std::copy( p_other.zOffsets, p_other.zOffsets + 2, zOffsets );
				return *this;
			}

			const byte* PackMapZoneModelV23::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, filename );
				p_data = helpers::read( p_data, p_size, probability );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, hslOffset );
				p_data = helpers::read( p_data, p_size, zOffsets );
				p_data = helpers::read( p_data, p_size, permutation );
				return p_data;
			}

			//============================================================================/
			//      PackMapZoneLayerDefV23
			//============================================================================/

			PackMapZoneLayerDefV23::PackMapZoneLayerDefV23( )
				: type( 0 )
				, height( 0 )
				, width( 0 )
				, radiusGround( 0 )
				, sortGroup( 0 )
				, tiling( 0 )
				, probability( 0 )
				, instanceScaleJitter( 0 )
				, noise( 0 )
				, layerFlags( 0 ) {
			}

			PackMapZoneLayerDefV23::PackMapZoneLayerDefV23( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapZoneLayerDefV23::PackMapZoneLayerDefV23( const PackMapZoneLayerDefV23& p_other )
				: type( p_other.type )
				, height( p_other.height )
				, width( p_other.width )
				, radiusGround( p_other.radiusGround )
				, sortGroup( p_other.sortGroup )
				, tiling( p_other.tiling )
				, scaleRange( p_other.scaleRange )
				, probability( p_other.probability )
				, fadeRange( p_other.fadeRange )
				, instanceScaleJitter( p_other.instanceScaleJitter )
				, noise( p_other.noise )
				, layerFlags( p_other.layerFlags )
				, materialname( p_other.materialname )
				, modelArray( p_other.modelArray )
				, subModel( p_other.subModel )
				, reserved( p_other.reserved ) {
				std::copy( p_other.rotRange, p_other.rotRange + 3, rotRange );
				std::copy( p_other.hslRanges, p_other.hslRanges + 4, hslRanges );
			}

			PackMapZoneLayerDefV23& PackMapZoneLayerDefV23::operator=( const PackMapZoneLayerDefV23& p_other ) {
				type = p_other.type;
				height = p_other.height;
				width = p_other.width;
				radiusGround = p_other.radiusGround;
				sortGroup = p_other.sortGroup;
				tiling = p_other.tiling;
				scaleRange = p_other.scaleRange;
				probability = p_other.probability;
				fadeRange = p_other.fadeRange;
				instanceScaleJitter = p_other.instanceScaleJitter;
				noise = p_other.noise;
				layerFlags = p_other.layerFlags;
				materialname = p_other.materialname;
				modelArray = p_other.modelArray;
				subModel = p_other.subModel;
				reserved = p_other.reserved;
				std::copy( p_other.rotRange, p_other.rotRange + 3, rotRange );
				std::copy( p_other.hslRanges, p_other.hslRanges + 4, hslRanges );
				return *this;
			}

			const byte* PackMapZoneLayerDefV23::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, type );
				p_data = helpers::read( p_data, p_size, height );
				p_data = helpers::read( p_data, p_size, width );
				p_data = helpers::read( p_data, p_size, radiusGround );
				p_data = helpers::read( p_data, p_size, sortGroup );
				p_data = helpers::read( p_data, p_size, tiling );
				p_data = helpers::read( p_data, p_size, scaleRange );
				p_data = helpers::read( p_data, p_size, probability );
				p_data = helpers::read( p_data, p_size, fadeRange );
				p_data = helpers::read( p_data, p_size, rotRange );
				p_data = helpers::read( p_data, p_size, hslRanges );
				p_data = helpers::read( p_data, p_size, instanceScaleJitter );
				p_data = helpers::read( p_data, p_size, noise );
				p_data = helpers::read( p_data, p_size, layerFlags );
				p_data = helpers::read( p_data, p_size, materialname );
				p_data = helpers::read( p_data, p_size, modelArray );
				p_data = helpers::read( p_data, p_size, subModel );
				p_data = helpers::read( p_data, p_size, reserved );
				return p_data;
			}

			//============================================================================/
			//      PackMapZonePageV11
			//============================================================================/

			PackMapZonePageV11::PackMapZonePageV11( )
				: seed( 0 ) {
			}

			PackMapZonePageV11::PackMapZonePageV11( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapZonePageV11::PackMapZonePageV11( const PackMapZonePageV11& p_other )
				: flags( p_other.flags )
				, chunkCoord( p_other.chunkCoord )
				, seed( p_other.seed )
				, paintFlags( p_other.paintFlags )
				, string( p_other.string ) {
			}

			PackMapZonePageV11& PackMapZonePageV11::operator=( const PackMapZonePageV11& p_other ) {
				flags = p_other.flags;
				chunkCoord = p_other.chunkCoord;
				seed = p_other.seed;
				paintFlags = p_other.paintFlags;
				string = p_other.string;
				return *this;
			}

			const byte* PackMapZonePageV11::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, chunkCoord );
				p_data = helpers::read( p_data, p_size, seed );
				p_data = helpers::read( p_data, p_size, paintFlags );
				p_data = helpers::read( p_data, p_size, string );
				return p_data;
			}

			//============================================================================/
			//      PackMapZonePageTableV11
			//============================================================================/

			PackMapZonePageTableV11::PackMapZonePageTableV11( )
				: flags( 0 ) {
			}

			PackMapZonePageTableV11::PackMapZonePageTableV11( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapZonePageTableV11::PackMapZonePageTableV11( const PackMapZonePageTableV11& p_other )
				: pageArray( p_other.pageArray )
				, flags( p_other.flags ) {
			}

			PackMapZonePageTableV11& PackMapZonePageTableV11::operator=( const PackMapZonePageTableV11& p_other ) {
				pageArray = p_other.pageArray;
				flags = p_other.flags;
				return *this;
			}

			const byte* PackMapZonePageTableV11::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, pageArray );
				p_data = helpers::read( p_data, p_size, flags );
				return p_data;
			}

			//============================================================================/
			//      PackMapZoneDefV23
			//============================================================================/

			PackMapZoneDefV23::PackMapZoneDefV23( )
				: token( 0 )
				, timeStamp( 0 ) {
			}

			PackMapZoneDefV23::PackMapZoneDefV23( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapZoneDefV23::PackMapZoneDefV23( const PackMapZoneDefV23& p_other )
				: defFilename( p_other.defFilename )
				, token( p_other.token )
				, layerDefArray( p_other.layerDefArray )
				, timeStamp( p_other.timeStamp )
				, pageTable( p_other.pageTable )
				, reserved( p_other.reserved ) {
			}

			PackMapZoneDefV23& PackMapZoneDefV23::operator=( const PackMapZoneDefV23& p_other ) {
				defFilename = p_other.defFilename;
				token = p_other.token;
				layerDefArray = p_other.layerDefArray;
				timeStamp = p_other.timeStamp;
				pageTable = p_other.pageTable;
				reserved = p_other.reserved;
				return *this;
			}

			const byte* PackMapZoneDefV23::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, defFilename );
				p_data = helpers::read( p_data, p_size, token );
				p_data = helpers::read( p_data, p_size, layerDefArray );
				p_data = helpers::read( p_data, p_size, timeStamp );
				p_data = helpers::read( p_data, p_size, pageTable );
				p_data = helpers::read( p_data, p_size, reserved );
				return p_data;
			}

			//============================================================================/
			//      PackMapZoneEncodingDataV23
			//============================================================================/

			PackMapZoneEncodingDataV23::PackMapZoneEncodingDataV23( )
				: index( 0 )
				, offset( 0 ) {
			}

			PackMapZoneEncodingDataV23::PackMapZoneEncodingDataV23( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapZoneEncodingDataV23::PackMapZoneEncodingDataV23( const PackMapZoneEncodingDataV23& p_other )
				: index( p_other.index )
				, offset( p_other.offset ) {
			}

			PackMapZoneEncodingDataV23& PackMapZoneEncodingDataV23::operator=( const PackMapZoneEncodingDataV23& p_other ) {
				index = p_other.index;
				offset = p_other.offset;
				return *this;
			}

			const byte* PackMapZoneEncodingDataV23::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, index );
				p_data = helpers::read( p_data, p_size, offset );
				return p_data;
			}

			//============================================================================/
			//      PackMapZoneCollideDataV23
			//============================================================================/

			PackMapZoneCollideDataV23::PackMapZoneCollideDataV23( )
				: normalX( 0 )
				, normalY( 0 )
				, zPos( 0 ) {
			}

			PackMapZoneCollideDataV23::PackMapZoneCollideDataV23( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapZoneCollideDataV23::PackMapZoneCollideDataV23( const PackMapZoneCollideDataV23& p_other )
				: normalX( p_other.normalX )
				, normalY( p_other.normalY )
				, zPos( p_other.zPos ) {
			}

			PackMapZoneCollideDataV23& PackMapZoneCollideDataV23::operator=( const PackMapZoneCollideDataV23& p_other ) {
				normalX = p_other.normalX;
				normalY = p_other.normalY;
				zPos = p_other.zPos;
				return *this;
			}

			const byte* PackMapZoneCollideDataV23::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, normalX );
				p_data = helpers::read( p_data, p_size, normalY );
				p_data = helpers::read( p_data, p_size, zPos );
				return p_data;
			}

			//============================================================================/
			//      PackMapZoneV23
			//============================================================================/

			PackMapZoneV23::PackMapZoneV23( )
				: zoneFlags( 0 )
				, waterHeight( 0 )
				, seed( 0 )
				, defToken( 0 )
				, zPos( 0 )
				, broadId( 0 ) {
			}

			PackMapZoneV23::PackMapZoneV23( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapZoneV23::PackMapZoneV23( const PackMapZoneV23& p_other )
				: zoneFlags( p_other.zoneFlags )
				, vertRect( p_other.vertRect )
				, waterHeight( p_other.waterHeight )
				, seed( p_other.seed )
				, defToken( p_other.defToken )
				, range( p_other.range )
				, zPos( p_other.zPos )
				, flags( p_other.flags )
				, encodeData( p_other.encodeData )
				, collideData( p_other.collideData )
				, offsetData( p_other.offsetData )
				, vertices( p_other.vertices )
				, broadId( p_other.broadId )
				, reserved( p_other.reserved ) {
			}

			PackMapZoneV23& PackMapZoneV23::operator=( const PackMapZoneV23& p_other ) {
				zoneFlags = p_other.zoneFlags;
				vertRect = p_other.vertRect;
				waterHeight = p_other.waterHeight;
				seed = p_other.seed;
				defToken = p_other.defToken;
				range = p_other.range;
				zPos = p_other.zPos;
				flags = p_other.flags;
				encodeData = p_other.encodeData;
				collideData = p_other.collideData;
				offsetData = p_other.offsetData;
				vertices = p_other.vertices;
				broadId = p_other.broadId;
				reserved = p_other.reserved;
				return *this;
			}

			const byte* PackMapZoneV23::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, zoneFlags );
				p_data = helpers::read( p_data, p_size, vertRect );
				p_data = helpers::read( p_data, p_size, waterHeight );
				p_data = helpers::read( p_data, p_size, seed );
				p_data = helpers::read( p_data, p_size, defToken );
				p_data = helpers::read( p_data, p_size, range );
				p_data = helpers::read( p_data, p_size, zPos );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, encodeData );
				p_data = helpers::read( p_data, p_size, collideData );
				p_data = helpers::read( p_data, p_size, offsetData );
				p_data = helpers::read( p_data, p_size, vertices );
				p_data = helpers::read( p_data, p_size, broadId );
				p_data = helpers::read( p_data, p_size, reserved );
				return p_data;
			}

			//============================================================================/
			//      PackMapZonesV23
			//============================================================================/

			PackMapZonesV23::PackMapZonesV23( )
				: maxBroadId( 0 ) {
			}

			PackMapZonesV23::PackMapZonesV23( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapZonesV23::PackMapZonesV23( const PackMapZonesV23& p_other )
				: zoneDefArray( p_other.zoneDefArray )
				, zoneArray( p_other.zoneArray )
				, broadPhase( p_other.broadPhase )
				, maxBroadId( p_other.maxBroadId )
				, string( p_other.string ) {
			}

			PackMapZonesV23& PackMapZonesV23::operator=( const PackMapZonesV23& p_other ) {
				zoneDefArray = p_other.zoneDefArray;
				zoneArray = p_other.zoneArray;
				broadPhase = p_other.broadPhase;
				maxBroadId = p_other.maxBroadId;
				string = p_other.string;
				return *this;
			}

			const byte* PackMapZonesV23::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, zoneDefArray );
				p_data = helpers::read( p_data, p_size, zoneArray );
				p_data = helpers::read( p_data, p_size, broadPhase );
				p_data = helpers::read( p_data, p_size, maxBroadId );
				p_data = helpers::read( p_data, p_size, string );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
