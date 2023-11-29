// File: gw2formats/pf/chunks/mapc/PackMapEnvironment.h

/*
Copyright (C) 2014-2016 Khralkatorrix <https://github.com/kytulendu>
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

// Filetype: mapc
// Chunktype: env

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPENVIRONMENT_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPENVIRONMENT_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/FileName.h>
#include <gw2formats/pf/helpers/Ptr.h>
#include <gw2formats/pf/helpers/RefList.h>
#include <gw2formats/pf/helpers/Vector.h>
#include <gw2formats/pf/helpers/WString.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			GW2FORMATS_API struct PackMapEnvDataLightV76 {
				byte3 color;
				float intensity;
				float3 direction;
			public:
				PackMapEnvDataLightV76( );
				PackMapEnvDataLightV76( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataLightV76( const PackMapEnvDataLightV76& p_other );
				PackMapEnvDataLightV76& operator=( const PackMapEnvDataLightV76& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataLightingV76 {
				helpers::RefList<PackMapEnvDataLightV76> lights;
				float shadowInfluence;
				byte3 backlightColor;
				float backlightIntensity;
			public:
				PackMapEnvDataLightingV76( );
				PackMapEnvDataLightingV76( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataLightingV76( const PackMapEnvDataLightingV76& p_other );
				PackMapEnvDataLightingV76& operator=( const PackMapEnvDataLightingV76& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataLightingCharV47 {
				float sunScale;
				float saturation;
				float sunFill;
				float ambScale;
				float ambFill;
				byte flags;
			public:
				PackMapEnvDataLightingCharV47( );
				PackMapEnvDataLightingCharV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataLightingCharV47( const PackMapEnvDataLightingCharV47& p_other );
				PackMapEnvDataLightingCharV47& operator=( const PackMapEnvDataLightingCharV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataLightingCharGroupV47 {
				helpers::Array<PackMapEnvDataLightingCharV47> lightingChar;
			public:
				PackMapEnvDataLightingCharGroupV47( );
				PackMapEnvDataLightingCharGroupV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataLightingCharGroupV47( const PackMapEnvDataLightingCharGroupV47& p_other );
				PackMapEnvDataLightingCharGroupV47& operator=( const PackMapEnvDataLightingCharGroupV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataLayerAttributesV76 {
				float brightness;
				float density;
				float haze;
				float lightIntensity;
				float2 velocity;
				float fadeWidth;
				float fadeEnd;
				dword reserved;
			public:
				PackMapEnvDataLayerAttributesV76( );
				PackMapEnvDataLayerAttributesV76( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataLayerAttributesV76( const PackMapEnvDataLayerAttributesV76& p_other );
				PackMapEnvDataLayerAttributesV76& operator=( const PackMapEnvDataLayerAttributesV76& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataLayerV76 {
				float altitude;
				float cutOut;
				float depth;
				float extent;
				float scale;
				helpers::FileName texture;
				helpers::Array<PackMapEnvDataLayerAttributesV76> attributes;
				helpers::WString name;
				dword reserved;
			public:
				PackMapEnvDataLayerV76( );
				PackMapEnvDataLayerV76( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataLayerV76( const PackMapEnvDataLayerV76& p_other );
				PackMapEnvDataLayerV76& operator=( const PackMapEnvDataLayerV76& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataCloudsV76 {
				helpers::Array<PackMapEnvDataLayerV76> layers;
			public:
				PackMapEnvDataCloudsV76( );
				PackMapEnvDataCloudsV76( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataCloudsV76( const PackMapEnvDataCloudsV76& p_other );
				PackMapEnvDataCloudsV76& operator=( const PackMapEnvDataCloudsV76& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataColoredLightRingsV47 {
				float2 range;
				float distances[6];
				byte4 lightColors[6];
				byte4 shadowColors[6];
			public:
				PackMapEnvDataColoredLightRingsV47( );
				PackMapEnvDataColoredLightRingsV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataColoredLightRingsV47( const PackMapEnvDataColoredLightRingsV47& p_other );
				PackMapEnvDataColoredLightRingsV47& operator=( const PackMapEnvDataColoredLightRingsV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataEffectExV47 {
				dword dummy;
			public:
				PackMapEnvDataEffectExV47( );
				PackMapEnvDataEffectExV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataEffectExV47( const PackMapEnvDataEffectExV47& p_other );
				PackMapEnvDataEffectExV47& operator=( const PackMapEnvDataEffectExV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataEffectV76 {
				byte4 glow;
				byte4 tintColor;
				byte4 tintTargetColor;
				float saturation;
				float tintAmount;
				float tintFocus;
				byte4 glowLevel;
				float glowAmplify;
				float focalDepth;
				float focalRange;
				float ssaoAmount;
				float ssaoBrighten;
				float ssaoContrast;
				float ssaoSunScale;
				dword flags;
				helpers::FileName clutTexturePath;
				helpers::Ptr<PackMapEnvDataEffectExV47> ext;
			public:
				PackMapEnvDataEffectV76( );
				PackMapEnvDataEffectV76( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataEffectV76( const PackMapEnvDataEffectV76& p_other );
				PackMapEnvDataEffectV76& operator=( const PackMapEnvDataEffectV76& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataHazeV76 {
				byte4 nearColor;
				byte4 farColor;
				float2 distRange;
				byte4 heightColor;
				float2 heightRange;
				float depthCue;
				float2 sunDirRange;
			public:
				PackMapEnvDataHazeV76( );
				PackMapEnvDataHazeV76( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataHazeV76( const PackMapEnvDataHazeV76& p_other );
				PackMapEnvDataHazeV76& operator=( const PackMapEnvDataHazeV76& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataPFieldV76 {
				float altitude;
				float2 angle;
				word clusterCount;
				float2 clustering;
				float depth;
				float deviation;
				float2 deviationSpeed;
				word extent;
				float fade;
				float3 fieldDirection;
				word flags;
				float2 lifetime;
				float2 opacity;
				word particleCount;
				float2 period;
				float2 rotation;
				float2 scaleX;
				float2 scaleY;
				dword seed;
				float2 speed;
				dword2 texColRow;
				float texFPS;
				helpers::FileName texPath;
				byte type;
				helpers::WString name;
				dword reserved;
			public:
				PackMapEnvDataPFieldV76( );
				PackMapEnvDataPFieldV76( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataPFieldV76( const PackMapEnvDataPFieldV76& p_other );
				PackMapEnvDataPFieldV76& operator=( const PackMapEnvDataPFieldV76& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataPFieldCutoutV47 {
				helpers::WString name;
				float4 x;
				float4 y;
				float4 z;
			public:
				PackMapEnvDataPFieldCutoutV47( );
				PackMapEnvDataPFieldCutoutV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataPFieldCutoutV47( const PackMapEnvDataPFieldCutoutV47& p_other );
				PackMapEnvDataPFieldCutoutV47& operator=( const PackMapEnvDataPFieldCutoutV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSkyV76 {
				byte flags;
				float dayBrightness;
				float dayHazeBottom;
				float dayHazeDensity;
				float dayHazeFalloff;
				float dayLightIntensity;
				float dayStarDensity;
				float nightBrightness;
				float nightHazeBottom;
				float nightHazeDensity;
				float nightHazeFalloff;
				float nightLightIntensity;
				float nightStarDensity;
				float verticalOffset;
			public:
				PackMapEnvDataSkyV76( );
				PackMapEnvDataSkyV76( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkyV76( const PackMapEnvDataSkyV76& p_other );
				PackMapEnvDataSkyV76& operator=( const PackMapEnvDataSkyV76& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvLensFlareAtomV47 {
				dword rows;
				dword columns;
				dword start;
				float fps;
				byte4 color;
				float2 offset;
				float2 scale;
				float baseRotation;
				float cameraRotation;
				byte flags;
			public:
				PackMapEnvLensFlareAtomV47( );
				PackMapEnvLensFlareAtomV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvLensFlareAtomV47( const PackMapEnvLensFlareAtomV47& p_other );
				PackMapEnvLensFlareAtomV47& operator=( const PackMapEnvLensFlareAtomV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvLensFlareTextureV47 {
				helpers::FileName texture;
			public:
				PackMapEnvLensFlareTextureV47( );
				PackMapEnvLensFlareTextureV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvLensFlareTextureV47( const PackMapEnvLensFlareTextureV47& p_other );
				PackMapEnvLensFlareTextureV47& operator=( const PackMapEnvLensFlareTextureV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataShaderConstantV47 {
				dword token;
				float4 value;
			public:
				PackMapEnvDataShaderConstantV47( );
				PackMapEnvDataShaderConstantV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataShaderConstantV47( const PackMapEnvDataShaderConstantV47& p_other );
				PackMapEnvDataShaderConstantV47& operator=( const PackMapEnvDataShaderConstantV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvLensFlareV47 {
				helpers::Array<PackMapEnvLensFlareAtomV47> atoms;
				helpers::Array<PackMapEnvLensFlareTextureV47> textures;
				helpers::FileName material;
				float2 fadeBand;
				float2 reverseFadeBand;
				float opacityCoeff;
				byte flags;
				helpers::Array<PackMapEnvDataShaderConstantV47> constants;
			public:
				PackMapEnvLensFlareV47( );
				PackMapEnvLensFlareV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvLensFlareV47( const PackMapEnvLensFlareV47& p_other );
				PackMapEnvLensFlareV47& operator=( const PackMapEnvLensFlareV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSkyCardAttributesExV47 {
				dword dummy;
			public:
				PackMapEnvDataSkyCardAttributesExV47( );
				PackMapEnvDataSkyCardAttributesExV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkyCardAttributesExV47( const PackMapEnvDataSkyCardAttributesExV47& p_other );
				PackMapEnvDataSkyCardAttributesExV47& operator=( const PackMapEnvDataSkyCardAttributesExV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSkyCardAttributesV75 {
				float azimuth;
				float density;
				float hazeDensity;
				float latitude;
				float lightIntensity;
				float minHaze;
				float2 scale;
				float speed;
				helpers::FileName texture;
				float4 textureUV;
				float brightness;
				helpers::Ptr<PackMapEnvLensFlareV47> lensFlare;
				helpers::Ptr<PackMapEnvDataSkyCardAttributesExV47> ext;
			public:
				PackMapEnvDataSkyCardAttributesV75( );
				PackMapEnvDataSkyCardAttributesV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkyCardAttributesV75( const PackMapEnvDataSkyCardAttributesV75& p_other );
				PackMapEnvDataSkyCardAttributesV75& operator=( const PackMapEnvDataSkyCardAttributesV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataShaderTextureV47 {
				helpers::FileName filename;
				float4 textureUV;
			public:
				PackMapEnvDataShaderTextureV47( );
				PackMapEnvDataShaderTextureV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataShaderTextureV47( const PackMapEnvDataShaderTextureV47& p_other );
				PackMapEnvDataShaderTextureV47& operator=( const PackMapEnvDataShaderTextureV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackEnvDataSkyCardAnimationV47 {
				float2 textureAnimTranslation;
				float2 textureAnimScaleRangeX;
				float2 textureAnimScaleRangeY;
				float2 textureAnimScaleSpeed;
				float textureAnimRotation;
				dword texCoords;
			public:
				PackEnvDataSkyCardAnimationV47( );
				PackEnvDataSkyCardAnimationV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackEnvDataSkyCardAnimationV47( const PackEnvDataSkyCardAnimationV47& p_other );
				PackEnvDataSkyCardAnimationV47& operator=( const PackEnvDataSkyCardAnimationV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSkycardFlipbookV47 {
				dword rows;
				dword columns;
				dword start;
				dword count;
				float fps;
			public:
				PackMapEnvDataSkycardFlipbookV47( );
				PackMapEnvDataSkycardFlipbookV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkycardFlipbookV47( const PackMapEnvDataSkycardFlipbookV47& p_other );
				PackMapEnvDataSkycardFlipbookV47& operator=( const PackMapEnvDataSkycardFlipbookV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSkyCardMaterialV47 {
				helpers::FileName filename;
				helpers::Array<PackMapEnvDataShaderConstantV47> constants;
				helpers::Array<PackMapEnvDataShaderTextureV47> textures;
				PackEnvDataSkyCardAnimationV47 textureAnimation;
				PackMapEnvDataSkycardFlipbookV47 flipbook;
			public:
				PackMapEnvDataSkyCardMaterialV47( );
				PackMapEnvDataSkyCardMaterialV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkyCardMaterialV47( const PackMapEnvDataSkyCardMaterialV47& p_other );
				PackMapEnvDataSkyCardMaterialV47& operator=( const PackMapEnvDataSkyCardMaterialV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSkyCardExV47 {
				dword dummy;
			public:
				PackMapEnvDataSkyCardExV47( );
				PackMapEnvDataSkyCardExV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkyCardExV47( const PackMapEnvDataSkyCardExV47& p_other );
				PackMapEnvDataSkyCardExV47& operator=( const PackMapEnvDataSkyCardExV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSkyCardV76 {
				PackMapEnvDataSkyCardAttributesV75 day;
				PackMapEnvDataSkyCardAttributesV75 night;
				dword flags;
				helpers::WString name;
				float3 location;
				helpers::Ptr<PackMapEnvDataSkyCardMaterialV47> material;
				helpers::Ptr<PackMapEnvDataSkyCardExV47> ext;
			public:
				PackMapEnvDataSkyCardV76( );
				PackMapEnvDataSkyCardV76( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkyCardV76( const PackMapEnvDataSkyCardV76& p_other );
				PackMapEnvDataSkyCardV76& operator=( const PackMapEnvDataSkyCardV76& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSkyCardsV76 {
				helpers::Array<PackMapEnvDataSkyCardV76> cards;
			public:
				PackMapEnvDataSkyCardsV76( );
				PackMapEnvDataSkyCardsV76( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkyCardsV76( const PackMapEnvDataSkyCardsV76& p_other );
				PackMapEnvDataSkyCardsV76& operator=( const PackMapEnvDataSkyCardsV76& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSpawnModelDataV47 {
				dword2 spawnRange;
				dword2 lifeSpan;
				float2 scaleRange;
				float2 heightRange;
				float2 rotXRange;
				float2 rotYRange;
				float2 rotZRange;
				float probability;
				float delay;
				dword flags;
				qword animSequence;
				helpers::FileName modelFile;
				word maxConcurrent;
			public:
				PackMapEnvDataSpawnModelDataV47( );
				PackMapEnvDataSpawnModelDataV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSpawnModelDataV47( const PackMapEnvDataSpawnModelDataV47& p_other );
				PackMapEnvDataSpawnModelDataV47& operator=( const PackMapEnvDataSpawnModelDataV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSpawnListV47 {
				helpers::Array<PackMapEnvDataSpawnModelDataV47> spawns;
			public:
				PackMapEnvDataSpawnListV47( );
				PackMapEnvDataSpawnListV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSpawnListV47( const PackMapEnvDataSpawnListV47& p_other );
				PackMapEnvDataSpawnListV47& operator=( const PackMapEnvDataSpawnListV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSpawnGroupsV47 {
				helpers::Array<PackMapEnvDataSpawnListV47> spawnGroups;
				helpers::Array<qword> targets;
			public:
				PackMapEnvDataSpawnGroupsV47( );
				PackMapEnvDataSpawnGroupsV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSpawnGroupsV47( const PackMapEnvDataSpawnGroupsV47& p_other );
				PackMapEnvDataSpawnGroupsV47& operator=( const PackMapEnvDataSpawnGroupsV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataWaterV76 {
				dword waterFlags;
				float animAmplitude;
				float animChoppiness;
				float2 animWind;
				float bumpAmount;
				float bumpAngle0;
				float bumpAngle1;
				float bumpScale0;
				float bumpScale1;
				float bumpSpeed0;
				float bumpSpeed1;
				float bumpTile0;
				float bumpTile1;
				float patternAngle;
				float patternTile;
				float patternSpeed;
				float patternEdge;
				byte4 surfaceShallowColor;
				byte4 surfaceDeepColor;
				byte4 patternColor;
				float surfaceFresnel;
				float distortAmount;
				float depthAttenuation;
				helpers::FileName materialFilename;
				helpers::Array<helpers::FileName> textureFilenames;
				helpers::Array<dword> constantTokens;
				helpers::Array<float4> constantValues;
				float foamSpawn;
				float foamDissolve;
				float foamDepthAttenuation;
				byte4 foamColor0;
				byte4 foamColor1;
			public:
				PackMapEnvDataWaterV76( );
				PackMapEnvDataWaterV76( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataWaterV76( const PackMapEnvDataWaterV76& p_other );
				PackMapEnvDataWaterV76& operator=( const PackMapEnvDataWaterV76& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataWindV76 {
				byte azimuth;
				byte elevation;
				byte noise;
				byte speed;
				byte gust;
				byte gustFreq;
				byte gustSpeed;
			public:
				PackMapEnvDataWindV76( );
				PackMapEnvDataWindV76( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataWindV76( const PackMapEnvDataWindV76& p_other );
				PackMapEnvDataWindV76& operator=( const PackMapEnvDataWindV76& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataAudioV47 {
				qword token;
			public:
				PackMapEnvDataAudioV47( );
				PackMapEnvDataAudioV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataAudioV47( const PackMapEnvDataAudioV47& p_other );
				PackMapEnvDataAudioV47& operator=( const PackMapEnvDataAudioV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};


			GW2FORMATS_API struct PackMapEnvDataBaseEx2V47 {
				dword dummy;
			public:
				PackMapEnvDataBaseEx2V47( );
				PackMapEnvDataBaseEx2V47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataBaseEx2V47( const PackMapEnvDataBaseEx2V47& p_other );
				PackMapEnvDataBaseEx2V47& operator=( const PackMapEnvDataBaseEx2V47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataBaseExV47 {
				helpers::Ptr<PackMapEnvDataBaseEx2V47> ext2;
				float brightTime;
				float dimTime;
				float darkCoeff;
				float darkExp;
				float darkMin;
				float darkMax;
				float brightMin;
				float brightMax;
				float brightScale;
				float darkScale;
				float4 waterReflectionParams;
			public:
				PackMapEnvDataBaseExV47( );
				PackMapEnvDataBaseExV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataBaseExV47( const PackMapEnvDataBaseExV47& p_other );
				PackMapEnvDataBaseExV47& operator=( const PackMapEnvDataBaseExV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataShapeV47 {
				float3 center;
				float height;
				float fadeHorizInner;
				float fadeHorizOuter;
				float fadeVertical;
				helpers::Array<float2> vertexArray;
				byte shapeType;
			public:
				PackMapEnvDataShapeV47( );
				PackMapEnvDataShapeV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataShapeV47( const PackMapEnvDataShapeV47& p_other );
				PackMapEnvDataShapeV47& operator=( const PackMapEnvDataShapeV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataLocalV75 {
				helpers::Array<PackMapEnvDataLightingV76> lighting;
				helpers::Array<PackMapEnvDataLightingCharGroupV47> lightingCharGroups;
				helpers::Ptr<PackMapEnvDataCloudsV76> clouds;
				helpers::RefList<PackMapEnvDataColoredLightRingsV47> coloredLightRings;
				helpers::RefList<PackMapEnvDataEffectV76> effect;
				helpers::RefList<PackMapEnvDataHazeV76> haze;
				helpers::RefList<PackMapEnvDataPFieldV76> particleFields;
				helpers::Array<PackMapEnvDataPFieldCutoutV47> particleFieldCutouts;
				helpers::Ptr<PackMapEnvDataSkyV76> sky;
				helpers::Ptr<PackMapEnvDataSkyCardsV76> skyCards;
				helpers::Ptr<PackMapEnvDataSpawnGroupsV47> spawns;
				helpers::RefList<PackMapEnvDataWaterV76> water;
				helpers::RefList<PackMapEnvDataWindV76> wind;
				helpers::RefList<PackMapEnvDataAudioV47> audio;
				helpers::WString name;
				helpers::Array<byte> nightMods;
				qword bindTarget;
				dword flags;
				helpers::Ptr<PackMapEnvDataBaseExV47> ext;
				byte type;
				qword guid;
				helpers::Array<PackMapEnvDataShapeV47> shapeArray;
			public:
				PackMapEnvDataLocalV75( );
				PackMapEnvDataLocalV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataLocalV75( const PackMapEnvDataLocalV75& p_other );
				PackMapEnvDataLocalV75& operator=( const PackMapEnvDataLocalV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSkyModeTexV76 {
				helpers::FileName texPathNE;
				helpers::FileName texPathSW;
				helpers::FileName texPathT;
			public:
				PackMapEnvDataSkyModeTexV76( );
				PackMapEnvDataSkyModeTexV76( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkyModeTexV76( const PackMapEnvDataSkyModeTexV76& p_other );
				PackMapEnvDataSkyModeTexV76& operator=( const PackMapEnvDataSkyModeTexV76& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSkyModeCubeTexV47 {
				helpers::FileName texPathE;
				helpers::FileName texPathW;
				helpers::FileName texPathN;
				helpers::FileName texPathS;
				helpers::FileName texPathB;
				helpers::FileName texPathT;
			public:
				PackMapEnvDataSkyModeCubeTexV47( );
				PackMapEnvDataSkyModeCubeTexV47( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkyModeCubeTexV47( const PackMapEnvDataSkyModeCubeTexV47& p_other );
				PackMapEnvDataSkyModeCubeTexV47& operator=( const PackMapEnvDataSkyModeCubeTexV47& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataGlobalV76 {
				helpers::Array<PackMapEnvDataLightingV76> lighting;
				helpers::Array<PackMapEnvDataLightingCharGroupV47> lightingCharGroups;
				helpers::Ptr<PackMapEnvDataCloudsV76> clouds;
				helpers::RefList<PackMapEnvDataColoredLightRingsV47> coloredLightRings;
				helpers::RefList<PackMapEnvDataEffectV76> effect;
				helpers::RefList<PackMapEnvDataHazeV76> haze;
				helpers::RefList<PackMapEnvDataPFieldV76> particleFields;
				helpers::Array<PackMapEnvDataPFieldCutoutV47> particleFieldCutouts;
				helpers::Ptr<PackMapEnvDataSkyV76> sky;
				helpers::Ptr<PackMapEnvDataSkyCardsV76> skyCards;
				helpers::Ptr<PackMapEnvDataSpawnGroupsV47> spawns;
				helpers::RefList<PackMapEnvDataWaterV76> water;
				helpers::RefList<PackMapEnvDataWindV76> wind;
				helpers::RefList<PackMapEnvDataAudioV47> audio;
				helpers::WString name;
				helpers::Array<byte> nightMods;
				qword bindTarget;
				dword flags;
				helpers::Ptr<PackMapEnvDataBaseExV47> ext;
				helpers::Array<PackMapEnvDataSkyModeTexV76> skyModeTex;
				helpers::FileName starFile;
				helpers::Array<PackMapEnvDataSkyModeCubeTexV47> skyModeCubeTex;
			public:
				PackMapEnvDataGlobalV76( );
				PackMapEnvDataGlobalV76( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataGlobalV76( const PackMapEnvDataGlobalV76& p_other );
				PackMapEnvDataGlobalV76& operator=( const PackMapEnvDataGlobalV76& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvironmentV76 {
				helpers::Array<PackMapEnvDataLocalV75> dataLocalArray;
				helpers::Ptr<PackMapEnvDataGlobalV76> dataGlobal;
			public:
				PackMapEnvironmentV76( );
				PackMapEnvironmentV76( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvironmentV76( const PackMapEnvironmentV76& p_other );
				PackMapEnvironmentV76& operator=( const PackMapEnvironmentV76& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef PackMapEnvironmentV76 PackMapEnvironment;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::mapc, fcc::env> { typedef chunks::PackMapEnvironment Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPENVIRONMENT_H_INCLUDED
