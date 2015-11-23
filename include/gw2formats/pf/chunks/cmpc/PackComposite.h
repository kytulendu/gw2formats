// File: gw2formats/pf/chunks/cmpc/PackComposite.h

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

			GW2FORMATS_API struct PackCompositeBlitRectSetV18 {
				helpers::WString name;
				dword2 size;
				helpers::Array<byte> rectIndex;
				helpers::Array<dword4> rectArray;
			public:
				PackCompositeBlitRectSetV18( );
				PackCompositeBlitRectSetV18( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeBlitRectSetV18( const PackCompositeBlitRectSetV18& p_other );
				PackCompositeBlitRectSetV18& operator=( const PackCompositeBlitRectSetV18& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeBoneScaleParamV18 {
				qword name;
				byte flags;
				float max;
				float min;
				float3 rotate;
				float3 scale;
				float3 translate;
			public:
				PackCompositeBoneScaleParamV18( );
				PackCompositeBoneScaleParamV18( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeBoneScaleParamV18( const PackCompositeBoneScaleParamV18& p_other );
				PackCompositeBoneScaleParamV18& operator=( const PackCompositeBoneScaleParamV18& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeBoneScaleRegionV18 {
				qword name;
				float value;
				helpers::Array<PackCompositeBoneScaleParamV18> bone;
			public:
				PackCompositeBoneScaleRegionV18( );
				PackCompositeBoneScaleRegionV18( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeBoneScaleRegionV18( const PackCompositeBoneScaleRegionV18& p_other );
				PackCompositeBoneScaleRegionV18& operator=( const PackCompositeBoneScaleRegionV18& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeMorphWeightV18 {
				qword name;
				float value;
			public:
				PackCompositeMorphWeightV18( );
				PackCompositeMorphWeightV18( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeMorphWeightV18( const PackCompositeMorphWeightV18& p_other );
				PackCompositeMorphWeightV18& operator=( const PackCompositeMorphWeightV18& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeBoneScaleV18 {
				helpers::Array<PackCompositeBoneScaleRegionV18> bodyRegion;
				helpers::Array<PackCompositeMorphWeightV18> morphWeight;
			public:
				PackCompositeBoneScaleV18( );
				PackCompositeBoneScaleV18( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeBoneScaleV18( const PackCompositeBoneScaleV18& p_other );
				PackCompositeBoneScaleV18& operator=( const PackCompositeBoneScaleV18& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeBoneScaleFileV18 {
				helpers::WString fileName;
			public:
				PackCompositeBoneScaleFileV18( );
				PackCompositeBoneScaleFileV18( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeBoneScaleFileV18( const PackCompositeBoneScaleFileV18& p_other );
				PackCompositeBoneScaleFileV18& operator=( const PackCompositeBoneScaleFileV18& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeFileDataV18 {
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
				PackCompositeFileDataV18( );
				PackCompositeFileDataV18( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeFileDataV18( const PackCompositeFileDataV18& p_other );
				PackCompositeFileDataV18& operator=( const PackCompositeFileDataV18& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeSkinPatternV18 {
				helpers::FileName chest;
				helpers::FileName face;
				helpers::FileName feet;
				helpers::FileName hands;
				helpers::FileName legs;
				helpers::FileName ears;
			public:
				PackCompositeSkinPatternV18( );
				PackCompositeSkinPatternV18( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeSkinPatternV18( const PackCompositeSkinPatternV18& p_other );
				PackCompositeSkinPatternV18& operator=( const PackCompositeSkinPatternV18& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeSkinStyleV18 {
				qword chest;
				qword feet;
				qword hands;
				qword legs;
			public:
				PackCompositeSkinStyleV18( );
				PackCompositeSkinStyleV18( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeSkinStyleV18( const PackCompositeSkinStyleV18& p_other );
				PackCompositeSkinStyleV18& operator=( const PackCompositeSkinStyleV18& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeColorV18 {
				byte brightness;
				byte contrast;
				byte hue;
				byte saturation;
				byte lightness;
			public:
				PackCompositeColorV18( );
				PackCompositeColorV18( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeColorV18( const PackCompositeColorV18& p_other );
				PackCompositeColorV18& operator=( const PackCompositeColorV18& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeVariantComponentV18 {
				qword nameToken;
				PackCompositeColorV18 color0;
				PackCompositeColorV18 color1;
				PackCompositeColorV18 color2;
				PackCompositeColorV18 color3;
			public:
				PackCompositeVariantComponentV18( );
				PackCompositeVariantComponentV18( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeVariantComponentV18( const PackCompositeVariantComponentV18& p_other );
				PackCompositeVariantComponentV18& operator=( const PackCompositeVariantComponentV18& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeVariantV18 {
				qword token;
				dword boneScaleIndex;
				helpers::Array<PackCompositeVariantComponentV18> components;
				PackCompositeColorV18 eyeColor;
				PackCompositeColorV18 hairColor;
				PackCompositeColorV18 hairColor2;
				PackCompositeColorV18 patternColor;
				PackCompositeColorV18 skinColor;
				dword skinIndex;
			public:
				PackCompositeVariantV18( );
				PackCompositeVariantV18( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeVariantV18( const PackCompositeVariantV18& p_other );
				PackCompositeVariantV18& operator=( const PackCompositeVariantV18& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeAnimOverrideV18 {
				qword animRole;
				helpers::FileName filepath;
			public:
				PackCompositeAnimOverrideV18( );
				PackCompositeAnimOverrideV18( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeAnimOverrideV18( const PackCompositeAnimOverrideV18& p_other );
				PackCompositeAnimOverrideV18& operator=( const PackCompositeAnimOverrideV18& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeRaceDataV18 {
				helpers::WString name;
				qword nameToken;
				qword baseHeadToken;
				helpers::Array<qword> beard;
				helpers::Array<PackCompositeBoneScaleV18> bodyBoneScales;
				helpers::Array<PackCompositeBoneScaleFileV18> bodyBoneScaleFiles;
				helpers::Array<qword> ears;
				helpers::WString eyeColorPalette;
				helpers::Array<PackCompositeBoneScaleV18> faceBoneScales;
				helpers::Array<qword> faces;
				helpers::Array<PackCompositeFileDataV18> fileData;
				dword flags;
				helpers::Array<qword> hairStyles;
				helpers::WString hairColorPalette;
				helpers::FileName skeletonFile;
				helpers::Array<PackCompositeSkinPatternV18> skinPatterns;
				helpers::WString skinColorPalette;
				helpers::WString skinPatternPalette;
				helpers::Array<PackCompositeSkinStyleV18> skinStyles;
				dword type;
				qword variantRefRace;
				helpers::Array<PackCompositeVariantV18> variants;
				helpers::Array<PackCompositeAnimOverrideV18> animOverrides;
			public:
				PackCompositeRaceDataV18( );
				PackCompositeRaceDataV18( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeRaceDataV18( const PackCompositeRaceDataV18& p_other );
				PackCompositeRaceDataV18& operator=( const PackCompositeRaceDataV18& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackCompositeV18 {
				helpers::Array<dword> armorColorIds;
				helpers::Array<PackCompositeBlitRectSetV18> blitRects;
				helpers::Array<PackCompositeBoneScaleV18> boneScales;
				helpers::Array<PackCompositeRaceDataV18> raceSexData;
				word configVersion;
			public:
				PackCompositeV18( );
				PackCompositeV18( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackCompositeV18( const PackCompositeV18& p_other );
				PackCompositeV18& operator=( const PackCompositeV18& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef PackCompositeV18 PackComposite;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::cmpc, fcc::comp> { typedef chunks::PackComposite Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_CMPC_PACKCOMPOSITE_H_INCLUDED
