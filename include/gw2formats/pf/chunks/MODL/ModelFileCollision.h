// File: gw2formats/pf/chunks/MODL/ModelFileCollision.h

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

// Filetype: MODL
// Chunktype: COLL

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_MODL_MODELFILECOLLISION_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_MODL_MODELFILECOLLISION_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/FileName.h>
#include <gw2formats/pf/helpers/Ptr.h>
#include <gw2formats/pf/helpers/String.h>
#include <gw2formats/pf/helpers/Vector.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			GW2FORMATS_API struct ModelCollisionKeyFrameV10 {
				float time;
				float3 position;
				float4 orientation;
			public:
				ModelCollisionKeyFrameV10( );
				ModelCollisionKeyFrameV10( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelCollisionKeyFrameV10( const ModelCollisionKeyFrameV10& p_other );
				ModelCollisionKeyFrameV10& operator=( const ModelCollisionKeyFrameV10& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelCollisionAnimatedObjectV10 {
				helpers::Array<dword> shapeIndices;
				helpers::Array<ModelCollisionKeyFrameV10> keyFrames;
			public:
				ModelCollisionAnimatedObjectV10( );
				ModelCollisionAnimatedObjectV10( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelCollisionAnimatedObjectV10( const ModelCollisionAnimatedObjectV10& p_other );
				ModelCollisionAnimatedObjectV10& operator=( const ModelCollisionAnimatedObjectV10& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelCollisionAnimationV10 {
				helpers::Array<ModelCollisionAnimatedObjectV10> objects;
				helpers::Array<float3> targetPoints;
			public:
				ModelCollisionAnimationV10( );
				ModelCollisionAnimationV10( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelCollisionAnimationV10( const ModelCollisionAnimationV10& p_other );
				ModelCollisionAnimationV10& operator=( const ModelCollisionAnimationV10& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelCollisionMeshV10 {
				helpers::Array<float3> vertices;
				helpers::Array<word> indices;
				helpers::Array<byte> surfaces;
				helpers::Array<float3> navSeedPoints;
			public:
				ModelCollisionMeshV10( );
				ModelCollisionMeshV10( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelCollisionMeshV10( const ModelCollisionMeshV10& p_other );
				ModelCollisionMeshV10& operator=( const ModelCollisionMeshV10& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelCollisionBoxV10 {
				float3 dimensions;
				float3 position;
				float4 rotation;
				byte surface;
			public:
				ModelCollisionBoxV10( );
				ModelCollisionBoxV10( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelCollisionBoxV10( const ModelCollisionBoxV10& p_other );
				ModelCollisionBoxV10& operator=( const ModelCollisionBoxV10& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelCollisionSphereV10 {
				float radius;
				float3 position;
				byte surface;
			public:
				ModelCollisionSphereV10( );
				ModelCollisionSphereV10( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelCollisionSphereV10( const ModelCollisionSphereV10& p_other );
				ModelCollisionSphereV10& operator=( const ModelCollisionSphereV10& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelCollisionCapsuleV10 {
				float3 p0;
				float3 p1;
				float radius;
				byte surface;
			public:
				ModelCollisionCapsuleV10( );
				ModelCollisionCapsuleV10( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelCollisionCapsuleV10( const ModelCollisionCapsuleV10& p_other );
				ModelCollisionCapsuleV10& operator=( const ModelCollisionCapsuleV10& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelCollisionSurfaceV10 {
				helpers::Array<qword> tokens;
			public:
				ModelCollisionSurfaceV10( );
				ModelCollisionSurfaceV10( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelCollisionSurfaceV10( const ModelCollisionSurfaceV10& p_other );
				ModelCollisionSurfaceV10& operator=( const ModelCollisionSurfaceV10& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelFileCollisionV10 {
				helpers::Array<ModelCollisionAnimationV10> animations;
				helpers::Array<ModelCollisionMeshV10> meshes;
				helpers::Array<ModelCollisionBoxV10> boxes;
				helpers::Array<ModelCollisionSphereV10> spheres;
				helpers::Array<ModelCollisionCapsuleV10> capsules;
				helpers::Array<ModelCollisionSurfaceV10> surfaces;
			public:
				ModelFileCollisionV10( );
				ModelFileCollisionV10( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelFileCollisionV10( const ModelFileCollisionV10& p_other );
				ModelFileCollisionV10& operator=( const ModelFileCollisionV10& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef ModelFileCollisionV10 ModelFileCollision;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::MODL, fcc::COLL> { typedef chunks::ModelFileCollision Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_MODL_MODELFILECOLLISION_H_INCLUDED
