// File: pf/chunks/MODL/ModelFileAnimation.cpp

/*
Copyright (C) 2014-2015 Khral Steelforge <https://github.com/kytulendu>
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

#include <gw2formats/pf/chunks/MODL/ModelFileAnimation.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      PackGrannyAnimationType
			//============================================================================/

			PackGrannyAnimationTypeV1::PackGrannyAnimationTypeV1( ) {
			}

			PackGrannyAnimationTypeV1::PackGrannyAnimationTypeV1( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackGrannyAnimationTypeV1::PackGrannyAnimationTypeV1( const PackGrannyAnimationTypeV1& p_other )
				: animation( p_other.animation )
				, pointers( p_other.pointers ) {
			}

			PackGrannyAnimationTypeV1& PackGrannyAnimationTypeV1::operator=( const PackGrannyAnimationTypeV1& p_other ) {
				animation = p_other.animation;
				pointers = p_other.pointers;
				return *this;
			}

			const byte* PackGrannyAnimationTypeV1::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, animation );
				p_data = helpers::read( p_data, p_size, pointers );
				return p_data;
			}

			//============================================================================/
			//      ModelAnimationLodV25
			//============================================================================/

			ModelAnimationLodV25::ModelAnimationLodV25( ) {
			}

			ModelAnimationLodV25::ModelAnimationLodV25( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelAnimationLodV25::ModelAnimationLodV25( const ModelAnimationLodV25& p_other )
				: data( p_other.data )
				, fileFull( p_other.fileFull ) {
			}

			ModelAnimationLodV25& ModelAnimationLodV25::operator=( const ModelAnimationLodV25& p_other ) {
				data = p_other.data;
				fileFull = p_other.fileFull;
				return *this;
			}

			const byte* ModelAnimationLodV25::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, data );
				p_data = helpers::read( p_data, p_size, fileFull );
				return p_data;
			}

			//============================================================================/
			//      ModelVisTrackDataV33
			//============================================================================/

			ModelVisTrackDataV33::ModelVisTrackDataV33( )
				: boneToken( 0 ) {
			}

			ModelVisTrackDataV33::ModelVisTrackDataV33( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelVisTrackDataV33::ModelVisTrackDataV33( const ModelVisTrackDataV33& p_other )
				: boneToken( p_other.boneToken )
				, keys( p_other.keys ) {
			}

			ModelVisTrackDataV33& ModelVisTrackDataV33::operator=( const ModelVisTrackDataV33& p_other ) {
				boneToken = p_other.boneToken;
				keys = p_other.keys;
				return *this;
			}

			const byte* ModelVisTrackDataV33::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, boneToken );
				p_data = helpers::read( p_data, p_size, keys );
				return p_data;
			}

			//============================================================================/
			//      ModelTrackTypeDataV25
			//============================================================================/

			ModelTrackTypeDataV25::ModelTrackTypeDataV25( )
				: type( 0 )
				, trackGroupIndex( 0 )
				, vectorTrackIndex( 0 ) {
			}

			ModelTrackTypeDataV25::ModelTrackTypeDataV25( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelTrackTypeDataV25::ModelTrackTypeDataV25( const ModelTrackTypeDataV25& p_other )
				: type( p_other.type )
				, trackGroupIndex( p_other.trackGroupIndex )
				, vectorTrackIndex( p_other.vectorTrackIndex )
				, initialValue( p_other.initialValue ) {
			}

			ModelTrackTypeDataV25& ModelTrackTypeDataV25::operator=( const ModelTrackTypeDataV25& p_other ) {
				type = p_other.type;
				trackGroupIndex = p_other.trackGroupIndex;
				vectorTrackIndex = p_other.vectorTrackIndex;
				initialValue = p_other.initialValue;
				return *this;
			}

			const byte* ModelTrackTypeDataV25::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, type );
				p_data = helpers::read( p_data, p_size, trackGroupIndex );
				p_data = helpers::read( p_data, p_size, vectorTrackIndex );
				p_data = helpers::read( p_data, p_size, initialValue );
				return p_data;
			}

			//============================================================================/
			//      ModelUVAnimationV25
			//============================================================================/

			ModelUVAnimationV25::ModelUVAnimationV25( )
				: uvAnimId( 0 ) {
			}

			ModelUVAnimationV25::ModelUVAnimationV25( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelUVAnimationV25::ModelUVAnimationV25( const ModelUVAnimationV25& p_other )
				: uvAnimId( p_other.uvAnimId )
				, uvTransformData( p_other.uvTransformData ) {
			}

			ModelUVAnimationV25& ModelUVAnimationV25::operator=( const ModelUVAnimationV25& p_other ) {
				uvAnimId = p_other.uvAnimId;
				uvTransformData = p_other.uvTransformData;
				return *this;
			}

			const byte* ModelUVAnimationV25::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, uvAnimId );
				p_data = helpers::read( p_data, p_size, uvTransformData );
				return p_data;
			}

			//============================================================================/
			//      ModelCloudAnimV25
			//============================================================================/

			ModelCloudAnimV25::ModelCloudAnimV25( )
				: bone( 0 ) {
			}

			ModelCloudAnimV25::ModelCloudAnimV25( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelCloudAnimV25::ModelCloudAnimV25( const ModelCloudAnimV25& p_other )
				: bone( p_other.bone )
				, cloudTrackData( p_other.cloudTrackData ) {
			}

			ModelCloudAnimV25& ModelCloudAnimV25::operator=( const ModelCloudAnimV25& p_other ) {
				bone = p_other.bone;
				cloudTrackData = p_other.cloudTrackData;
				return *this;
			}

			const byte* ModelCloudAnimV25::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, bone );
				p_data = helpers::read( p_data, p_size, cloudTrackData );
				return p_data;
			}

			//============================================================================/
			//      ModelMatConstAnimV25
			//============================================================================/

			ModelMatConstAnimV25::ModelMatConstAnimV25( )
				: materialId( 0 )
				, constToken( 0 )
				, trackGroupIndex( 0 )
				, vectorTrackIndex( 0 ) {
			}

			ModelMatConstAnimV25::ModelMatConstAnimV25( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelMatConstAnimV25::ModelMatConstAnimV25( const ModelMatConstAnimV25& p_other )
				: materialId( p_other.materialId )
				, constToken( p_other.constToken )
				, trackGroupIndex( p_other.trackGroupIndex )
				, vectorTrackIndex( p_other.vectorTrackIndex )
				, initialValue( p_other.initialValue ) {
			}

			ModelMatConstAnimV25& ModelMatConstAnimV25::operator=( const ModelMatConstAnimV25& p_other ) {
				materialId = p_other.materialId;
				constToken = p_other.constToken;
				trackGroupIndex = p_other.trackGroupIndex;
				vectorTrackIndex = p_other.vectorTrackIndex;
				initialValue = p_other.initialValue;
				return *this;
			}

			const byte* ModelMatConstAnimV25::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, materialId );
				p_data = helpers::read( p_data, p_size, constToken );
				p_data = helpers::read( p_data, p_size, trackGroupIndex );
				p_data = helpers::read( p_data, p_size, vectorTrackIndex );
				p_data = helpers::read( p_data, p_size, initialValue );
				return p_data;
			}

			//============================================================================/
			//      ModelLightAnimationV25
			//============================================================================/

			ModelLightAnimationV25::ModelLightAnimationV25( )
				: bone( 0 ) {
			}

			ModelLightAnimationV25::ModelLightAnimationV25( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelLightAnimationV25::ModelLightAnimationV25( const ModelLightAnimationV25& p_other )
				: bone( p_other.bone )
				, lightTrackData( p_other.lightTrackData ) {
			}

			ModelLightAnimationV25& ModelLightAnimationV25::operator=( const ModelLightAnimationV25& p_other ) {
				bone = p_other.bone;
				lightTrackData = p_other.lightTrackData;
				return *this;
			}

			const byte* ModelLightAnimationV25::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, bone );
				p_data = helpers::read( p_data, p_size, lightTrackData );
				return p_data;
			}

			//============================================================================/
			//      ModelAnimPropertyDataV25
			//============================================================================/

			ModelAnimPropertyDataV25::ModelAnimPropertyDataV25( )
				: id( 0 )
				, type( 0 )
				, time( 0 )
				, val( 0 ) {
			}

			ModelAnimPropertyDataV25::ModelAnimPropertyDataV25( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelAnimPropertyDataV25::ModelAnimPropertyDataV25( const ModelAnimPropertyDataV25& p_other )
				: id( p_other.id )
				, type( p_other.type )
				, time( p_other.time )
				, val( p_other.val )
				, strVal( p_other.strVal ) {
			}

			ModelAnimPropertyDataV25& ModelAnimPropertyDataV25::operator=( const ModelAnimPropertyDataV25& p_other ) {
				id = p_other.id;
				type = p_other.type;
				time = p_other.time;
				val = p_other.val;
				strVal = p_other.strVal;
				return *this;
			}

			const byte* ModelAnimPropertyDataV25::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, id );
				p_data = helpers::read( p_data, p_size, type );
				p_data = helpers::read( p_data, p_size, time );
				p_data = helpers::read( p_data, p_size, val );
				p_data = helpers::read( p_data, p_size, strVal );
				return p_data;
			}

			//============================================================================/
			//      ModelTokenMapAnimV25
			//============================================================================/

			ModelTokenMapAnimV25::ModelTokenMapAnimV25( )
				: linkToken( 0 )
				, trackGroupIndex( 0 )
				, vectorTrackIndex( 0 ) {
			}

			ModelTokenMapAnimV25::ModelTokenMapAnimV25( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelTokenMapAnimV25::ModelTokenMapAnimV25( const ModelTokenMapAnimV25& p_other )
				: linkToken( p_other.linkToken )
				, trackGroupIndex( p_other.trackGroupIndex )
				, vectorTrackIndex( p_other.vectorTrackIndex )
				, initialValue( p_other.initialValue ) {
			}

			ModelTokenMapAnimV25& ModelTokenMapAnimV25::operator=( const ModelTokenMapAnimV25& p_other ) {
				linkToken = p_other.linkToken;
				trackGroupIndex = p_other.trackGroupIndex;
				vectorTrackIndex = p_other.vectorTrackIndex;
				initialValue = p_other.initialValue;
				return *this;
			}

			const byte* ModelTokenMapAnimV25::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, linkToken );
				p_data = helpers::read( p_data, p_size, trackGroupIndex );
				p_data = helpers::read( p_data, p_size, vectorTrackIndex );
				p_data = helpers::read( p_data, p_size, initialValue );
				return p_data;
			}

			//============================================================================/
			//      ModelBoneConstraintAnimV25
			//============================================================================/

			ModelBoneConstraintAnimV25::ModelBoneConstraintAnimV25( )
				: bone( 0 ) {
			}

			ModelBoneConstraintAnimV25::ModelBoneConstraintAnimV25( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelBoneConstraintAnimV25::ModelBoneConstraintAnimV25( const ModelBoneConstraintAnimV25& p_other )
				: bone( p_other.bone )
				, bcTrackData( p_other.bcTrackData ) {
			}

			ModelBoneConstraintAnimV25& ModelBoneConstraintAnimV25::operator=( const ModelBoneConstraintAnimV25& p_other ) {
				bone = p_other.bone;
				bcTrackData = p_other.bcTrackData;
				return *this;
			}

			const byte* ModelBoneConstraintAnimV25::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, bone );
				p_data = helpers::read( p_data, p_size, bcTrackData );
				return p_data;
			}

			//============================================================================/
			//      ModelAnchorAnimV25
			//============================================================================/

			ModelAnchorAnimV25::ModelAnchorAnimV25( )
				: bone( 0 ) {
			}

			ModelAnchorAnimV25::ModelAnchorAnimV25( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelAnchorAnimV25::ModelAnchorAnimV25( const ModelAnchorAnimV25& p_other )
				: bone( p_other.bone )
				, anchorTrackData( p_other.anchorTrackData ) {
			}

			ModelAnchorAnimV25& ModelAnchorAnimV25::operator=( const ModelAnchorAnimV25& p_other ) {
				bone = p_other.bone;
				anchorTrackData = p_other.anchorTrackData;
				return *this;
			}

			const byte* ModelAnchorAnimV25::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, bone );
				p_data = helpers::read( p_data, p_size, anchorTrackData );
				return p_data;
			}

			//============================================================================/
			//      ModelStreakAnimV25
			//============================================================================/

			ModelStreakAnimV25::ModelStreakAnimV25( )
				: bone( 0 ) {
			}

			ModelStreakAnimV25::ModelStreakAnimV25( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelStreakAnimV25::ModelStreakAnimV25( const ModelStreakAnimV25& p_other )
				: bone( p_other.bone )
				, anchorAnim( p_other.anchorAnim ) {
			}

			ModelStreakAnimV25& ModelStreakAnimV25::operator=( const ModelStreakAnimV25& p_other ) {
				bone = p_other.bone;
				anchorAnim = p_other.anchorAnim;
				return *this;
			}

			const byte* ModelStreakAnimV25::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, bone );
				p_data = helpers::read( p_data, p_size, anchorAnim );
				return p_data;
			}

			//============================================================================/
			//      ModelLightningAnimV25
			//============================================================================/

			ModelLightningAnimV25::ModelLightningAnimV25( )
				: bone( 0 ) {
			}

			ModelLightningAnimV25::ModelLightningAnimV25( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelLightningAnimV25::ModelLightningAnimV25( const ModelLightningAnimV25& p_other )
				: bone( p_other.bone )
				, lightningTrackData( p_other.lightningTrackData ) {
			}

			ModelLightningAnimV25& ModelLightningAnimV25::operator=( const ModelLightningAnimV25& p_other ) {
				bone = p_other.bone;
				lightningTrackData = p_other.lightningTrackData;
				return *this;
			}

			const byte* ModelLightningAnimV25::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, bone );
				p_data = helpers::read( p_data, p_size, lightningTrackData );
				return p_data;
			}

			//============================================================================/
			//      ModelWindAnimationV25
			//============================================================================/

			ModelWindAnimationV25::ModelWindAnimationV25( )
				: bone( 0 ) {
			}

			ModelWindAnimationV25::ModelWindAnimationV25( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelWindAnimationV25::ModelWindAnimationV25( const ModelWindAnimationV25& p_other )
				: bone( p_other.bone )
				, windTrackData( p_other.windTrackData ) {
			}

			ModelWindAnimationV25& ModelWindAnimationV25::operator=( const ModelWindAnimationV25& p_other ) {
				bone = p_other.bone;
				windTrackData = p_other.windTrackData;
				return *this;
			}

			const byte* ModelWindAnimationV25::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, bone );
				p_data = helpers::read( p_data, p_size, windTrackData );
				return p_data;
			}

			//============================================================================/
			//      ModelAnimationDataV33
			//============================================================================/

			ModelAnimationDataV33::ModelAnimationDataV33( )
				: token( 0 )
				, moveSpeed( 0 )
				, isAdditive( 0 )
				, variantCount( 0 )
				, radius( 0 ) {
			}

			ModelAnimationDataV33::ModelAnimationDataV33( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelAnimationDataV33::ModelAnimationDataV33( const ModelAnimationDataV33& p_other )
				: token( p_other.token )
				, data( p_other.data )
				, animLod( p_other.animLod )
				, moveSpeed( p_other.moveSpeed )
				, visTrackData( p_other.visTrackData )
				, uvAnimData( p_other.uvAnimData )
				, cloudAnim( p_other.cloudAnim )
				, matConstAnim( p_other.matConstAnim )
				, morphTrackGroups( p_other.morphTrackGroups )
				, triggerTimes( p_other.triggerTimes )
				, triggerTokens( p_other.triggerTokens )
				, lightAnimData( p_other.lightAnimData )
				, isAdditive( p_other.isAdditive )
				, variantCount( p_other.variantCount )
				, properties( p_other.properties )
				, center( p_other.center )
				, radius( p_other.radius )
				, tokenMapAnims( p_other.tokenMapAnims )
				, bcAnim( p_other.bcAnim )
				, streakAnim( p_other.streakAnim )
				, lightningAnim( p_other.lightningAnim )
				, windAnimData( p_other.windAnimData ) {
				std::copy( p_other.variantIndices, p_other.variantIndices + 3, variantIndices );
			}

			ModelAnimationDataV33& ModelAnimationDataV33::operator=( const ModelAnimationDataV33& p_other ) {
				token = p_other.token;
				data = p_other.data;
				animLod = p_other.animLod;
				moveSpeed = p_other.moveSpeed;
				visTrackData = p_other.visTrackData;
				uvAnimData = p_other.uvAnimData;
				cloudAnim = p_other.cloudAnim;
				matConstAnim = p_other.matConstAnim;
				morphTrackGroups = p_other.morphTrackGroups;
				triggerTimes = p_other.triggerTimes;
				triggerTokens = p_other.triggerTokens;
				lightAnimData = p_other.lightAnimData;
				isAdditive = p_other.isAdditive;
				variantCount = p_other.variantCount;
				properties = p_other.properties;
				center = p_other.center;
				radius = p_other.radius;
				tokenMapAnims = p_other.tokenMapAnims;
				bcAnim = p_other.bcAnim;
				streakAnim = p_other.streakAnim;
				lightningAnim = p_other.lightningAnim;
				windAnimData = p_other.windAnimData;
				std::copy( p_other.variantIndices, p_other.variantIndices + 3, variantIndices );
				return *this;
			}

			const byte* ModelAnimationDataV33::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, token );
				p_data = helpers::read( p_data, p_size, data );
				p_data = helpers::read( p_data, p_size, animLod );
				p_data = helpers::read( p_data, p_size, moveSpeed );
				p_data = helpers::read( p_data, p_size, visTrackData );
				p_data = helpers::read( p_data, p_size, uvAnimData );
				p_data = helpers::read( p_data, p_size, cloudAnim );
				p_data = helpers::read( p_data, p_size, matConstAnim );
				p_data = helpers::read( p_data, p_size, morphTrackGroups );
				p_data = helpers::read( p_data, p_size, triggerTimes );
				p_data = helpers::read( p_data, p_size, triggerTokens );
				p_data = helpers::read( p_data, p_size, lightAnimData );
				p_data = helpers::read( p_data, p_size, isAdditive );
				p_data = helpers::read( p_data, p_size, variantCount );
				p_data = helpers::read( p_data, p_size, variantIndices );
				p_data = helpers::read( p_data, p_size, properties );
				p_data = helpers::read( p_data, p_size, center );
				p_data = helpers::read( p_data, p_size, radius );
				p_data = helpers::read( p_data, p_size, tokenMapAnims );
				p_data = helpers::read( p_data, p_size, bcAnim );
				p_data = helpers::read( p_data, p_size, streakAnim );
				p_data = helpers::read( p_data, p_size, lightningAnim );
				p_data = helpers::read( p_data, p_size, windAnimData );
				return p_data;
			}

			//============================================================================/
			//      ModelCompoundAnimationDataV25
			//============================================================================/

			ModelCompoundAnimationDataV25::ModelCompoundAnimationDataV25( )
				: token( 0 )
				, start( 0 )
				, loop( 0 )
				, end( 0 ) {
			}

			ModelCompoundAnimationDataV25::ModelCompoundAnimationDataV25( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelCompoundAnimationDataV25::ModelCompoundAnimationDataV25( const ModelCompoundAnimationDataV25& p_other )
				: token( p_other.token )
				, start( p_other.start )
				, loop( p_other.loop )
				, end( p_other.end ) {
			}

			ModelCompoundAnimationDataV25& ModelCompoundAnimationDataV25::operator=( const ModelCompoundAnimationDataV25& p_other ) {
				token = p_other.token;
				start = p_other.start;
				loop = p_other.loop;
				end = p_other.end;
				return *this;
			}

			const byte* ModelCompoundAnimationDataV25::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, token );
				p_data = helpers::read( p_data, p_size, start );
				p_data = helpers::read( p_data, p_size, loop );
				p_data = helpers::read( p_data, p_size, end );
				return p_data;
			}

			//============================================================================/
			//      ModelAnimationImportSequenceV25
			//============================================================================/

			ModelAnimationImportSequenceV25::ModelAnimationImportSequenceV25( )
				: name( 0 )
				, duration( 0 ) {
			}

			ModelAnimationImportSequenceV25::ModelAnimationImportSequenceV25( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelAnimationImportSequenceV25::ModelAnimationImportSequenceV25( const ModelAnimationImportSequenceV25& p_other )
				: name( p_other.name )
				, duration( p_other.duration ) {
			}

			ModelAnimationImportSequenceV25& ModelAnimationImportSequenceV25::operator=( const ModelAnimationImportSequenceV25& p_other ) {
				name = p_other.name;
				duration = p_other.duration;
				return *this;
			}

			const byte* ModelAnimationImportSequenceV25::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, duration );
				return p_data;
			}

			//============================================================================/
			//      ModelAnimationImportDataV33
			//============================================================================/

			ModelAnimationImportDataV33::ModelAnimationImportDataV33( ) {
			}

			ModelAnimationImportDataV33::ModelAnimationImportDataV33( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelAnimationImportDataV33::ModelAnimationImportDataV33( const ModelAnimationImportDataV33& p_other )
				: filename( p_other.filename )
				, sequences( p_other.sequences ) {
			}

			ModelAnimationImportDataV33& ModelAnimationImportDataV33::operator=( const ModelAnimationImportDataV33& p_other ) {
				filename = p_other.filename;
				sequences = p_other.sequences;
				return *this;
			}

			const byte* ModelAnimationImportDataV33::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, filename );
				p_data = helpers::read( p_data, p_size, sequences );
				return p_data;
			}

			//============================================================================/
			//      ModelFileAnimationBankV25
			//============================================================================/

			ModelFileAnimationBankV25::ModelFileAnimationBankV25( ) {
			}

			ModelFileAnimationBankV25::ModelFileAnimationBankV25( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelFileAnimationBankV25::ModelFileAnimationBankV25( const ModelFileAnimationBankV25& p_other )
				: animations( p_other.animations )
				, compoundAnimations( p_other.compoundAnimations )
				, fallbacks( p_other.fallbacks )
				, imports( p_other.imports ) {
			}

			ModelFileAnimationBankV25& ModelFileAnimationBankV25::operator=( const ModelFileAnimationBankV25& p_other ) {
				animations = p_other.animations;
				compoundAnimations = p_other.compoundAnimations;
				fallbacks = p_other.fallbacks;
				imports = p_other.imports;
				return *this;
			}

			const byte* ModelFileAnimationBankV25::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, animations );
				p_data = helpers::read( p_data, p_size, compoundAnimations );
				p_data = helpers::read( p_data, p_size, fallbacks );
				p_data = helpers::read( p_data, p_size, imports );
				return p_data;
			}

			//============================================================================/
			//      ModelFileAnimationV25
			//============================================================================/

			ModelFileAnimationV25::ModelFileAnimationV25( ) {
			}

			ModelFileAnimationV25::ModelFileAnimationV25( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ModelFileAnimationV25::ModelFileAnimationV25( const ModelFileAnimationV25& p_other )
				: bank( p_other.bank )
				, anim( p_other.anim ) {
			}

			ModelFileAnimationV25& ModelFileAnimationV25::operator=( const ModelFileAnimationV25& p_other ) {
				bank = p_other.bank;
				anim = p_other.anim;
				return *this;
			}

			const byte* ModelFileAnimationV25::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, bank );
				p_data = helpers::read( p_data, p_size, anim );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
