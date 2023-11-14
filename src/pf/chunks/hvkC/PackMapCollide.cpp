// File: pf/chunks/hvkC/PackMapCollide.cpp

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

#include <gw2formats/pf/chunks/hvkC/PackMapCollide.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      PackMoppType
			//============================================================================/

			PackMoppType::PackMoppType( ) {
			}

			PackMoppType::PackMoppType( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMoppType::PackMoppType( const PackMoppType& p_other )
				: moppData( p_other.moppData ) {
			}

			PackMoppType& PackMoppType::operator=( const PackMoppType& p_other ) {
				moppData = p_other.moppData;
				return *this;
			}

			const byte* PackMoppType::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, moppData );
				return p_data;
			}

			//============================================================================/
			//      PackMapCollideCollisionV16
			//============================================================================/

			PackMapCollideCollisionV16::PackMapCollideCollisionV16( ) {
			}

			PackMapCollideCollisionV16::PackMapCollideCollisionV16( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapCollideCollisionV16::PackMapCollideCollisionV16( const PackMapCollideCollisionV16& p_other )
				: indices( p_other.indices )
				, vertices( p_other.vertices )
				, surfaces( p_other.surfaces )
				, moppCodeData( p_other.moppCodeData ) {
			}

			PackMapCollideCollisionV16& PackMapCollideCollisionV16::operator=( const PackMapCollideCollisionV16& p_other ) {
				indices = p_other.indices;
				vertices = p_other.vertices;
				surfaces = p_other.surfaces;
				moppCodeData = p_other.moppCodeData;
				return *this;
			}

			const byte* PackMapCollideCollisionV16::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, indices );
				p_data = helpers::read( p_data, p_size, vertices );
				p_data = helpers::read( p_data, p_size, surfaces );
				p_data = helpers::read( p_data, p_size, moppCodeData );
				return p_data;
			}

			//============================================================================/
			//      PackMapCollideBlockerV16
			//============================================================================/

			PackMapCollideBlockerV16::PackMapCollideBlockerV16( ) {
			}

			PackMapCollideBlockerV16::PackMapCollideBlockerV16( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapCollideBlockerV16::PackMapCollideBlockerV16( const PackMapCollideBlockerV16& p_other )
				: vertices( p_other.vertices ) {
			}

			PackMapCollideBlockerV16& PackMapCollideBlockerV16::operator=( const PackMapCollideBlockerV16& p_other ) {
				vertices = p_other.vertices;
				return *this;
			}

			const byte* PackMapCollideBlockerV16::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, vertices );
				return p_data;
			}

			//============================================================================/
			//      PackMapCollideAnimationV16
			//============================================================================/

			PackMapCollideAnimationV16::PackMapCollideAnimationV16( )
				: sequence( 0 ) {
			}

			PackMapCollideAnimationV16::PackMapCollideAnimationV16( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapCollideAnimationV16::PackMapCollideAnimationV16( const PackMapCollideAnimationV16& p_other )
				: sequence( p_other.sequence )
				, collisionIndices( p_other.collisionIndices )
				, blockerIndices( p_other.blockerIndices ) {
			}

			PackMapCollideAnimationV16& PackMapCollideAnimationV16::operator=( const PackMapCollideAnimationV16& p_other ) {
				sequence = p_other.sequence;
				collisionIndices = p_other.collisionIndices;
				blockerIndices = p_other.blockerIndices;
				return *this;
			}

			const byte* PackMapCollideAnimationV16::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, sequence );
				p_data = helpers::read( p_data, p_size, collisionIndices );
				p_data = helpers::read( p_data, p_size, blockerIndices );
				return p_data;
			}

			//============================================================================/
			//      PackMapCollideGeometryV16
			//============================================================================/

			PackMapCollideGeometryV16::PackMapCollideGeometryV16( )
				: quantizedExtents( 0 )
				, navMeshIndex( 0 ) {
			}

			PackMapCollideGeometryV16::PackMapCollideGeometryV16( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapCollideGeometryV16::PackMapCollideGeometryV16( const PackMapCollideGeometryV16& p_other )
				: quantizedExtents( p_other.quantizedExtents )
				, animations( p_other.animations )
				, navMeshIndex( p_other.navMeshIndex ) {
			}

			PackMapCollideGeometryV16& PackMapCollideGeometryV16::operator=( const PackMapCollideGeometryV16& p_other ) {
				quantizedExtents = p_other.quantizedExtents;
				animations = p_other.animations;
				navMeshIndex = p_other.navMeshIndex;
				return *this;
			}

			const byte* PackMapCollideGeometryV16::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, quantizedExtents );
				p_data = helpers::read( p_data, p_size, animations );
				p_data = helpers::read( p_data, p_size, navMeshIndex );
				return p_data;
			}

			//============================================================================/
			//      PackMapCollideModelObsV16
			//============================================================================/

			PackMapCollideModelObsV16::PackMapCollideModelObsV16( )
				: geometryIndex( 0 ) {
			}

			PackMapCollideModelObsV16::PackMapCollideModelObsV16( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapCollideModelObsV16::PackMapCollideModelObsV16( const PackMapCollideModelObsV16& p_other )
				: translate( p_other.translate )
				, geometryIndex( p_other.geometryIndex ) {
			}

			PackMapCollideModelObsV16& PackMapCollideModelObsV16::operator=( const PackMapCollideModelObsV16& p_other ) {
				translate = p_other.translate;
				geometryIndex = p_other.geometryIndex;
				return *this;
			}

			const byte* PackMapCollideModelObsV16::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, translate );
				p_data = helpers::read( p_data, p_size, geometryIndex );
				return p_data;
			}

			//============================================================================/
			//      PackMapCollideModelPropV16
			//============================================================================/

			PackMapCollideModelPropV16::PackMapCollideModelPropV16( )
				: token( 0 )
				, sequence( 0 )
				, scale( 0 )
				, geometryIndex( 0 ) {
			}

			PackMapCollideModelPropV16::PackMapCollideModelPropV16( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapCollideModelPropV16::PackMapCollideModelPropV16( const PackMapCollideModelPropV16& p_other )
				: token( p_other.token )
				, sequence( p_other.sequence )
				, scale( p_other.scale )
				, translate( p_other.translate )
				, rotate( p_other.rotate )
				, geometryIndex( p_other.geometryIndex ) {
			}

			PackMapCollideModelPropV16& PackMapCollideModelPropV16::operator=( const PackMapCollideModelPropV16& p_other ) {
				token = p_other.token;
				sequence = p_other.sequence;
				scale = p_other.scale;
				translate = p_other.translate;
				rotate = p_other.rotate;
				geometryIndex = p_other.geometryIndex;
				return *this;
			}

			const byte* PackMapCollideModelPropV16::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, token );
				p_data = helpers::read( p_data, p_size, sequence );
				p_data = helpers::read( p_data, p_size, scale );
				p_data = helpers::read( p_data, p_size, translate );
				p_data = helpers::read( p_data, p_size, rotate );
				p_data = helpers::read( p_data, p_size, geometryIndex );
				return p_data;
			}

			//============================================================================/
			//      PackMapCollideModelZoneV16
			//============================================================================/

			PackMapCollideModelZoneV16::PackMapCollideModelZoneV16( )
				: scale( 0 )
				, geometryIndex( 0 ) {
			}

			PackMapCollideModelZoneV16::PackMapCollideModelZoneV16( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapCollideModelZoneV16::PackMapCollideModelZoneV16( const PackMapCollideModelZoneV16& p_other )
				: scale( p_other.scale )
				, translate( p_other.translate )
				, rotate( p_other.rotate )
				, geometryIndex( p_other.geometryIndex ) {
			}

			PackMapCollideModelZoneV16& PackMapCollideModelZoneV16::operator=( const PackMapCollideModelZoneV16& p_other ) {
				scale = p_other.scale;
				translate = p_other.translate;
				rotate = p_other.rotate;
				geometryIndex = p_other.geometryIndex;
				return *this;
			}

			const byte* PackMapCollideModelZoneV16::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, scale );
				p_data = helpers::read( p_data, p_size, translate );
				p_data = helpers::read( p_data, p_size, rotate );
				p_data = helpers::read( p_data, p_size, geometryIndex );
				return p_data;
			}

			//============================================================================/
			//      PackMapCollideWaterVolumeV16
			//============================================================================/

			PackMapCollideWaterVolumeV16::PackMapCollideWaterVolumeV16()
				: guid(0)
				, flags(0) {
			}

			PackMapCollideWaterVolumeV16::PackMapCollideWaterVolumeV16(const byte* p_data, size_t p_size, const byte** po_pointer) {
				auto pointer = assign(p_data, p_size);
				if (po_pointer) { *po_pointer = pointer; }
			}

			PackMapCollideWaterVolumeV16::PackMapCollideWaterVolumeV16(const PackMapCollideWaterVolumeV16& p_other)
				: guid(p_other.guid)
				, name(p_other.name)
				, flags(p_other.flags)
				, verticalRange(p_other.verticalRange)
				, vertices(p_other.vertices) {
			}

			PackMapCollideWaterVolumeV16& PackMapCollideWaterVolumeV16::operator=(const PackMapCollideWaterVolumeV16& p_other) {
				guid = p_other.guid;
				name = p_other.name;
				flags = p_other.flags;
				verticalRange = p_other.verticalRange;
				vertices = p_other.vertices;
				return *this;
			}

			const byte* PackMapCollideWaterVolumeV16::assign(const byte* p_data, size_t p_size) {
				p_data = helpers::read(p_data, p_size, guid);
				p_data = helpers::read(p_data, p_size, name);
				p_data = helpers::read(p_data, p_size, flags);
				p_data = helpers::read(p_data, p_size, verticalRange);
				p_data = helpers::read(p_data, p_size, vertices);
				return p_data;
			}

			//============================================================================/
			//      PackMapCollideV16
			//============================================================================/

			PackMapCollideV16::PackMapCollideV16( ) {
			}

			PackMapCollideV16::PackMapCollideV16( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapCollideV16::PackMapCollideV16( const PackMapCollideV16& p_other )
				: boundsMin( p_other.boundsMin )
				, boundsMax( p_other.boundsMax )
				, flags( p_other.flags )
				, waterSurfaceZ( p_other.waterSurfaceZ )
				, collisions( p_other.collisions )
				, blockers( p_other.blockers )
				, animations( p_other.animations )
				, geometries( p_other.geometries )
				, obsModels( p_other.obsModels )
				, propModels( p_other.propModels )
				, zoneModels( p_other.zoneModels )
				, waterVolumes( p_other.waterVolumes) {
			}

			PackMapCollideV16& PackMapCollideV16::operator=( const PackMapCollideV16& p_other ) {
				boundsMin = p_other.boundsMin;
				boundsMax = p_other.boundsMax;
				flags = p_other.flags;
				waterSurfaceZ = p_other.waterSurfaceZ;
				collisions = p_other.collisions;
				blockers = p_other.blockers;
				animations = p_other.animations;
				geometries = p_other.geometries;
				obsModels = p_other.obsModels;
				propModels = p_other.propModels;
				zoneModels = p_other.zoneModels;
				waterVolumes = p_other.waterVolumes;
				return *this;
			}

			const byte* PackMapCollideV16::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, boundsMin );
				p_data = helpers::read( p_data, p_size, boundsMax );
				p_data = helpers::read (p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, waterSurfaceZ);
				p_data = helpers::read( p_data, p_size, collisions );
				p_data = helpers::read( p_data, p_size, blockers );
				p_data = helpers::read( p_data, p_size, animations );
				p_data = helpers::read( p_data, p_size, geometries );
				p_data = helpers::read( p_data, p_size, obsModels );
				p_data = helpers::read( p_data, p_size, propModels );
				p_data = helpers::read( p_data, p_size, zoneModels );
				p_data = helpers::read( p_data, p_size, waterVolumes );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
