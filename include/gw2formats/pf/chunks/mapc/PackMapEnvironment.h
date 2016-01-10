// File: gw2formats/pf/chunks/mapc/PackMapEnvironment.h

/*
Copyright (C) 2014 Khral Steelforge <https://github.com/kytulendu>
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

			GW2FORMATS_API struct PackMapEnvDataLightV75 {
				byte3 color;
				float intensity;
				float3 direction;
			public:
				PackMapEnvDataLightV75( );
				PackMapEnvDataLightV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataLightV75( const PackMapEnvDataLightV75& p_other );
				PackMapEnvDataLightV75& operator=( const PackMapEnvDataLightV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataLightingV75 {
				helpers::RefList<PackMapEnvDataLightV75> lights;
				float shadowInfluence;
				byte3 backlightColor;
				float backlightIntensity;
			public:
				PackMapEnvDataLightingV75( );
				PackMapEnvDataLightingV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataLightingV75( const PackMapEnvDataLightingV75& p_other );
				PackMapEnvDataLightingV75& operator=( const PackMapEnvDataLightingV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataLightingCharV46 {
				float sunScale;
				float saturation;
				float sunFill;
				float ambScale;
				float ambFill;
				byte flags;
			public:
				PackMapEnvDataLightingCharV46( );
				PackMapEnvDataLightingCharV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataLightingCharV46( const PackMapEnvDataLightingCharV46& p_other );
				PackMapEnvDataLightingCharV46& operator=( const PackMapEnvDataLightingCharV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataLightingCharGroupV46 {
				helpers::Array<PackMapEnvDataLightingCharV46> lightingChar;
			public:
				PackMapEnvDataLightingCharGroupV46( );
				PackMapEnvDataLightingCharGroupV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataLightingCharGroupV46( const PackMapEnvDataLightingCharGroupV46& p_other );
				PackMapEnvDataLightingCharGroupV46& operator=( const PackMapEnvDataLightingCharGroupV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataLayerAttributesV75 {
				float brightness;
				float density;
				float haze;
				float lightIntensity;
				float2 velocity;
				float fadeWidth;
				float fadeEnd;
				dword reserved;
			public:
				PackMapEnvDataLayerAttributesV75( );
				PackMapEnvDataLayerAttributesV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataLayerAttributesV75( const PackMapEnvDataLayerAttributesV75& p_other );
				PackMapEnvDataLayerAttributesV75& operator=( const PackMapEnvDataLayerAttributesV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataLayerV75 {
				float altitude;
				float cutOut;
				float depth;
				float extent;
				float scale;
				helpers::FileName texture;
				helpers::Array<PackMapEnvDataLayerAttributesV75> attributes;
				helpers::WString name;
				dword reserved;
			public:
				PackMapEnvDataLayerV75( );
				PackMapEnvDataLayerV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataLayerV75( const PackMapEnvDataLayerV75& p_other );
				PackMapEnvDataLayerV75& operator=( const PackMapEnvDataLayerV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataCloudsV75 {
				helpers::Array<PackMapEnvDataLayerV75> layers;
			public:
				PackMapEnvDataCloudsV75( );
				PackMapEnvDataCloudsV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataCloudsV75( const PackMapEnvDataCloudsV75& p_other );
				PackMapEnvDataCloudsV75& operator=( const PackMapEnvDataCloudsV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataColoredLightRingsV46 {
				float2 range;
				float distances[6];
				byte4 lightColors[6];
				byte4 shadowColors[6];
			public:
				PackMapEnvDataColoredLightRingsV46( );
				PackMapEnvDataColoredLightRingsV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataColoredLightRingsV46( const PackMapEnvDataColoredLightRingsV46& p_other );
				PackMapEnvDataColoredLightRingsV46& operator=( const PackMapEnvDataColoredLightRingsV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataEffectExV46 {
				dword dummy;
			public:
				PackMapEnvDataEffectExV46( );
				PackMapEnvDataEffectExV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataEffectExV46( const PackMapEnvDataEffectExV46& p_other );
				PackMapEnvDataEffectExV46& operator=( const PackMapEnvDataEffectExV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataEffectV75 {
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
				helpers::Ptr<PackMapEnvDataEffectExV46> ext;
			public:
				PackMapEnvDataEffectV75( );
				PackMapEnvDataEffectV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataEffectV75( const PackMapEnvDataEffectV75& p_other );
				PackMapEnvDataEffectV75& operator=( const PackMapEnvDataEffectV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataHazeV75 {
				byte4 nearColor;
				byte4 farColor;
				float2 distRange;
				byte4 heightColor;
				float2 heightRange;
				float depthCue;
				float2 sunDirRange;
			public:
				PackMapEnvDataHazeV75( );
				PackMapEnvDataHazeV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataHazeV75( const PackMapEnvDataHazeV75& p_other );
				PackMapEnvDataHazeV75& operator=( const PackMapEnvDataHazeV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataPFieldV75 {
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
				PackMapEnvDataPFieldV75( );
				PackMapEnvDataPFieldV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataPFieldV75( const PackMapEnvDataPFieldV75& p_other );
				PackMapEnvDataPFieldV75& operator=( const PackMapEnvDataPFieldV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataPFieldCutoutV46 {
				helpers::WString name;
				float4 x;
				float4 y;
				float4 z;
			public:
				PackMapEnvDataPFieldCutoutV46( );
				PackMapEnvDataPFieldCutoutV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataPFieldCutoutV46( const PackMapEnvDataPFieldCutoutV46& p_other );
				PackMapEnvDataPFieldCutoutV46& operator=( const PackMapEnvDataPFieldCutoutV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSkyV75 {
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
				PackMapEnvDataSkyV75( );
				PackMapEnvDataSkyV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkyV75( const PackMapEnvDataSkyV75& p_other );
				PackMapEnvDataSkyV75& operator=( const PackMapEnvDataSkyV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvLensFlareAtomV46 {
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
				PackMapEnvLensFlareAtomV46( );
				PackMapEnvLensFlareAtomV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvLensFlareAtomV46( const PackMapEnvLensFlareAtomV46& p_other );
				PackMapEnvLensFlareAtomV46& operator=( const PackMapEnvLensFlareAtomV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvLensFlareTextureV46 {
				helpers::FileName texture;
			public:
				PackMapEnvLensFlareTextureV46( );
				PackMapEnvLensFlareTextureV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvLensFlareTextureV46( const PackMapEnvLensFlareTextureV46& p_other );
				PackMapEnvLensFlareTextureV46& operator=( const PackMapEnvLensFlareTextureV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataShaderConstantV46 {
				dword token;
				float4 value;
			public:
				PackMapEnvDataShaderConstantV46( );
				PackMapEnvDataShaderConstantV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataShaderConstantV46( const PackMapEnvDataShaderConstantV46& p_other );
				PackMapEnvDataShaderConstantV46& operator=( const PackMapEnvDataShaderConstantV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvLensFlareV46 {
				helpers::Array<PackMapEnvLensFlareAtomV46> atoms;
				helpers::Array<PackMapEnvLensFlareTextureV46> textures;
				helpers::FileName material;
				float2 fadeBand;
				float2 reverseFadeBand;
				float opacityCoeff;
				byte flags;
				helpers::Array<PackMapEnvDataShaderConstantV46> constants;
			public:
				PackMapEnvLensFlareV46( );
				PackMapEnvLensFlareV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvLensFlareV46( const PackMapEnvLensFlareV46& p_other );
				PackMapEnvLensFlareV46& operator=( const PackMapEnvLensFlareV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSkyCardAttributesExV46 {
				dword dummy;
			public:
				PackMapEnvDataSkyCardAttributesExV46( );
				PackMapEnvDataSkyCardAttributesExV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkyCardAttributesExV46( const PackMapEnvDataSkyCardAttributesExV46& p_other );
				PackMapEnvDataSkyCardAttributesExV46& operator=( const PackMapEnvDataSkyCardAttributesExV46& p_other );
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
				helpers::Ptr<PackMapEnvLensFlareV46> lensFlare;
				helpers::Ptr<PackMapEnvDataSkyCardAttributesExV46> ext;
			public:
				PackMapEnvDataSkyCardAttributesV75( );
				PackMapEnvDataSkyCardAttributesV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkyCardAttributesV75( const PackMapEnvDataSkyCardAttributesV75& p_other );
				PackMapEnvDataSkyCardAttributesV75& operator=( const PackMapEnvDataSkyCardAttributesV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataShaderTextureV46 {
				helpers::FileName filename;
				float4 textureUV;
			public:
				PackMapEnvDataShaderTextureV46( );
				PackMapEnvDataShaderTextureV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataShaderTextureV46( const PackMapEnvDataShaderTextureV46& p_other );
				PackMapEnvDataShaderTextureV46& operator=( const PackMapEnvDataShaderTextureV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackEnvDataSkyCardAnimationV46 {
				float2 textureAnimTranslation;
				float2 textureAnimScaleRangeX;
				float2 textureAnimScaleRangeY;
				float2 textureAnimScaleSpeed;
				float textureAnimRotation;
				dword texCoords;
			public:
				PackEnvDataSkyCardAnimationV46( );
				PackEnvDataSkyCardAnimationV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackEnvDataSkyCardAnimationV46( const PackEnvDataSkyCardAnimationV46& p_other );
				PackEnvDataSkyCardAnimationV46& operator=( const PackEnvDataSkyCardAnimationV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSkycardFlipbookV46 {
				dword rows;
				dword columns;
				dword start;
				dword count;
				float fps;
			public:
				PackMapEnvDataSkycardFlipbookV46( );
				PackMapEnvDataSkycardFlipbookV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkycardFlipbookV46( const PackMapEnvDataSkycardFlipbookV46& p_other );
				PackMapEnvDataSkycardFlipbookV46& operator=( const PackMapEnvDataSkycardFlipbookV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSkyCardMaterialV46 {
				helpers::FileName filename;
				helpers::Array<PackMapEnvDataShaderConstantV46> constants;
				helpers::Array<PackMapEnvDataShaderTextureV46> textures;
				PackEnvDataSkyCardAnimationV46 textureAnimation;
				PackMapEnvDataSkycardFlipbookV46 flipbook;
			public:
				PackMapEnvDataSkyCardMaterialV46( );
				PackMapEnvDataSkyCardMaterialV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkyCardMaterialV46( const PackMapEnvDataSkyCardMaterialV46& p_other );
				PackMapEnvDataSkyCardMaterialV46& operator=( const PackMapEnvDataSkyCardMaterialV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSkyCardExV46 {
				dword dummy;
			public:
				PackMapEnvDataSkyCardExV46( );
				PackMapEnvDataSkyCardExV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkyCardExV46( const PackMapEnvDataSkyCardExV46& p_other );
				PackMapEnvDataSkyCardExV46& operator=( const PackMapEnvDataSkyCardExV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSkyCardV75 {
				PackMapEnvDataSkyCardAttributesV75 day;
				PackMapEnvDataSkyCardAttributesV75 night;
				dword flags;
				helpers::WString name;
				float3 location;
				helpers::Ptr<PackMapEnvDataSkyCardMaterialV46> material;
				helpers::Ptr<PackMapEnvDataSkyCardExV46> ext;
			public:
				PackMapEnvDataSkyCardV75( );
				PackMapEnvDataSkyCardV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkyCardV75( const PackMapEnvDataSkyCardV75& p_other );
				PackMapEnvDataSkyCardV75& operator=( const PackMapEnvDataSkyCardV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSkyCardsV75 {
				helpers::Array<PackMapEnvDataSkyCardV75> cards;
			public:
				PackMapEnvDataSkyCardsV75( );
				PackMapEnvDataSkyCardsV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkyCardsV75( const PackMapEnvDataSkyCardsV75& p_other );
				PackMapEnvDataSkyCardsV75& operator=( const PackMapEnvDataSkyCardsV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSpawnModelDataV46 {
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
				PackMapEnvDataSpawnModelDataV46( );
				PackMapEnvDataSpawnModelDataV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSpawnModelDataV46( const PackMapEnvDataSpawnModelDataV46& p_other );
				PackMapEnvDataSpawnModelDataV46& operator=( const PackMapEnvDataSpawnModelDataV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSpawnListV46 {
				helpers::Array<PackMapEnvDataSpawnModelDataV46> spawns;
			public:
				PackMapEnvDataSpawnListV46( );
				PackMapEnvDataSpawnListV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSpawnListV46( const PackMapEnvDataSpawnListV46& p_other );
				PackMapEnvDataSpawnListV46& operator=( const PackMapEnvDataSpawnListV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSpawnGroupsV46 {
				helpers::Array<PackMapEnvDataSpawnListV46> spawnGroups;
				helpers::Array<qword> targets;
			public:
				PackMapEnvDataSpawnGroupsV46( );
				PackMapEnvDataSpawnGroupsV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSpawnGroupsV46( const PackMapEnvDataSpawnGroupsV46& p_other );
				PackMapEnvDataSpawnGroupsV46& operator=( const PackMapEnvDataSpawnGroupsV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataWaterV75 {
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
				PackMapEnvDataWaterV75( );
				PackMapEnvDataWaterV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataWaterV75( const PackMapEnvDataWaterV75& p_other );
				PackMapEnvDataWaterV75& operator=( const PackMapEnvDataWaterV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataWindV75 {
				byte azimuth;
				byte elevation;
				byte noise;
				byte speed;
				byte gust;
				byte gustFreq;
				byte gustSpeed;
			public:
				PackMapEnvDataWindV75( );
				PackMapEnvDataWindV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataWindV75( const PackMapEnvDataWindV75& p_other );
				PackMapEnvDataWindV75& operator=( const PackMapEnvDataWindV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataAudioV46 {
				qword token;
			public:
				PackMapEnvDataAudioV46( );
				PackMapEnvDataAudioV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataAudioV46( const PackMapEnvDataAudioV46& p_other );
				PackMapEnvDataAudioV46& operator=( const PackMapEnvDataAudioV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};


			GW2FORMATS_API struct PackMapEnvDataBaseEx2V46 {
				dword dummy;
			public:
				PackMapEnvDataBaseEx2V46( );
				PackMapEnvDataBaseEx2V46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataBaseEx2V46( const PackMapEnvDataBaseEx2V46& p_other );
				PackMapEnvDataBaseEx2V46& operator=( const PackMapEnvDataBaseEx2V46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataBaseExV46 {
				helpers::Ptr<PackMapEnvDataBaseEx2V46> ext2;
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
				PackMapEnvDataBaseExV46( );
				PackMapEnvDataBaseExV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataBaseExV46( const PackMapEnvDataBaseExV46& p_other );
				PackMapEnvDataBaseExV46& operator=( const PackMapEnvDataBaseExV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataShapeV46 {
				float3 center;
				float height;
				float fadeHorizInner;
				float fadeHorizOuter;
				float fadeVertical;
				helpers::Array<float2> vertexArray;
				byte shapeType;
			public:
				PackMapEnvDataShapeV46( );
				PackMapEnvDataShapeV46( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataShapeV46( const PackMapEnvDataShapeV46& p_other );
				PackMapEnvDataShapeV46& operator=( const PackMapEnvDataShapeV46& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataLocalV75 {
				helpers::Array<PackMapEnvDataLightingV75> lighting;
				helpers::Array<PackMapEnvDataLightingCharGroupV46> lightingCharGroups;
				helpers::Ptr<PackMapEnvDataCloudsV75> clouds;
				helpers::RefList<PackMapEnvDataColoredLightRingsV46> coloredLightRings;
				helpers::RefList<PackMapEnvDataEffectV75> effect;
				helpers::RefList<PackMapEnvDataHazeV75> haze;
				helpers::RefList<PackMapEnvDataPFieldV75> particleFields;
				helpers::Array<PackMapEnvDataPFieldCutoutV46> particleFieldCutouts;
				helpers::Ptr<PackMapEnvDataSkyV75> sky;
				helpers::Ptr<PackMapEnvDataSkyCardsV75> skyCards;
				helpers::Ptr<PackMapEnvDataSpawnGroupsV46> spawns;
				helpers::RefList<PackMapEnvDataWaterV75> water;
				helpers::RefList<PackMapEnvDataWindV75> wind;
				helpers::RefList<PackMapEnvDataAudioV46> audio;
				helpers::WString name;
				helpers::Array<byte> nightMods;
				qword bindTarget;
				dword flags;
				helpers::Ptr<PackMapEnvDataBaseExV46> ext;
				byte type;
				qword guid;
				helpers::Array<PackMapEnvDataShapeV46> shapeArray;
			public:
				PackMapEnvDataLocalV75( );
				PackMapEnvDataLocalV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataLocalV75( const PackMapEnvDataLocalV75& p_other );
				PackMapEnvDataLocalV75& operator=( const PackMapEnvDataLocalV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataSkyModeTexV75 {
				helpers::FileName texPathNE;
				helpers::FileName texPathSW;
				helpers::FileName texPathT;
			public:
				PackMapEnvDataSkyModeTexV75( );
				PackMapEnvDataSkyModeTexV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataSkyModeTexV75( const PackMapEnvDataSkyModeTexV75& p_other );
				PackMapEnvDataSkyModeTexV75& operator=( const PackMapEnvDataSkyModeTexV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvDataGlobalV75 {
				helpers::Array<PackMapEnvDataLightingV75> lighting;
				helpers::Array<PackMapEnvDataLightingCharGroupV46> lightingCharGroups;
				helpers::Ptr<PackMapEnvDataCloudsV75> clouds;
				helpers::RefList<PackMapEnvDataColoredLightRingsV46> coloredLightRings;
				helpers::RefList<PackMapEnvDataEffectV75> effect;
				helpers::RefList<PackMapEnvDataHazeV75> haze;
				helpers::RefList<PackMapEnvDataPFieldV75> particleFields;
				helpers::Array<PackMapEnvDataPFieldCutoutV46> particleFieldCutouts;
				helpers::Ptr<PackMapEnvDataSkyV75> sky;
				helpers::Ptr<PackMapEnvDataSkyCardsV75> skyCards;
				helpers::Ptr<PackMapEnvDataSpawnGroupsV46> spawns;
				helpers::RefList<PackMapEnvDataWaterV75> water;
				helpers::RefList<PackMapEnvDataWindV75> wind;
				helpers::RefList<PackMapEnvDataAudioV46> audio;
				helpers::WString name;
				helpers::Array<byte> nightMods;
				qword bindTarget;
				dword flags;
				helpers::Ptr<PackMapEnvDataBaseExV46> ext;
				helpers::Array<PackMapEnvDataSkyModeTexV75> skyModeTex;
				helpers::FileName starFile;
			public:
				PackMapEnvDataGlobalV75( );
				PackMapEnvDataGlobalV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvDataGlobalV75( const PackMapEnvDataGlobalV75& p_other );
				PackMapEnvDataGlobalV75& operator=( const PackMapEnvDataGlobalV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapEnvironmentV75 {
				helpers::Array<PackMapEnvDataLocalV75> dataLocalArray;
				helpers::Ptr<PackMapEnvDataGlobalV75> dataGlobal;
			public:
				PackMapEnvironmentV75( );
				PackMapEnvironmentV75( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapEnvironmentV75( const PackMapEnvironmentV75& p_other );
				PackMapEnvironmentV75& operator=( const PackMapEnvironmentV75& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef PackMapEnvironmentV75 PackMapEnvironment;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::mapc, fcc::env> { typedef chunks::PackMapEnvironment Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPENVIRONMENT_H_INCLUDED
