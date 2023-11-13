// File: gw2formats/pf/chunks/MODL/ModelFileAnimation.h

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

// Filetype: MODL
// Chunktype: ANIM

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_MODL_MODELFILEANIMATION_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_MODL_MODELFILEANIMATION_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/FileName.h>
#include <gw2formats/pf/helpers/Ptr.h>
#include <gw2formats/pf/helpers/RefList.h>
#include <gw2formats/pf/helpers/Vector.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			GW2FORMATS_API struct PackGrannyAnimationTypeV1 {
				helpers::Array<byte> animation;
				helpers::Array<dword> pointers;
			public:
				PackGrannyAnimationTypeV1( );
				PackGrannyAnimationTypeV1( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackGrannyAnimationTypeV1( const PackGrannyAnimationTypeV1& p_other );
				PackGrannyAnimationTypeV1& operator=( const PackGrannyAnimationTypeV1& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelAnimationLodV25 {
				PackGrannyAnimationTypeV1 data;
				helpers::FileName fileFull;
			public:
				ModelAnimationLodV25( );
				ModelAnimationLodV25( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelAnimationLodV25( const ModelAnimationLodV25& p_other );
				ModelAnimationLodV25& operator=( const ModelAnimationLodV25& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelVisTrackDataV33 {
				qword boneToken;
				helpers::Array<float> keys;
			public:
				ModelVisTrackDataV33( );
				ModelVisTrackDataV33( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelVisTrackDataV33( const ModelVisTrackDataV33& p_other );
				ModelVisTrackDataV33& operator=( const ModelVisTrackDataV33& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelTrackTypeDataV25 {
				byte type;
				dword trackGroupIndex;
				dword vectorTrackIndex;
				float4 initialValue;
			public:
				ModelTrackTypeDataV25( );
				ModelTrackTypeDataV25( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelTrackTypeDataV25( const ModelTrackTypeDataV25& p_other );
				ModelTrackTypeDataV25& operator=( const ModelTrackTypeDataV25& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelUVAnimationV25 {
				dword uvAnimId;
				helpers::Array<ModelTrackTypeDataV25> uvTransformData;
			public:
				ModelUVAnimationV25( );
				ModelUVAnimationV25( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelUVAnimationV25( const ModelUVAnimationV25& p_other );
				ModelUVAnimationV25& operator=( const ModelUVAnimationV25& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelCloudAnimV25 {
				qword bone;
				helpers::Array<ModelTrackTypeDataV25> cloudTrackData;
			public:
				ModelCloudAnimV25( );
				ModelCloudAnimV25( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelCloudAnimV25( const ModelCloudAnimV25& p_other );
				ModelCloudAnimV25& operator=( const ModelCloudAnimV25& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelMatConstAnimV25 {
				dword materialId;
				dword constToken;
				dword trackGroupIndex;
				dword vectorTrackIndex;
				float4 initialValue;
			public:
				ModelMatConstAnimV25( );
				ModelMatConstAnimV25( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelMatConstAnimV25( const ModelMatConstAnimV25& p_other );
				ModelMatConstAnimV25& operator=( const ModelMatConstAnimV25& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelLightAnimationV25 {
				qword bone;
				helpers::Array<ModelTrackTypeDataV25> lightTrackData;
			public:
				ModelLightAnimationV25( );
				ModelLightAnimationV25( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelLightAnimationV25( const ModelLightAnimationV25& p_other );
				ModelLightAnimationV25& operator=( const ModelLightAnimationV25& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelAnimPropertyDataV25 {
				qword id;
				dword type;
				float time;
				qword val;
				helpers::FileName strVal;
			public:
				ModelAnimPropertyDataV25( );
				ModelAnimPropertyDataV25( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelAnimPropertyDataV25( const ModelAnimPropertyDataV25& p_other );
				ModelAnimPropertyDataV25& operator=( const ModelAnimPropertyDataV25& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelTokenMapAnimV25 {
				qword linkToken;
				dword trackGroupIndex;
				dword vectorTrackIndex;
				float4 initialValue;
			public:
				ModelTokenMapAnimV25( );
				ModelTokenMapAnimV25( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelTokenMapAnimV25( const ModelTokenMapAnimV25& p_other );
				ModelTokenMapAnimV25& operator=( const ModelTokenMapAnimV25& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelBoneConstraintAnimV25 {
				qword bone;
				helpers::Array<ModelTrackTypeDataV25> bcTrackData;
			public:
				ModelBoneConstraintAnimV25( );
				ModelBoneConstraintAnimV25( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelBoneConstraintAnimV25( const ModelBoneConstraintAnimV25& p_other );
				ModelBoneConstraintAnimV25& operator=( const ModelBoneConstraintAnimV25& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelAnchorAnimV25 {
				qword bone;
				helpers::Array<ModelTrackTypeDataV25> anchorTrackData;
			public:
				ModelAnchorAnimV25( );
				ModelAnchorAnimV25( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelAnchorAnimV25( const ModelAnchorAnimV25& p_other );
				ModelAnchorAnimV25& operator=( const ModelAnchorAnimV25& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelStreakAnimV25 {
				qword bone;
				helpers::Array<ModelAnchorAnimV25> anchorAnim;
			public:
				ModelStreakAnimV25( );
				ModelStreakAnimV25( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelStreakAnimV25( const ModelStreakAnimV25& p_other );
				ModelStreakAnimV25& operator=( const ModelStreakAnimV25& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelLightningAnimV25 {
				qword bone;
				helpers::Array<ModelTrackTypeDataV25> lightningTrackData;
			public:
				ModelLightningAnimV25( );
				ModelLightningAnimV25( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelLightningAnimV25( const ModelLightningAnimV25& p_other );
				ModelLightningAnimV25& operator=( const ModelLightningAnimV25& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelWindAnimationV25 {
				qword bone;
				helpers::Array<ModelTrackTypeDataV25> windTrackData;
			public:
				ModelWindAnimationV25( );
				ModelWindAnimationV25( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelWindAnimationV25( const ModelWindAnimationV25& p_other );
				ModelWindAnimationV25& operator=( const ModelWindAnimationV25& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelAnimationDataV33 {
				qword token;
				PackGrannyAnimationTypeV1 data;
				helpers::Ptr<ModelAnimationLodV25> animLod;
				float moveSpeed;
				helpers::Array<ModelVisTrackDataV33> visTrackData;
				helpers::Array<ModelUVAnimationV25> uvAnimData;
				helpers::Array<ModelCloudAnimV25> cloudAnim;
				helpers::Array<ModelMatConstAnimV25> matConstAnim;
				helpers::Array<word> morphTrackGroups;
				helpers::Array<float> triggerTimes;
				helpers::Array<qword> triggerTokens;
				helpers::Array<ModelLightAnimationV25> lightAnimData;
				dword isAdditive;
				dword variantCount;
				dword variantIndices[3];
				helpers::Array<ModelAnimPropertyDataV25> properties;
				float3 center;
				float radius;
				helpers::Array<ModelTokenMapAnimV25> tokenMapAnims;
				helpers::Array<ModelBoneConstraintAnimV25> bcAnim;
				helpers::Array<ModelStreakAnimV25> streakAnim;
				helpers::Array<ModelLightningAnimV25> lightningAnim;
				helpers::Array<ModelWindAnimationV25> windAnimData;
			public:
				ModelAnimationDataV33( );
				ModelAnimationDataV33( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelAnimationDataV33( const ModelAnimationDataV33& p_other );
				ModelAnimationDataV33& operator=( const ModelAnimationDataV33& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelCompoundAnimationDataV25 {
				qword token;
				qword start;
				qword loop;
				qword end;
			public:
				ModelCompoundAnimationDataV25( );
				ModelCompoundAnimationDataV25( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelCompoundAnimationDataV25( const ModelCompoundAnimationDataV25& p_other );
				ModelCompoundAnimationDataV25& operator=( const ModelCompoundAnimationDataV25& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelAnimationImportSequenceV25 {
				qword name;
				float duration;
			public:
				ModelAnimationImportSequenceV25( );
				ModelAnimationImportSequenceV25( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelAnimationImportSequenceV25( const ModelAnimationImportSequenceV25& p_other );
				ModelAnimationImportSequenceV25& operator=( const ModelAnimationImportSequenceV25& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelAnimationImportDataV33 {
				helpers::FileName filename;
				helpers::Array<ModelAnimationImportSequenceV25> sequences;
			public:
				ModelAnimationImportDataV33( );
				ModelAnimationImportDataV33( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelAnimationImportDataV33( const ModelAnimationImportDataV33& p_other );
				ModelAnimationImportDataV33& operator=( const ModelAnimationImportDataV33& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelFileAnimationBankV25 {
				helpers::RefList<ModelAnimationDataV33> animations;
				helpers::Array<ModelCompoundAnimationDataV25> compoundAnimations;
				helpers::Array<qword> fallbacks;
				helpers::Array<ModelAnimationImportDataV33> imports;
			public:
				ModelFileAnimationBankV25( );
				ModelFileAnimationBankV25( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelFileAnimationBankV25( const ModelFileAnimationBankV25& p_other );
				ModelFileAnimationBankV25& operator=( const ModelFileAnimationBankV25& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ModelFileAnimationV25 {
				helpers::Ptr<ModelFileAnimationBankV25> bank;
				PackGrannyAnimationTypeV1 anim;
			public:
				ModelFileAnimationV25( );
				ModelFileAnimationV25( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ModelFileAnimationV25( const ModelFileAnimationV25& p_other );
				ModelFileAnimationV25& operator=( const ModelFileAnimationV25& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef ModelFileAnimationV25 ModelFileAnimation;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::MODL, fcc::ANIM> { typedef chunks::ModelFileAnimation Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_MODL_MODELFILEANIMATION_H_INCLUDED
