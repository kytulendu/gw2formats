// File: pf/chunks/MODL/ModelFileCollision.cpp

/*  Copyright (C) 2023 Khralkatorrix <https://github.com/kytulendu>

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

#include <gw2formats/pf/chunks/MODL/ModelFileCollision.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      ModelCollisionKeyFrameV10
			//============================================================================/

			ModelCollisionKeyFrameV10::ModelCollisionKeyFrameV10( )
				: time( 0 ) {
			}

			ModelCollisionKeyFrameV10::ModelCollisionKeyFrameV10( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelCollisionKeyFrameV10::ModelCollisionKeyFrameV10( const ModelCollisionKeyFrameV10& p_other )
				: time( p_other.time )
				, position( p_other.position )
				, orientation( p_other.orientation ) {
			}

			ModelCollisionKeyFrameV10& ModelCollisionKeyFrameV10::operator=( const ModelCollisionKeyFrameV10& p_other ) {
				time = p_other.time;
				position = p_other.position;
				orientation = p_other.orientation;
				return *this;
			}

			const byte* ModelCollisionKeyFrameV10::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, time );
				p_data = helpers::read( p_data, p_size, position );
				p_data = helpers::read( p_data, p_size, orientation );
				return p_data;
			}

			//============================================================================/
			//      ModelCollisionAnimatedObjectV10
			//============================================================================/

			ModelCollisionAnimatedObjectV10::ModelCollisionAnimatedObjectV10( ) {
			}

			ModelCollisionAnimatedObjectV10::ModelCollisionAnimatedObjectV10( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelCollisionAnimatedObjectV10::ModelCollisionAnimatedObjectV10( const ModelCollisionAnimatedObjectV10& p_other )
				: shapeIndices( p_other.shapeIndices )
				, keyFrames( p_other.keyFrames ) {
			}

			ModelCollisionAnimatedObjectV10& ModelCollisionAnimatedObjectV10::operator=( const ModelCollisionAnimatedObjectV10& p_other ) {
				shapeIndices = p_other.shapeIndices;
				keyFrames = p_other.keyFrames;
				return *this;
			}

			const byte* ModelCollisionAnimatedObjectV10::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, shapeIndices );
				p_data = helpers::read( p_data, p_size, keyFrames );
				return p_data;
			}

			//============================================================================/
			//      ModelCollisionAnimationV10
			//============================================================================/

			ModelCollisionAnimationV10::ModelCollisionAnimationV10( ) {
			}

			ModelCollisionAnimationV10::ModelCollisionAnimationV10( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelCollisionAnimationV10::ModelCollisionAnimationV10( const ModelCollisionAnimationV10& p_other )
				: objects( p_other.objects )
				, targetPoints( p_other.targetPoints )  {
			}

			ModelCollisionAnimationV10& ModelCollisionAnimationV10::operator=( const ModelCollisionAnimationV10& p_other ) {
				objects = p_other.objects;
				targetPoints = p_other.targetPoints;
				return *this;
			}

			const byte* ModelCollisionAnimationV10::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, objects );
				p_data = helpers::read( p_data, p_size, targetPoints );
				return p_data;
			}

			//============================================================================/
			//      ModelCollisionMeshV10
			//============================================================================/

			ModelCollisionMeshV10::ModelCollisionMeshV10( ) {
			}

			ModelCollisionMeshV10::ModelCollisionMeshV10( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelCollisionMeshV10::ModelCollisionMeshV10( const ModelCollisionMeshV10& p_other )
				: vertices( p_other.vertices )
				, indices( p_other.indices )
				, surfaces( p_other.surfaces )
				, navSeedPoints( p_other.navSeedPoints ) {
			}

			ModelCollisionMeshV10& ModelCollisionMeshV10::operator=( const ModelCollisionMeshV10& p_other ) {
				vertices = p_other.vertices;
				indices = p_other.indices;
				surfaces = p_other.surfaces;
				navSeedPoints = p_other.navSeedPoints;
				return *this;
			}

			const byte* ModelCollisionMeshV10::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, vertices );
				p_data = helpers::read( p_data, p_size, indices );
				p_data = helpers::read( p_data, p_size, surfaces );
				p_data = helpers::read( p_data, p_size, navSeedPoints );
				return p_data;
			}

			//============================================================================/
			//      ModelCollisionBoxV10
			//============================================================================/

			ModelCollisionBoxV10::ModelCollisionBoxV10( )
				: surface( 0 ) {
			}

			ModelCollisionBoxV10::ModelCollisionBoxV10( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelCollisionBoxV10::ModelCollisionBoxV10( const ModelCollisionBoxV10& p_other )
				: dimensions( p_other.dimensions )
				, position( p_other.position )
				, rotation( p_other.rotation )
				, surface( p_other.surface ) {
			}

			ModelCollisionBoxV10& ModelCollisionBoxV10::operator=( const ModelCollisionBoxV10& p_other ) {
				dimensions = p_other.dimensions;
				position = p_other.position;
				rotation = p_other.rotation;
				surface = p_other.surface;
				return *this;
			}

			const byte* ModelCollisionBoxV10::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, dimensions );
				p_data = helpers::read( p_data, p_size, position );
				p_data = helpers::read( p_data, p_size, rotation );
				p_data = helpers::read( p_data, p_size, surface );
				return p_data;
			}

			//============================================================================/
			//      ModelCollisionSphereV10
			//============================================================================/

			ModelCollisionSphereV10::ModelCollisionSphereV10( )
				: radius( 0 )
				, surface( 0 ) {
			}

			ModelCollisionSphereV10::ModelCollisionSphereV10( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelCollisionSphereV10::ModelCollisionSphereV10( const ModelCollisionSphereV10& p_other )
				: radius( p_other.radius )
				, position( p_other.position )
				, surface( p_other.surface ) {
			}

			ModelCollisionSphereV10& ModelCollisionSphereV10::operator=( const ModelCollisionSphereV10& p_other ) {
				radius = p_other.radius;
				position = p_other.position;
				surface = p_other.surface;
				return *this;
			}

			const byte* ModelCollisionSphereV10::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, radius );
				p_data = helpers::read( p_data, p_size, position );
				p_data = helpers::read( p_data, p_size, surface );
				return p_data;
			}

			//============================================================================/
			//      ModelCollisionCapsuleV10
			//============================================================================/

			ModelCollisionCapsuleV10::ModelCollisionCapsuleV10( )
				: radius( 0 )
				, surface( 0 ) {
			}

			ModelCollisionCapsuleV10::ModelCollisionCapsuleV10( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelCollisionCapsuleV10::ModelCollisionCapsuleV10( const ModelCollisionCapsuleV10& p_other )
				: p0( p_other.p0 )
				, p1( p_other.p1 )
				, radius( p_other.radius )
				, surface( p_other.surface ) {
			}

			ModelCollisionCapsuleV10& ModelCollisionCapsuleV10::operator=( const ModelCollisionCapsuleV10& p_other ) {
				p0 = p_other.p0;
				p1 = p_other.p1;
				radius = p_other.radius;
				surface = p_other.surface;
				return *this;
			}

			const byte* ModelCollisionCapsuleV10::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, p0 );
				p_data = helpers::read( p_data, p_size, p1 );
				p_data = helpers::read( p_data, p_size, radius );
				p_data = helpers::read( p_data, p_size, surface );
				return p_data;
			}

			//============================================================================/
			//      ModelCollisionSurfaceV10
			//============================================================================/

			ModelCollisionSurfaceV10::ModelCollisionSurfaceV10( ) {
			}

			ModelCollisionSurfaceV10::ModelCollisionSurfaceV10( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelCollisionSurfaceV10::ModelCollisionSurfaceV10( const ModelCollisionSurfaceV10& p_other )
				: tokens( p_other.tokens ) {
			}

			ModelCollisionSurfaceV10& ModelCollisionSurfaceV10::operator=( const ModelCollisionSurfaceV10& p_other ) {
				tokens = p_other.tokens;
				return *this;
			}

			const byte* ModelCollisionSurfaceV10::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, tokens );
				return p_data;
			}

			//============================================================================/
			//      ModelFileCollisionV10
			//============================================================================/

			ModelFileCollisionV10::ModelFileCollisionV10( ) {
			}

			ModelFileCollisionV10::ModelFileCollisionV10( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelFileCollisionV10::ModelFileCollisionV10( const ModelFileCollisionV10& p_other )
				: animations( p_other.animations )
				, meshes( p_other.meshes )
				, boxes( p_other.boxes )
				, spheres( p_other.spheres )
				, capsules( p_other.capsules )
				, surfaces( p_other.surfaces ) {
			}

			ModelFileCollisionV10& ModelFileCollisionV10::operator=( const ModelFileCollisionV10& p_other ) {
				animations = p_other.animations;
				meshes = p_other.meshes;
				boxes = p_other.boxes;
				spheres = p_other.spheres;
				capsules = p_other.capsules;
				surfaces = p_other.surfaces;
				return *this;
			}

			const byte* ModelFileCollisionV10::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, animations );
				p_data = helpers::read( p_data, p_size, meshes );
				p_data = helpers::read( p_data, p_size, boxes );
				p_data = helpers::read( p_data, p_size, spheres );
				p_data = helpers::read( p_data, p_size, capsules );
				p_data = helpers::read( p_data, p_size, surfaces );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
