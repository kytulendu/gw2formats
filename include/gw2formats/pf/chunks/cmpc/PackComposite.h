// File: gw2formats/pf/chunks/cmpc/PackComposite.h

/*
Copyright (C) 2014-2017 Khralkatorrix <https://github.com/kytulendu>
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

// Filetype: cmpc
// Chunktype: comp

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_CMPC_PACKCOMPOSITE_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_CMPC_PACKCOMPOSITE_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/FileName.h>
#include <gw2formats/pf/helpers/Vector.h>
#include <gw2formats/pf/helpers/WString.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			GW2FORMATS_API struct PackCompositeBlitRectSetV20 {
				helpers::WString name;
				dword2 size;
				helpers::Array<byte> rectIndex;
				helpers::Array<dword4> rectArray;
			public:
				PackCompositeBlitRectSetV20( );
				PackCompositeBlitRectSetV20( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeBlitRectSetV20( const PackCompositeBlitRectSetV20& p_other );
				PackCompositeBlitRectSetV20& operator=( const PackCompositeBlitRectSetV20& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeBoneScaleParamV20 {
				qword name;
				byte flags;
				float max;
				float min;
				float3 rotate;
				float3 scale;
				float3 translate;
			public:
				PackCompositeBoneScaleParamV20( );
				PackCompositeBoneScaleParamV20( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeBoneScaleParamV20( const PackCompositeBoneScaleParamV20& p_other );
				PackCompositeBoneScaleParamV20& operator=( const PackCompositeBoneScaleParamV20& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeBoneScaleRegionV20 {
				qword name;
				float value;
				helpers::Array<PackCompositeBoneScaleParamV20> bone;
			public:
				PackCompositeBoneScaleRegionV20( );
				PackCompositeBoneScaleRegionV20( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeBoneScaleRegionV20( const PackCompositeBoneScaleRegionV20& p_other );
				PackCompositeBoneScaleRegionV20& operator=( const PackCompositeBoneScaleRegionV20& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeMorphWeightV20 {
				qword name;
				float value;
			public:
				PackCompositeMorphWeightV20( );
				PackCompositeMorphWeightV20( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeMorphWeightV20( const PackCompositeMorphWeightV20& p_other );
				PackCompositeMorphWeightV20& operator=( const PackCompositeMorphWeightV20& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeBoneScaleV20 {
				helpers::Array<PackCompositeBoneScaleRegionV20> bodyRegion;
				helpers::Array<PackCompositeMorphWeightV20> morphWeight;
			public:
				PackCompositeBoneScaleV20( );
				PackCompositeBoneScaleV20( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeBoneScaleV20( const PackCompositeBoneScaleV20& p_other );
				PackCompositeBoneScaleV20& operator=( const PackCompositeBoneScaleV20& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeBoneScaleFileV20 {
				helpers::WString fileName;
			public:
				PackCompositeBoneScaleFileV20( );
				PackCompositeBoneScaleFileV20( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeBoneScaleFileV20( const PackCompositeBoneScaleFileV20& p_other );
				PackCompositeBoneScaleFileV20& operator=( const PackCompositeBoneScaleFileV20& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeFileDataV20 {
				qword name;
				byte type;
				byte flags;
				qword animRoleOverride;
				helpers::FileName meshBase;
				helpers::FileName meshOverlap;
				helpers::FileName maskDye1;
				helpers::FileName maskDye2;
				helpers::FileName maskDye3;
				helpers::FileName maskDye4;
				helpers::FileName maskCut;
				helpers::FileName textureBase;
				helpers::FileName textureNormal;
				dword dyeFlags;
				dword hideFlags;
				dword skinFlags;
				byte blitRectIndex;
			public:
				PackCompositeFileDataV20( );
				PackCompositeFileDataV20( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeFileDataV20( const PackCompositeFileDataV20& p_other );
				PackCompositeFileDataV20& operator=( const PackCompositeFileDataV20& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeSkinPatternV20 {
				helpers::FileName chest;
				helpers::FileName face;
				helpers::FileName feet;
				helpers::FileName hands;
				helpers::FileName legs;
				helpers::FileName ears;
			public:
				PackCompositeSkinPatternV20( );
				PackCompositeSkinPatternV20( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeSkinPatternV20( const PackCompositeSkinPatternV20& p_other );
				PackCompositeSkinPatternV20& operator=( const PackCompositeSkinPatternV20& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeSkinStyleV20 {
				qword chest;
				qword feet;
				qword hands;
				qword legs;
			public:
				PackCompositeSkinStyleV20( );
				PackCompositeSkinStyleV20( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeSkinStyleV20( const PackCompositeSkinStyleV20& p_other );
				PackCompositeSkinStyleV20& operator=( const PackCompositeSkinStyleV20& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeColorV20 {
				byte brightness;
				byte contrast;
				byte hue;
				byte saturation;
				byte lightness;
			public:
				PackCompositeColorV20( );
				PackCompositeColorV20( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeColorV20( const PackCompositeColorV20& p_other );
				PackCompositeColorV20& operator=( const PackCompositeColorV20& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeVariantComponentV20 {
				qword nameToken;
				PackCompositeColorV20 color0;
				PackCompositeColorV20 color1;
				PackCompositeColorV20 color2;
				PackCompositeColorV20 color3;
			public:
				PackCompositeVariantComponentV20( );
				PackCompositeVariantComponentV20( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeVariantComponentV20( const PackCompositeVariantComponentV20& p_other );
				PackCompositeVariantComponentV20& operator=( const PackCompositeVariantComponentV20& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeVariantV20 {
				qword token;
				dword boneScaleIndex;
				helpers::Array<PackCompositeVariantComponentV20> components;
				PackCompositeColorV20 eyeColor;
				PackCompositeColorV20 hairColor;
				PackCompositeColorV20 hairColor2;
				PackCompositeColorV20 patternColor;
				PackCompositeColorV20 skinColor;
				dword skinIndex;
				dword skinStyle;
			public:
				PackCompositeVariantV20( );
				PackCompositeVariantV20( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeVariantV20( const PackCompositeVariantV20& p_other );
				PackCompositeVariantV20& operator=( const PackCompositeVariantV20& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeAnimOverrideV20 {
				qword animRole;
				helpers::FileName filepath;
			public:
				PackCompositeAnimOverrideV20( );
				PackCompositeAnimOverrideV20( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeAnimOverrideV20( const PackCompositeAnimOverrideV20& p_other );
				PackCompositeAnimOverrideV20& operator=( const PackCompositeAnimOverrideV20& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeRaceDataV20 {
				helpers::WString name;
				qword nameToken;
				qword baseHeadToken;
				helpers::Array<qword> beard;
				helpers::Array<PackCompositeBoneScaleV20> bodyBoneScales;
				helpers::Array<PackCompositeBoneScaleFileV20> bodyBoneScaleFiles;
				helpers::Array<qword> ears;
				helpers::WString eyeColorPalette;
				helpers::Array<PackCompositeBoneScaleV20> faceBoneScales;
				helpers::Array<qword> faces;
				helpers::Array<PackCompositeFileDataV20> fileData;
				dword flags;
				helpers::Array<qword> hairStyles;
				helpers::WString hairColorPalette;
				helpers::FileName skeletonFile;
				helpers::Array<PackCompositeSkinPatternV20> skinPatterns;
				helpers::WString skinColorPalette;
				helpers::WString skinPatternPalette;
				helpers::Array<PackCompositeSkinStyleV20> skinStyles;
				dword type;
				qword variantRefRace;
				helpers::Array<PackCompositeVariantV20> variants;
				helpers::Array<PackCompositeAnimOverrideV20> animOverrides;
			public:
				PackCompositeRaceDataV20( );
				PackCompositeRaceDataV20( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeRaceDataV20( const PackCompositeRaceDataV20& p_other );
				PackCompositeRaceDataV20& operator=( const PackCompositeRaceDataV20& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeV20 {
				helpers::Array<dword> armorColorIds;
				helpers::Array<PackCompositeBlitRectSetV20> blitRects;
				helpers::Array<PackCompositeBoneScaleV20> boneScales;
				helpers::Array<PackCompositeRaceDataV20> raceSexData;
				word configVersion;
			public:
				PackCompositeV20( );
				PackCompositeV20( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeV20( const PackCompositeV20& p_other );
				PackCompositeV20& operator=( const PackCompositeV20& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef PackCompositeV20 PackComposite;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::cmpc, fcc::comp> { typedef chunks::PackComposite Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_CMPC_PACKCOMPOSITE_H_INCLUDED
