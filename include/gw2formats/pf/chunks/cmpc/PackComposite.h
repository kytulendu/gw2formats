// File: gw2formats/pf/chunks/cmpc/PackComposite.h

/*
Copyright (C) 2014-2017 Khral Steelforge <https://github.com/kytulendu>
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

			GW2FORMATS_API struct PackCompositeBlitRectSetV19 {
				helpers::WString name;
				dword2 size;
				helpers::Array<byte> rectIndex;
				helpers::Array<dword4> rectArray;
			public:
				PackCompositeBlitRectSetV19( );
				PackCompositeBlitRectSetV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeBlitRectSetV19( const PackCompositeBlitRectSetV19& p_other );
				PackCompositeBlitRectSetV19& operator=( const PackCompositeBlitRectSetV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeBoneScaleParamV19 {
				qword name;
				byte flags;
				float max;
				float min;
				float3 rotate;
				float3 scale;
				float3 translate;
			public:
				PackCompositeBoneScaleParamV19( );
				PackCompositeBoneScaleParamV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeBoneScaleParamV19( const PackCompositeBoneScaleParamV19& p_other );
				PackCompositeBoneScaleParamV19& operator=( const PackCompositeBoneScaleParamV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeBoneScaleRegionV19 {
				qword name;
				float value;
				helpers::Array<PackCompositeBoneScaleParamV19> bone;
			public:
				PackCompositeBoneScaleRegionV19( );
				PackCompositeBoneScaleRegionV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeBoneScaleRegionV19( const PackCompositeBoneScaleRegionV19& p_other );
				PackCompositeBoneScaleRegionV19& operator=( const PackCompositeBoneScaleRegionV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeMorphWeightV19 {
				qword name;
				float value;
			public:
				PackCompositeMorphWeightV19( );
				PackCompositeMorphWeightV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeMorphWeightV19( const PackCompositeMorphWeightV19& p_other );
				PackCompositeMorphWeightV19& operator=( const PackCompositeMorphWeightV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeBoneScaleV19 {
				helpers::Array<PackCompositeBoneScaleRegionV19> bodyRegion;
				helpers::Array<PackCompositeMorphWeightV19> morphWeight;
			public:
				PackCompositeBoneScaleV19( );
				PackCompositeBoneScaleV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeBoneScaleV19( const PackCompositeBoneScaleV19& p_other );
				PackCompositeBoneScaleV19& operator=( const PackCompositeBoneScaleV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeBoneScaleFileV19 {
				helpers::WString fileName;
			public:
				PackCompositeBoneScaleFileV19( );
				PackCompositeBoneScaleFileV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeBoneScaleFileV19( const PackCompositeBoneScaleFileV19& p_other );
				PackCompositeBoneScaleFileV19& operator=( const PackCompositeBoneScaleFileV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeFileDataV19 {
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
				PackCompositeFileDataV19( );
				PackCompositeFileDataV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeFileDataV19( const PackCompositeFileDataV19& p_other );
				PackCompositeFileDataV19& operator=( const PackCompositeFileDataV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeSkinPatternV19 {
				helpers::FileName chest;
				helpers::FileName face;
				helpers::FileName feet;
				helpers::FileName hands;
				helpers::FileName legs;
				helpers::FileName ears;
			public:
				PackCompositeSkinPatternV19( );
				PackCompositeSkinPatternV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeSkinPatternV19( const PackCompositeSkinPatternV19& p_other );
				PackCompositeSkinPatternV19& operator=( const PackCompositeSkinPatternV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeSkinStyleV19 {
				qword chest;
				qword feet;
				qword hands;
				qword legs;
			public:
				PackCompositeSkinStyleV19( );
				PackCompositeSkinStyleV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeSkinStyleV19( const PackCompositeSkinStyleV19& p_other );
				PackCompositeSkinStyleV19& operator=( const PackCompositeSkinStyleV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeColorV19 {
				byte brightness;
				byte contrast;
				byte hue;
				byte saturation;
				byte lightness;
			public:
				PackCompositeColorV19( );
				PackCompositeColorV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeColorV19( const PackCompositeColorV19& p_other );
				PackCompositeColorV19& operator=( const PackCompositeColorV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeVariantComponentV19 {
				qword nameToken;
				PackCompositeColorV19 color0;
				PackCompositeColorV19 color1;
				PackCompositeColorV19 color2;
				PackCompositeColorV19 color3;
			public:
				PackCompositeVariantComponentV19( );
				PackCompositeVariantComponentV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeVariantComponentV19( const PackCompositeVariantComponentV19& p_other );
				PackCompositeVariantComponentV19& operator=( const PackCompositeVariantComponentV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeVariantV19 {
				qword token;
				dword boneScaleIndex;
				helpers::Array<PackCompositeVariantComponentV19> components;
				PackCompositeColorV19 eyeColor;
				PackCompositeColorV19 hairColor;
				PackCompositeColorV19 hairColor2;
				PackCompositeColorV19 patternColor;
				PackCompositeColorV19 skinColor;
				dword skinIndex;
				dword skinStyle;
			public:
				PackCompositeVariantV19( );
				PackCompositeVariantV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeVariantV19( const PackCompositeVariantV19& p_other );
				PackCompositeVariantV19& operator=( const PackCompositeVariantV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeAnimOverrideV19 {
				qword animRole;
				helpers::FileName filepath;
			public:
				PackCompositeAnimOverrideV19( );
				PackCompositeAnimOverrideV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeAnimOverrideV19( const PackCompositeAnimOverrideV19& p_other );
				PackCompositeAnimOverrideV19& operator=( const PackCompositeAnimOverrideV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeRaceDataV19 {
				helpers::WString name;
				qword nameToken;
				qword baseHeadToken;
				helpers::Array<qword> beard;
				helpers::Array<PackCompositeBoneScaleV19> bodyBoneScales;
				helpers::Array<PackCompositeBoneScaleFileV19> bodyBoneScaleFiles;
				helpers::Array<qword> ears;
				helpers::WString eyeColorPalette;
				helpers::Array<PackCompositeBoneScaleV19> faceBoneScales;
				helpers::Array<qword> faces;
				helpers::Array<PackCompositeFileDataV19> fileData;
				dword flags;
				helpers::Array<qword> hairStyles;
				helpers::WString hairColorPalette;
				helpers::FileName skeletonFile;
				helpers::Array<PackCompositeSkinPatternV19> skinPatterns;
				helpers::WString skinColorPalette;
				helpers::WString skinPatternPalette;
				helpers::Array<PackCompositeSkinStyleV19> skinStyles;
				dword type;
				qword variantRefRace;
				helpers::Array<PackCompositeVariantV19> variants;
				helpers::Array<PackCompositeAnimOverrideV19> animOverrides;
			public:
				PackCompositeRaceDataV19( );
				PackCompositeRaceDataV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeRaceDataV19( const PackCompositeRaceDataV19& p_other );
				PackCompositeRaceDataV19& operator=( const PackCompositeRaceDataV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeV19 {
				helpers::Array<dword> armorColorIds;
				helpers::Array<PackCompositeBlitRectSetV19> blitRects;
				helpers::Array<PackCompositeBoneScaleV19> boneScales;
				helpers::Array<PackCompositeRaceDataV19> raceSexData;
				word configVersion;
			public:
				PackCompositeV19( );
				PackCompositeV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeV19( const PackCompositeV19& p_other );
				PackCompositeV19& operator=( const PackCompositeV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef PackCompositeV19 PackComposite;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::cmpc, fcc::comp> { typedef chunks::PackComposite Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_CMPC_PACKCOMPOSITE_H_INCLUDED
