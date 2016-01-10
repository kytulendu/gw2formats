// File: pf/chunks/cmpc/PackComposite.cpp

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

#include <gw2formats/pf/chunks/cmpc/PackComposite.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      PackCompositeBlitRectSetV18
			//============================================================================/

			PackCompositeBlitRectSetV18::PackCompositeBlitRectSetV18( ) {
			}

			PackCompositeBlitRectSetV18::PackCompositeBlitRectSetV18( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackCompositeBlitRectSetV18::PackCompositeBlitRectSetV18( const PackCompositeBlitRectSetV18& p_other )
				: name( p_other.name )
				, size( p_other.size )
				, rectIndex( p_other.rectIndex )
				, rectArray( p_other.rectArray ) {
			}

			PackCompositeBlitRectSetV18& PackCompositeBlitRectSetV18::operator=( const PackCompositeBlitRectSetV18& p_other ) {
				name = p_other.name;
				size = p_other.size;
				rectIndex = p_other.rectIndex;
				rectArray = p_other.rectArray;
				return *this;
			}

			const byte* PackCompositeBlitRectSetV18::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, size );
				p_data = helpers::read( p_data, p_size, rectIndex );
				p_data = helpers::read( p_data, p_size, rectArray );
				return p_data;
			}

			//============================================================================/
			//      PackCompositeBoneScaleParamV18
			//============================================================================/

			PackCompositeBoneScaleParamV18::PackCompositeBoneScaleParamV18( )
				: name( 0 )
				, flags( 0 )
				, max( 0 )
				, min( 0 ) {
			}

			PackCompositeBoneScaleParamV18::PackCompositeBoneScaleParamV18( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackCompositeBoneScaleParamV18::PackCompositeBoneScaleParamV18( const PackCompositeBoneScaleParamV18& p_other )
				: name( p_other.name )
				, flags( p_other.flags )
				, max( p_other.max )
				, min( p_other.min )
				, rotate( p_other.rotate )
				, scale( p_other.scale )
				, translate( p_other.translate ) {
			}

			PackCompositeBoneScaleParamV18& PackCompositeBoneScaleParamV18::operator=( const PackCompositeBoneScaleParamV18& p_other ) {
				name = p_other.name;
				flags = p_other.flags;
				max = p_other.max;
				min = p_other.min;
				rotate = p_other.rotate;
				scale = p_other.scale;
				translate = p_other.translate;
				return *this;
			}

			const byte* PackCompositeBoneScaleParamV18::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, max );
				p_data = helpers::read( p_data, p_size, min );
				p_data = helpers::read( p_data, p_size, rotate );
				p_data = helpers::read( p_data, p_size, scale );
				p_data = helpers::read( p_data, p_size, translate );
				return p_data;
			}

			//============================================================================/
			//      PackCompositeBoneScaleRegionV18
			//============================================================================/

			PackCompositeBoneScaleRegionV18::PackCompositeBoneScaleRegionV18( )
				: name( 0 )
				, value( 0 ) {
			}

			PackCompositeBoneScaleRegionV18::PackCompositeBoneScaleRegionV18( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackCompositeBoneScaleRegionV18::PackCompositeBoneScaleRegionV18( const PackCompositeBoneScaleRegionV18& p_other )
				: name( p_other.name )
				, value( p_other.value )
				, bone( p_other.bone ) {
			}

			PackCompositeBoneScaleRegionV18& PackCompositeBoneScaleRegionV18::operator=( const PackCompositeBoneScaleRegionV18& p_other ) {
				name = p_other.name;
				value = p_other.value;
				bone = p_other.bone;
				return *this;
			}

			const byte* PackCompositeBoneScaleRegionV18::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, value );
				p_data = helpers::read( p_data, p_size, bone );
				return p_data;
			}

			//============================================================================/
			//      PackCompositeMorphWeightV18
			//============================================================================/

			PackCompositeMorphWeightV18::PackCompositeMorphWeightV18( )
				: name( 0 )
				, value( 0 ) {
			}

			PackCompositeMorphWeightV18::PackCompositeMorphWeightV18( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackCompositeMorphWeightV18::PackCompositeMorphWeightV18( const PackCompositeMorphWeightV18& p_other )
				: name( p_other.name )
				, value( p_other.value ) {
			}

			PackCompositeMorphWeightV18& PackCompositeMorphWeightV18::operator=( const PackCompositeMorphWeightV18& p_other ) {
				name = p_other.name;
				value = p_other.value;
				return *this;
			}

			const byte* PackCompositeMorphWeightV18::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, value );
				return p_data;
			}

			//============================================================================/
			//      PackCompositeBoneScaleV18
			//============================================================================/

			PackCompositeBoneScaleV18::PackCompositeBoneScaleV18( ) {
			}

			PackCompositeBoneScaleV18::PackCompositeBoneScaleV18( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackCompositeBoneScaleV18::PackCompositeBoneScaleV18( const PackCompositeBoneScaleV18& p_other )
				: bodyRegion( p_other.bodyRegion )
				, morphWeight( p_other.morphWeight ) {
			}

			PackCompositeBoneScaleV18& PackCompositeBoneScaleV18::operator=( const PackCompositeBoneScaleV18& p_other ) {
				bodyRegion = p_other.bodyRegion;
				morphWeight = p_other.morphWeight;
				return *this;
			}

			const byte* PackCompositeBoneScaleV18::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, bodyRegion );
				p_data = helpers::read( p_data, p_size, morphWeight );
				return p_data;
			}

			//============================================================================/
			//      PackCompositeBoneScaleFileV18
			//============================================================================/

			PackCompositeBoneScaleFileV18::PackCompositeBoneScaleFileV18( ) {
			}

			PackCompositeBoneScaleFileV18::PackCompositeBoneScaleFileV18( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackCompositeBoneScaleFileV18::PackCompositeBoneScaleFileV18( const PackCompositeBoneScaleFileV18& p_other )
				: fileName( p_other.fileName ) {
			}

			PackCompositeBoneScaleFileV18& PackCompositeBoneScaleFileV18::operator=( const PackCompositeBoneScaleFileV18& p_other ) {
				fileName = p_other.fileName;
				return *this;
			}

			const byte* PackCompositeBoneScaleFileV18::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, fileName );
				return p_data;
			}

			//============================================================================/
			//      PackCompositeFileDataV18
			//============================================================================/

			PackCompositeFileDataV18::PackCompositeFileDataV18( )
				: name( 0 )
				, type( 0 )
				, flags( 0 )
				, animRoleOverride( 0 )
				, dyeFlags( 0 )
				, hideFlags( 0 )
				, skinFlags( 0 )
				, blitRectIndex( 0 ) {
			}

			PackCompositeFileDataV18::PackCompositeFileDataV18( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackCompositeFileDataV18::PackCompositeFileDataV18( const PackCompositeFileDataV18& p_other )
				: name( p_other.name )
				, type( p_other.type )
				, flags( p_other.flags )
				, animRoleOverride( p_other.animRoleOverride )
				, meshBase( p_other.meshBase )
				, meshOverlap( p_other.meshOverlap )
				, maskDye1( p_other.maskDye1 )
				, maskDye2( p_other.maskDye2 )
				, maskDye3( p_other.maskDye3 )
				, maskDye4( p_other.maskDye4 )
				, maskCut( p_other.maskCut )
				, textureBase( p_other.textureBase )
				, textureNormal( p_other.textureNormal )
				, dyeFlags( p_other.dyeFlags )
				, hideFlags( p_other.hideFlags )
				, skinFlags( p_other.skinFlags )
				, blitRectIndex( p_other.blitRectIndex ) {
			}

			PackCompositeFileDataV18& PackCompositeFileDataV18::operator=( const PackCompositeFileDataV18& p_other ) {
				name = p_other.name;
				type = p_other.type;
				flags = p_other.flags;
				animRoleOverride = p_other.animRoleOverride;
				meshBase = p_other.meshBase;
				meshOverlap = p_other.meshOverlap;
				maskDye1 = p_other.maskDye1;
				maskDye2 = p_other.maskDye2;
				maskDye3 = p_other.maskDye3;
				maskDye4 = p_other.maskDye4;
				maskCut = p_other.maskCut;
				textureBase = p_other.textureBase;
				textureNormal = p_other.textureNormal;
				dyeFlags = p_other.dyeFlags;
				hideFlags = p_other.hideFlags;
				skinFlags = p_other.skinFlags;
				blitRectIndex = p_other.blitRectIndex;
				return *this;
			}

			const byte* PackCompositeFileDataV18::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, type );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, animRoleOverride );
				p_data = helpers::read( p_data, p_size, meshBase );
				p_data = helpers::read( p_data, p_size, meshOverlap );
				p_data = helpers::read( p_data, p_size, maskDye1 );
				p_data = helpers::read( p_data, p_size, maskDye2 );
				p_data = helpers::read( p_data, p_size, maskDye3 );
				p_data = helpers::read( p_data, p_size, maskDye4 );
				p_data = helpers::read( p_data, p_size, maskCut );
				p_data = helpers::read( p_data, p_size, textureBase );
				p_data = helpers::read( p_data, p_size, textureNormal );
				p_data = helpers::read( p_data, p_size, dyeFlags );
				p_data = helpers::read( p_data, p_size, hideFlags );
				p_data = helpers::read( p_data, p_size, skinFlags );
				p_data = helpers::read( p_data, p_size, blitRectIndex );
				return p_data;
			}

			//============================================================================/
			//      PackCompositeSkinPatternV18
			//============================================================================/

			PackCompositeSkinPatternV18::PackCompositeSkinPatternV18( ) {
			}

			PackCompositeSkinPatternV18::PackCompositeSkinPatternV18( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackCompositeSkinPatternV18::PackCompositeSkinPatternV18( const PackCompositeSkinPatternV18& p_other )
				: chest( p_other.chest )
				, face( p_other.face )
				, feet( p_other.feet )
				, hands( p_other.hands )
				, legs( p_other.legs )
				, ears( p_other.ears ) {
			}

			PackCompositeSkinPatternV18& PackCompositeSkinPatternV18::operator=( const PackCompositeSkinPatternV18& p_other ) {
				chest = p_other.chest;
				face = p_other.face;
				feet = p_other.feet;
				hands = p_other.hands;
				legs = p_other.legs;
				ears = p_other.ears;
				return *this;
			}

			const byte* PackCompositeSkinPatternV18::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, chest );
				p_data = helpers::read( p_data, p_size, face );
				p_data = helpers::read( p_data, p_size, feet );
				p_data = helpers::read( p_data, p_size, hands );
				p_data = helpers::read( p_data, p_size, legs );
				p_data = helpers::read( p_data, p_size, ears );
				return p_data;
			}

			//============================================================================/
			//      PackCompositeSkinStyleV18
			//============================================================================/

			PackCompositeSkinStyleV18::PackCompositeSkinStyleV18( ) {
			}

			PackCompositeSkinStyleV18::PackCompositeSkinStyleV18( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackCompositeSkinStyleV18::PackCompositeSkinStyleV18( const PackCompositeSkinStyleV18& p_other )
				: chest( p_other.chest )
				, feet( p_other.feet )
				, hands( p_other.hands )
				, legs( p_other.legs ) {
			}

			PackCompositeSkinStyleV18& PackCompositeSkinStyleV18::operator=( const PackCompositeSkinStyleV18& p_other ) {
				chest = p_other.chest;
				feet = p_other.feet;
				hands = p_other.hands;
				legs = p_other.legs;
				return *this;
			}

			const byte* PackCompositeSkinStyleV18::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, chest );
				p_data = helpers::read( p_data, p_size, feet );
				p_data = helpers::read( p_data, p_size, hands );
				p_data = helpers::read( p_data, p_size, legs );
				return p_data;
			}

			//============================================================================/
			//      PackCompositeColorV18
			//============================================================================/

			PackCompositeColorV18::PackCompositeColorV18( )
				: brightness( 0 )
				, contrast( 0 )
				, hue( 0 )
				, saturation( 0 )
				, lightness( 0 ) {
			}

			PackCompositeColorV18::PackCompositeColorV18( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackCompositeColorV18::PackCompositeColorV18( const PackCompositeColorV18& p_other )
				: brightness( p_other.brightness )
				, contrast( p_other.contrast )
				, hue( p_other.hue )
				, saturation( p_other.saturation )
				, lightness( p_other.lightness ) {
			}

			PackCompositeColorV18& PackCompositeColorV18::operator=( const PackCompositeColorV18& p_other ) {
				brightness = p_other.brightness;
				contrast = p_other.contrast;
				hue = p_other.hue;
				saturation = p_other.saturation;
				lightness = p_other.lightness;
				return *this;
			}

			const byte* PackCompositeColorV18::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, brightness );
				p_data = helpers::read( p_data, p_size, contrast );
				p_data = helpers::read( p_data, p_size, hue );
				p_data = helpers::read( p_data, p_size, saturation );
				p_data = helpers::read( p_data, p_size, lightness );
				return p_data;
			}

			//============================================================================/
			//      PackCompositeVariantComponentV18
			//============================================================================/

			PackCompositeVariantComponentV18::PackCompositeVariantComponentV18( )
				: nameToken( 0 ) {
			}

			PackCompositeVariantComponentV18::PackCompositeVariantComponentV18( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackCompositeVariantComponentV18::PackCompositeVariantComponentV18( const PackCompositeVariantComponentV18& p_other )
				: nameToken( p_other.nameToken )
				, color0( p_other.color0 )
				, color1( p_other.color1 )
				, color2( p_other.color2 )
				, color3( p_other.color3 ) {
			}

			PackCompositeVariantComponentV18& PackCompositeVariantComponentV18::operator=( const PackCompositeVariantComponentV18& p_other ) {
				nameToken = p_other.nameToken;
				color0 = p_other.color0;
				color1 = p_other.color1;
				color2 = p_other.color2;
				color3 = p_other.color3;
				return *this;
			}

			const byte* PackCompositeVariantComponentV18::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, nameToken );
				p_data = helpers::read( p_data, p_size, color0 );
				p_data = helpers::read( p_data, p_size, color1 );
				p_data = helpers::read( p_data, p_size, color2 );
				p_data = helpers::read( p_data, p_size, color3 );
				return p_data;
			}

			//============================================================================/
			//      PackCompositeVariantV18
			//============================================================================/

			PackCompositeVariantV18::PackCompositeVariantV18( )
				: token( 0 )
				, boneScaleIndex( 0 )
				, skinIndex( 0 ) {
			}

			PackCompositeVariantV18::PackCompositeVariantV18( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackCompositeVariantV18::PackCompositeVariantV18( const PackCompositeVariantV18& p_other )
				: token( p_other.token )
				, boneScaleIndex( p_other.boneScaleIndex )
				, components( p_other.components )
				, eyeColor( p_other.eyeColor )
				, hairColor( p_other.hairColor )
				, hairColor2( p_other.hairColor2 )
				, patternColor( p_other.patternColor )
				, skinColor( p_other.skinColor )
				, skinIndex( p_other.skinIndex ) {
			}

			PackCompositeVariantV18& PackCompositeVariantV18::operator=( const PackCompositeVariantV18& p_other ) {
				token = p_other.token;
				boneScaleIndex = p_other.boneScaleIndex;
				components = p_other.components;
				eyeColor = p_other.eyeColor;
				hairColor = p_other.hairColor;
				hairColor2 = p_other.hairColor2;
				patternColor = p_other.patternColor;
				skinColor = p_other.skinColor;
				skinIndex = p_other.skinIndex;
				return *this;
			}

			const byte* PackCompositeVariantV18::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, token );
				p_data = helpers::read( p_data, p_size, boneScaleIndex );
				p_data = helpers::read( p_data, p_size, components );
				p_data = helpers::read( p_data, p_size, eyeColor );
				p_data = helpers::read( p_data, p_size, hairColor );
				p_data = helpers::read( p_data, p_size, hairColor2 );
				p_data = helpers::read( p_data, p_size, patternColor );
				p_data = helpers::read( p_data, p_size, skinColor );
				p_data = helpers::read( p_data, p_size, skinIndex );
				return p_data;
			}

			//============================================================================/
			//      PackCompositeAnimOverrideV18
			//============================================================================/

			PackCompositeAnimOverrideV18::PackCompositeAnimOverrideV18( ) {
			}

			PackCompositeAnimOverrideV18::PackCompositeAnimOverrideV18( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackCompositeAnimOverrideV18::PackCompositeAnimOverrideV18( const PackCompositeAnimOverrideV18& p_other )
				: animRole( p_other.animRole )
				, filepath( p_other.filepath ) {
			}

			PackCompositeAnimOverrideV18& PackCompositeAnimOverrideV18::operator=( const PackCompositeAnimOverrideV18& p_other ) {
				animRole = p_other.animRole;
				filepath = p_other.filepath;

				return *this;
			}

			const byte* PackCompositeAnimOverrideV18::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, animRole );
				p_data = helpers::read( p_data, p_size, filepath );
				return p_data;
			}

			//============================================================================/
			//      PackCompositeRaceDataV18
			//============================================================================/

			PackCompositeRaceDataV18::PackCompositeRaceDataV18( )
				: nameToken( 0 )
				, baseHeadToken( 0 )
				, flags( 0 )
				, type( 0 )
				, variantRefRace( 0 ) {
			}

			PackCompositeRaceDataV18::PackCompositeRaceDataV18( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackCompositeRaceDataV18::PackCompositeRaceDataV18( const PackCompositeRaceDataV18& p_other )
				: name( p_other.name )
				, nameToken( p_other.nameToken )
				, baseHeadToken( p_other.baseHeadToken )
				, beard( p_other.beard )
				, bodyBoneScales( p_other.bodyBoneScales )
				, bodyBoneScaleFiles( p_other.bodyBoneScaleFiles )
				, ears( p_other.ears )
				, eyeColorPalette( p_other.eyeColorPalette )
				, faceBoneScales( p_other.faceBoneScales )
				, faces( p_other.faces )
				, fileData( p_other.fileData )
				, flags( p_other.flags )
				, hairStyles( p_other.hairStyles )
				, hairColorPalette( p_other.hairColorPalette )
				, skeletonFile( p_other.skeletonFile )
				, skinPatterns( p_other.skinPatterns )
				, skinColorPalette( p_other.skinColorPalette )
				, skinPatternPalette( p_other.skinPatternPalette )
				, skinStyles( p_other.skinStyles )
				, type( p_other.type )
				, variantRefRace( p_other.variantRefRace )
				, variants( p_other.variants ) 
				, animOverrides( p_other.animOverrides ) {
			}

			PackCompositeRaceDataV18& PackCompositeRaceDataV18::operator=( const PackCompositeRaceDataV18& p_other ) {
				name = p_other.name;
				nameToken = p_other.nameToken;
				baseHeadToken = p_other.baseHeadToken;
				beard = p_other.beard;
				bodyBoneScales = p_other.bodyBoneScales;
				bodyBoneScaleFiles = p_other.bodyBoneScaleFiles;
				ears = p_other.ears;
				eyeColorPalette = p_other.eyeColorPalette;
				faceBoneScales = p_other.faceBoneScales;
				faces = p_other.faces;
				fileData = p_other.fileData;
				flags = p_other.flags;
				hairStyles = p_other.hairStyles;
				hairColorPalette = p_other.hairColorPalette;
				skeletonFile = p_other.skeletonFile;
				skinPatterns = p_other.skinPatterns;
				skinColorPalette = p_other.skinColorPalette;
				skinPatternPalette = p_other.skinPatternPalette;
				skinStyles = p_other.skinStyles;
				type = p_other.type;
				variantRefRace = p_other.variantRefRace;
				variants = p_other.variants;
				animOverrides = p_other.animOverrides;
				return *this;
			}

			const byte* PackCompositeRaceDataV18::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, nameToken );
				p_data = helpers::read( p_data, p_size, baseHeadToken );
				p_data = helpers::read( p_data, p_size, beard );
				p_data = helpers::read( p_data, p_size, bodyBoneScales );
				p_data = helpers::read( p_data, p_size, bodyBoneScaleFiles );
				p_data = helpers::read( p_data, p_size, ears );
				p_data = helpers::read( p_data, p_size, eyeColorPalette );
				p_data = helpers::read( p_data, p_size, faceBoneScales );
				p_data = helpers::read( p_data, p_size, faces );
				p_data = helpers::read( p_data, p_size, fileData );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, hairStyles );
				p_data = helpers::read( p_data, p_size, hairColorPalette );
				p_data = helpers::read( p_data, p_size, skeletonFile );
				p_data = helpers::read( p_data, p_size, skinPatterns );
				p_data = helpers::read( p_data, p_size, skinColorPalette );
				p_data = helpers::read( p_data, p_size, skinPatternPalette );
				p_data = helpers::read( p_data, p_size, skinStyles );
				p_data = helpers::read( p_data, p_size, type );
				p_data = helpers::read( p_data, p_size, variantRefRace );
				p_data = helpers::read( p_data, p_size, variants );
				p_data = helpers::read( p_data, p_size, animOverrides );
				return p_data;
			}

			//============================================================================/
			//      PackCompositeV18
			//============================================================================/

			PackCompositeV18::PackCompositeV18( )
				: configVersion( 0 ) {
			}

			PackCompositeV18::PackCompositeV18( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackCompositeV18::PackCompositeV18( const PackCompositeV18& p_other )
				: armorColorIds( p_other.armorColorIds )
				, blitRects( p_other.blitRects )
				, boneScales( p_other.boneScales )
				, raceSexData( p_other.raceSexData )
				, configVersion( p_other.configVersion ) {
			}

			PackCompositeV18& PackCompositeV18::operator=( const PackCompositeV18& p_other ) {
				armorColorIds = p_other.armorColorIds;
				blitRects = p_other.blitRects;
				boneScales = p_other.boneScales;
				raceSexData = p_other.raceSexData;
				configVersion = p_other.configVersion;
				return *this;
			}

			const byte* PackCompositeV18::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, armorColorIds );
				p_data = helpers::read( p_data, p_size, blitRects );
				p_data = helpers::read( p_data, p_size, boneScales );
				p_data = helpers::read( p_data, p_size, raceSexData );
				p_data = helpers::read( p_data, p_size, configVersion );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
