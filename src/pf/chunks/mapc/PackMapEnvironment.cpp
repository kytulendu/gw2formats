// File: pf/chunks/mapc/PackMapEnvironment.cpp

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

#include <gw2formats/pf/chunks/mapc/PackMapEnvironment.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      PackMapEnvDataLightV75
			//============================================================================/

			PackMapEnvDataLightV75::PackMapEnvDataLightV75( )
				: intensity( 0 ) {
			}

			PackMapEnvDataLightV75::PackMapEnvDataLightV75( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataLightV75::PackMapEnvDataLightV75( const PackMapEnvDataLightV75& p_other )
				: color( p_other.color )
				, intensity( p_other.intensity )
				, direction( p_other.direction ) {
			}

			PackMapEnvDataLightV75& PackMapEnvDataLightV75::operator=( const PackMapEnvDataLightV75& p_other ) {
				color = p_other.color;
				intensity = p_other.intensity;
				direction = p_other.direction;
				return *this;
			}

			const byte* PackMapEnvDataLightV75::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, color );
				p_data = helpers::read( p_data, p_size, intensity );
				p_data = helpers::read( p_data, p_size, direction );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataLightingV75
			//============================================================================/

			PackMapEnvDataLightingV75::PackMapEnvDataLightingV75( )
				: shadowInfluence( 0 )
				, backlightIntensity( 0 ) {
			}

			PackMapEnvDataLightingV75::PackMapEnvDataLightingV75( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataLightingV75::PackMapEnvDataLightingV75( const PackMapEnvDataLightingV75& p_other )
				: lights( p_other.lights )
				, shadowInfluence( p_other.shadowInfluence )
				, backlightColor( p_other.backlightColor )
				, backlightIntensity( p_other.backlightIntensity ) {
			}

			PackMapEnvDataLightingV75& PackMapEnvDataLightingV75::operator=( const PackMapEnvDataLightingV75& p_other ) {
				lights = p_other.lights;
				shadowInfluence = p_other.shadowInfluence;
				backlightColor = p_other.backlightColor;
				backlightIntensity = p_other.backlightIntensity;
				return *this;
			}

			const byte* PackMapEnvDataLightingV75::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, lights );
				p_data = helpers::read( p_data, p_size, shadowInfluence );
				p_data = helpers::read( p_data, p_size, backlightColor );
				p_data = helpers::read( p_data, p_size, backlightIntensity );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataLightingCharV46
			//============================================================================/

			PackMapEnvDataLightingCharV46::PackMapEnvDataLightingCharV46( )
				: sunScale( 0 )
				, saturation( 0 )
				, sunFill( 0 )
				, ambScale( 0 )
				, ambFill( 0 )
				, flags( 0 ) {
			}

			PackMapEnvDataLightingCharV46::PackMapEnvDataLightingCharV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataLightingCharV46::PackMapEnvDataLightingCharV46( const PackMapEnvDataLightingCharV46& p_other )
				: sunScale( p_other.sunScale )
				, saturation( p_other.saturation )
				, sunFill( p_other.sunFill )
				, ambScale( p_other.ambScale )
				, ambFill( p_other.ambFill )
				, flags( p_other.flags ) {
			}

			PackMapEnvDataLightingCharV46& PackMapEnvDataLightingCharV46::operator=( const PackMapEnvDataLightingCharV46& p_other ) {
				sunScale = p_other.sunScale;
				saturation = p_other.saturation;
				sunFill = p_other.sunFill;
				ambScale = p_other.ambScale;
				ambFill = p_other.ambFill;
				flags = p_other.flags;
				return *this;
			}

			const byte* PackMapEnvDataLightingCharV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, sunScale );
				p_data = helpers::read( p_data, p_size, saturation );
				p_data = helpers::read( p_data, p_size, sunFill );
				p_data = helpers::read( p_data, p_size, ambScale );
				p_data = helpers::read( p_data, p_size, ambFill );
				p_data = helpers::read( p_data, p_size, flags );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataLightingCharGroupV46
			//============================================================================/

			PackMapEnvDataLightingCharGroupV46::PackMapEnvDataLightingCharGroupV46( ) {
			}

			PackMapEnvDataLightingCharGroupV46::PackMapEnvDataLightingCharGroupV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataLightingCharGroupV46::PackMapEnvDataLightingCharGroupV46( const PackMapEnvDataLightingCharGroupV46& p_other )
				: lightingChar( p_other.lightingChar ) {
			}

			PackMapEnvDataLightingCharGroupV46& PackMapEnvDataLightingCharGroupV46::operator=( const PackMapEnvDataLightingCharGroupV46& p_other ) {
				lightingChar = p_other.lightingChar;
				return *this;
			}

			const byte* PackMapEnvDataLightingCharGroupV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, lightingChar );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataLayerAttributesV75
			//============================================================================/

			PackMapEnvDataLayerAttributesV75::PackMapEnvDataLayerAttributesV75( )
				: brightness( 0 )
				, density( 0 )
				, haze( 0 )
				, lightIntensity( 0 )
				, fadeWidth( 0 )
				, fadeEnd( 0 )
				, reserved( 0 ) {
			}

			PackMapEnvDataLayerAttributesV75::PackMapEnvDataLayerAttributesV75( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataLayerAttributesV75::PackMapEnvDataLayerAttributesV75( const PackMapEnvDataLayerAttributesV75& p_other )
				: brightness( p_other.brightness )
				, density( p_other.density )
				, haze( p_other.haze )
				, lightIntensity( p_other.lightIntensity )
				, velocity( p_other.velocity )
				, fadeWidth( p_other.fadeWidth )
				, fadeEnd( p_other.fadeEnd )
				, reserved( p_other.reserved ) {
			}

			PackMapEnvDataLayerAttributesV75& PackMapEnvDataLayerAttributesV75::operator=( const PackMapEnvDataLayerAttributesV75& p_other ) {
				brightness = p_other.brightness;
				density = p_other.density;
				haze = p_other.haze;
				lightIntensity = p_other.lightIntensity;
				velocity = p_other.velocity;
				fadeWidth = p_other.fadeWidth;
				fadeEnd = p_other.fadeEnd;
				reserved = p_other.reserved;
				return *this;
			}

			const byte* PackMapEnvDataLayerAttributesV75::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, brightness );
				p_data = helpers::read( p_data, p_size, density );
				p_data = helpers::read( p_data, p_size, haze );
				p_data = helpers::read( p_data, p_size, lightIntensity );
				p_data = helpers::read( p_data, p_size, velocity );
				p_data = helpers::read( p_data, p_size, fadeWidth );
				p_data = helpers::read( p_data, p_size, fadeEnd );
				p_data = helpers::read( p_data, p_size, reserved );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataLayerV75
			//============================================================================/

			PackMapEnvDataLayerV75::PackMapEnvDataLayerV75( )
				: altitude( 0 )
				, cutOut( 0 )
				, depth( 0 )
				, extent( 0 )
				, scale( 0 )
				, reserved( 0 ) {
			}

			PackMapEnvDataLayerV75::PackMapEnvDataLayerV75( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataLayerV75::PackMapEnvDataLayerV75( const PackMapEnvDataLayerV75& p_other )
				: altitude( p_other.altitude )
				, cutOut( p_other.cutOut )
				, depth( p_other.depth )
				, extent( p_other.extent )
				, scale( p_other.scale )
				, texture( p_other.texture )
				, attributes( p_other.attributes )
				, name( p_other.name )
				, reserved( p_other.reserved ) {
			}

			PackMapEnvDataLayerV75& PackMapEnvDataLayerV75::operator=( const PackMapEnvDataLayerV75& p_other ) {
				altitude = p_other.altitude;
				cutOut = p_other.cutOut;
				depth = p_other.depth;
				extent = p_other.extent;
				scale = p_other.scale;
				texture = p_other.texture;
				attributes = p_other.attributes;
				name = p_other.name;
				reserved = p_other.reserved;
				return *this;
			}

			const byte* PackMapEnvDataLayerV75::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, altitude );
				p_data = helpers::read( p_data, p_size, cutOut );
				p_data = helpers::read( p_data, p_size, depth );
				p_data = helpers::read( p_data, p_size, extent );
				p_data = helpers::read( p_data, p_size, scale );
				p_data = helpers::read( p_data, p_size, texture );
				p_data = helpers::read( p_data, p_size, attributes );
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, reserved );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataCloudsV75
			//============================================================================/

			PackMapEnvDataCloudsV75::PackMapEnvDataCloudsV75( ) {
			}

			PackMapEnvDataCloudsV75::PackMapEnvDataCloudsV75( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataCloudsV75::PackMapEnvDataCloudsV75( const PackMapEnvDataCloudsV75& p_other )
				: layers( p_other.layers ) {
			}

			PackMapEnvDataCloudsV75& PackMapEnvDataCloudsV75::operator=( const PackMapEnvDataCloudsV75& p_other ) {
				layers = p_other.layers;
				return *this;
			}

			const byte* PackMapEnvDataCloudsV75::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, layers );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataColoredLightRingsV46
			//============================================================================/

			PackMapEnvDataColoredLightRingsV46::PackMapEnvDataColoredLightRingsV46( ) {
			}

			PackMapEnvDataColoredLightRingsV46::PackMapEnvDataColoredLightRingsV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataColoredLightRingsV46::PackMapEnvDataColoredLightRingsV46( const PackMapEnvDataColoredLightRingsV46& p_other )
				: range( p_other.range ) {
				std::copy( p_other.distances, p_other.distances + 6, distances );
				std::copy( p_other.lightColors, p_other.lightColors + 6, lightColors );
				std::copy( p_other.shadowColors, p_other.shadowColors + 6, shadowColors );
			}

			PackMapEnvDataColoredLightRingsV46& PackMapEnvDataColoredLightRingsV46::operator=( const PackMapEnvDataColoredLightRingsV46& p_other ) {
				range = p_other.range;
				std::copy( p_other.distances, p_other.distances + 6, distances );
				std::copy( p_other.lightColors, p_other.lightColors + 6, lightColors );
				std::copy( p_other.shadowColors, p_other.shadowColors + 6, shadowColors );
				return *this;
			}

			const byte* PackMapEnvDataColoredLightRingsV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, range );
				p_data = helpers::read( p_data, p_size, distances );
				p_data = helpers::read( p_data, p_size, lightColors );
				p_data = helpers::read( p_data, p_size, shadowColors );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataEffectExV46
			//============================================================================/

			PackMapEnvDataEffectExV46::PackMapEnvDataEffectExV46( )
				: dummy( 0 ) {
			}

			PackMapEnvDataEffectExV46::PackMapEnvDataEffectExV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataEffectExV46::PackMapEnvDataEffectExV46( const PackMapEnvDataEffectExV46& p_other )
				: dummy( p_other.dummy ) {
			}

			PackMapEnvDataEffectExV46& PackMapEnvDataEffectExV46::operator=( const PackMapEnvDataEffectExV46& p_other ) {
				dummy = p_other.dummy;
				return *this;
			}

			const byte* PackMapEnvDataEffectExV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, dummy );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataEffectV75
			//============================================================================/

			PackMapEnvDataEffectV75::PackMapEnvDataEffectV75( )
				: saturation( 0 )
				, tintAmount( 0 )
				, tintFocus( 0 )
				, glowAmplify( 0 )
				, focalDepth( 0 )
				, focalRange( 0 ) 
				, ssaoAmount( 0 )
				, ssaoBrighten( 0 )
				, ssaoContrast( 0 )
				, ssaoSunScale( 0 )
				, flags( 0 ) {
			}

			PackMapEnvDataEffectV75::PackMapEnvDataEffectV75( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataEffectV75::PackMapEnvDataEffectV75( const PackMapEnvDataEffectV75& p_other )
				: glow( p_other.glow )
				, tintColor( p_other.tintColor )
				, tintTargetColor( p_other.tintTargetColor )
				, saturation( p_other.saturation )
				, tintAmount( p_other.tintAmount )
				, tintFocus( p_other.tintFocus )
				, glowLevel( p_other.glowLevel )
				, glowAmplify( p_other.glowAmplify )
				, focalDepth( p_other.focalDepth )
				, focalRange( p_other.focalRange )
				, ssaoAmount( p_other.ssaoAmount )
				, ssaoBrighten( p_other.ssaoBrighten )
				, ssaoContrast( p_other.ssaoContrast )
				, ssaoSunScale( p_other.ssaoSunScale )
				, flags( p_other.flags )
				, clutTexturePath( p_other.clutTexturePath )
				, ext( p_other.ext ) {
			}

			PackMapEnvDataEffectV75& PackMapEnvDataEffectV75::operator=( const PackMapEnvDataEffectV75& p_other ) {
				glow = p_other.glow;
				tintColor = p_other.tintColor;
				tintTargetColor = p_other.tintTargetColor;
				saturation = p_other.saturation;
				tintAmount = p_other.tintAmount;
				tintFocus = p_other.tintFocus;
				glowLevel = p_other.glowLevel;
				glowAmplify = p_other.glowAmplify;
				focalDepth = p_other.focalDepth;
				focalRange = p_other.focalRange;
				ssaoAmount = p_other.ssaoAmount;
				ssaoBrighten = p_other.ssaoBrighten;
				ssaoContrast = p_other.ssaoContrast;
				ssaoSunScale = p_other.ssaoSunScale;
				flags = p_other.flags;
				clutTexturePath = p_other.clutTexturePath;
				ext = p_other.ext;
				return *this;
			}

			const byte* PackMapEnvDataEffectV75::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, glow );
				p_data = helpers::read( p_data, p_size, tintColor );
				p_data = helpers::read( p_data, p_size, tintTargetColor );
				p_data = helpers::read( p_data, p_size, saturation );
				p_data = helpers::read( p_data, p_size, tintAmount );
				p_data = helpers::read( p_data, p_size, tintFocus );
				p_data = helpers::read( p_data, p_size, glowLevel );
				p_data = helpers::read( p_data, p_size, glowAmplify );
				p_data = helpers::read( p_data, p_size, focalDepth );
				p_data = helpers::read( p_data, p_size, focalRange );
				p_data = helpers::read( p_data, p_size, ssaoAmount );
				p_data = helpers::read( p_data, p_size, ssaoBrighten );
				p_data = helpers::read( p_data, p_size, ssaoContrast );
				p_data = helpers::read( p_data, p_size, ssaoSunScale );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, clutTexturePath );
				p_data = helpers::read( p_data, p_size, ext );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataHazeV75
			//============================================================================/

			PackMapEnvDataHazeV75::PackMapEnvDataHazeV75( )
				: depthCue( 0 ) {
			}

			PackMapEnvDataHazeV75::PackMapEnvDataHazeV75( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataHazeV75::PackMapEnvDataHazeV75( const PackMapEnvDataHazeV75& p_other )
				: nearColor( p_other.nearColor )
				, farColor( p_other.farColor )
				, distRange( p_other.distRange )
				, heightColor( p_other.heightColor )
				, heightRange( p_other.heightRange )
				, depthCue( p_other.depthCue )
				, sunDirRange( p_other.sunDirRange ) {
			}

			PackMapEnvDataHazeV75& PackMapEnvDataHazeV75::operator=( const PackMapEnvDataHazeV75& p_other ) {
				nearColor = p_other.nearColor;
				farColor = p_other.farColor;
				distRange = p_other.distRange;
				heightColor = p_other.heightColor;
				heightRange = p_other.heightRange;
				depthCue = p_other.depthCue;
				sunDirRange = p_other.sunDirRange;
				return *this;
			}

			const byte* PackMapEnvDataHazeV75::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, nearColor );
				p_data = helpers::read( p_data, p_size, farColor );
				p_data = helpers::read( p_data, p_size, distRange );
				p_data = helpers::read( p_data, p_size, heightColor );
				p_data = helpers::read( p_data, p_size, heightRange );
				p_data = helpers::read( p_data, p_size, depthCue );
				p_data = helpers::read( p_data, p_size, sunDirRange );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataPFieldV75
			//============================================================================/

			PackMapEnvDataPFieldV75::PackMapEnvDataPFieldV75( )
				: altitude( 0 )
				, clusterCount( 0 )
				, depth( 0 )
				, deviation( 0 )
				, extent( 0 )
				, fade( 0 )
				, flags( 0 )
				, particleCount( 0 )
				, seed( 0 )
				, texFPS( 0 )
				, type( 0 )
				, reserved( 0 ) {
			}

			PackMapEnvDataPFieldV75::PackMapEnvDataPFieldV75( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataPFieldV75::PackMapEnvDataPFieldV75( const PackMapEnvDataPFieldV75& p_other )
				: altitude( p_other.altitude )
				, angle( p_other.angle )
				, clusterCount( p_other.clusterCount )
				, clustering( p_other.clustering )
				, depth( p_other.depth )
				, deviation( p_other.deviation )
				, deviationSpeed( p_other.deviationSpeed )
				, extent( p_other.extent )
				, fade( p_other.fade )
				, fieldDirection( p_other.fieldDirection )
				, flags( p_other.flags )
				, lifetime( p_other.lifetime )
				, opacity( p_other.opacity )
				, particleCount( p_other.particleCount )
				, period( p_other.period )
				, rotation( p_other.rotation )
				, scaleX( p_other.scaleX )
				, scaleY( p_other.scaleY )
				, seed( p_other.seed )
				, speed( p_other.speed )
				, texColRow( p_other.texColRow )
				, texFPS( p_other.texFPS )
				, texPath( p_other.texPath )
				, type( p_other.type )
				, name( p_other.name )
				, reserved( p_other.reserved ) {
			}

			PackMapEnvDataPFieldV75& PackMapEnvDataPFieldV75::operator=( const PackMapEnvDataPFieldV75& p_other ) {
				altitude = p_other.altitude;
				angle = p_other.angle;
				clusterCount = p_other.clusterCount;
				clustering = p_other.clustering;
				depth = p_other.depth;
				deviation = p_other.deviation;
				deviationSpeed = p_other.deviationSpeed;
				extent = p_other.extent;
				fade = p_other.fade;
				fieldDirection = p_other.fieldDirection;
				flags = p_other.flags;
				lifetime = p_other.lifetime;
				opacity = p_other.opacity;
				particleCount = p_other.particleCount;
				period = p_other.period;
				rotation = p_other.rotation;
				scaleX = p_other.scaleX;
				scaleY = p_other.scaleY;
				seed = p_other.seed;
				speed = p_other.speed;
				texColRow = p_other.texColRow;
				texFPS = p_other.texFPS;
				texPath = p_other.texPath;
				type = p_other.type;
				name = p_other.name;
				reserved = p_other.reserved;
				return *this;
			}

			const byte* PackMapEnvDataPFieldV75::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, altitude );
				p_data = helpers::read( p_data, p_size, angle );
				p_data = helpers::read( p_data, p_size, clusterCount );
				p_data = helpers::read( p_data, p_size, clustering );
				p_data = helpers::read( p_data, p_size, depth );
				p_data = helpers::read( p_data, p_size, deviation );
				p_data = helpers::read( p_data, p_size, deviationSpeed );
				p_data = helpers::read( p_data, p_size, extent );
				p_data = helpers::read( p_data, p_size, fade );
				p_data = helpers::read( p_data, p_size, fieldDirection );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, lifetime );
				p_data = helpers::read( p_data, p_size, opacity );
				p_data = helpers::read( p_data, p_size, particleCount );
				p_data = helpers::read( p_data, p_size, period );
				p_data = helpers::read( p_data, p_size, rotation );
				p_data = helpers::read( p_data, p_size, scaleX );
				p_data = helpers::read( p_data, p_size, scaleY );
				p_data = helpers::read( p_data, p_size, seed );
				p_data = helpers::read( p_data, p_size, speed );
				p_data = helpers::read( p_data, p_size, texColRow );
				p_data = helpers::read( p_data, p_size, texFPS );
				p_data = helpers::read( p_data, p_size, texPath );
				p_data = helpers::read( p_data, p_size, type );
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, reserved );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataPFieldCutoutV46
			//============================================================================/

			PackMapEnvDataPFieldCutoutV46::PackMapEnvDataPFieldCutoutV46( ) {
			}

			PackMapEnvDataPFieldCutoutV46::PackMapEnvDataPFieldCutoutV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataPFieldCutoutV46::PackMapEnvDataPFieldCutoutV46( const PackMapEnvDataPFieldCutoutV46& p_other )
				: name( p_other.name )
				, x( p_other.x )
				, y( p_other.y )
				, z( p_other.z ) {
			}

			PackMapEnvDataPFieldCutoutV46& PackMapEnvDataPFieldCutoutV46::operator=( const PackMapEnvDataPFieldCutoutV46& p_other ) {
				name = p_other.name;
				x = p_other.x;
				y = p_other.y;
				z = p_other.z;
				return *this;
			}

			const byte* PackMapEnvDataPFieldCutoutV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, x );
				p_data = helpers::read( p_data, p_size, y );
				p_data = helpers::read( p_data, p_size, z );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataSkyV75
			//============================================================================/

			PackMapEnvDataSkyV75::PackMapEnvDataSkyV75( )
				: flags( 0 )
				, dayBrightness( 0 )
				, dayHazeBottom( 0 )
				, dayHazeDensity( 0 )
				, dayHazeFalloff( 0 )
				, dayLightIntensity( 0 )
				, dayStarDensity( 0 )
				, nightBrightness( 0 )
				, nightHazeBottom( 0 )
				, nightHazeDensity( 0 )
				, nightHazeFalloff( 0 )
				, nightLightIntensity( 0 )
				, nightStarDensity( 0 )
				, verticalOffset( 0 ) {
			}

			PackMapEnvDataSkyV75::PackMapEnvDataSkyV75( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataSkyV75::PackMapEnvDataSkyV75( const PackMapEnvDataSkyV75& p_other )
				: flags( p_other.flags )
				, dayBrightness( p_other.dayBrightness )
				, dayHazeBottom( p_other.dayHazeBottom )
				, dayHazeDensity( p_other.dayHazeDensity )
				, dayHazeFalloff( p_other.dayHazeFalloff )
				, dayLightIntensity( p_other.dayLightIntensity )
				, dayStarDensity( p_other.dayStarDensity )
				, nightBrightness( p_other.nightBrightness )
				, nightHazeBottom( p_other.nightHazeBottom )
				, nightHazeDensity( p_other.nightHazeDensity )
				, nightHazeFalloff( p_other.nightHazeFalloff )
				, nightLightIntensity( p_other.nightLightIntensity )
				, nightStarDensity( p_other.nightStarDensity )
				, verticalOffset( p_other.verticalOffset ) {
			}

			PackMapEnvDataSkyV75& PackMapEnvDataSkyV75::operator=( const PackMapEnvDataSkyV75& p_other ) {
				flags = p_other.flags;
				dayBrightness = p_other.dayBrightness;
				dayHazeBottom = p_other.dayHazeBottom;
				dayHazeDensity = p_other.dayHazeDensity;
				dayHazeFalloff = p_other.dayHazeFalloff;
				dayLightIntensity = p_other.dayLightIntensity;
				dayStarDensity = p_other.dayStarDensity;
				nightBrightness = p_other.nightBrightness;
				nightHazeBottom = p_other.nightHazeBottom;
				nightHazeDensity = p_other.nightHazeDensity;
				nightHazeFalloff = p_other.nightHazeFalloff;
				nightLightIntensity = p_other.nightLightIntensity;
				nightStarDensity = p_other.nightStarDensity;
				verticalOffset = p_other.verticalOffset;
				return *this;
			}

			const byte* PackMapEnvDataSkyV75::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, dayBrightness );
				p_data = helpers::read( p_data, p_size, dayHazeBottom );
				p_data = helpers::read( p_data, p_size, dayHazeDensity );
				p_data = helpers::read( p_data, p_size, dayHazeFalloff );
				p_data = helpers::read( p_data, p_size, dayLightIntensity );
				p_data = helpers::read( p_data, p_size, dayStarDensity );
				p_data = helpers::read( p_data, p_size, nightBrightness );
				p_data = helpers::read( p_data, p_size, nightHazeBottom );
				p_data = helpers::read( p_data, p_size, nightHazeDensity );
				p_data = helpers::read( p_data, p_size, nightHazeFalloff );
				p_data = helpers::read( p_data, p_size, nightLightIntensity );
				p_data = helpers::read( p_data, p_size, nightStarDensity );
				p_data = helpers::read( p_data, p_size, verticalOffset );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvLensFlareAtomV46
			//============================================================================/

			PackMapEnvLensFlareAtomV46::PackMapEnvLensFlareAtomV46( )
				: rows( 0 )
				, columns( 0 )
				, start( 0 )
				, fps( 0 )
				, baseRotation( 0 )
				, cameraRotation( 0 )
				, flags( 0 ) {
			}

			PackMapEnvLensFlareAtomV46::PackMapEnvLensFlareAtomV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvLensFlareAtomV46::PackMapEnvLensFlareAtomV46( const PackMapEnvLensFlareAtomV46& p_other )
				: rows( p_other.rows )
				, columns( p_other.columns )
				, start( p_other.start )
				, fps( p_other.fps )
				, color( p_other.color )
				, offset( p_other.offset )
				, scale( p_other.scale )
				, baseRotation( p_other.baseRotation )
				, cameraRotation( p_other.cameraRotation )
				, flags( p_other.flags ) {
			}

			PackMapEnvLensFlareAtomV46& PackMapEnvLensFlareAtomV46::operator=( const PackMapEnvLensFlareAtomV46& p_other ) {
				rows = p_other.rows;
				columns = p_other.columns;
				start = p_other.start;
				fps = p_other.fps;
				color = p_other.color;
				offset = p_other.offset;
				scale = p_other.scale;
				baseRotation = p_other.baseRotation;
				cameraRotation = p_other.cameraRotation;
				flags = p_other.flags;
				return *this;
			}

			const byte* PackMapEnvLensFlareAtomV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, rows );
				p_data = helpers::read( p_data, p_size, columns );
				p_data = helpers::read( p_data, p_size, start );
				p_data = helpers::read( p_data, p_size, fps );
				p_data = helpers::read( p_data, p_size, color );
				p_data = helpers::read( p_data, p_size, offset );
				p_data = helpers::read( p_data, p_size, scale );
				p_data = helpers::read( p_data, p_size, baseRotation );
				p_data = helpers::read( p_data, p_size, cameraRotation );
				p_data = helpers::read( p_data, p_size, flags );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvLensFlareTextureV46
			//============================================================================/

			PackMapEnvLensFlareTextureV46::PackMapEnvLensFlareTextureV46( )
			{
			}

			PackMapEnvLensFlareTextureV46::PackMapEnvLensFlareTextureV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvLensFlareTextureV46::PackMapEnvLensFlareTextureV46( const PackMapEnvLensFlareTextureV46& p_other )
				: texture( p_other.texture ) {
			}

			PackMapEnvLensFlareTextureV46& PackMapEnvLensFlareTextureV46::operator=( const PackMapEnvLensFlareTextureV46& p_other ) {
				texture = p_other.texture;
				return *this;
			}

			const byte* PackMapEnvLensFlareTextureV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, texture );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataShaderConstantV46
			//============================================================================/

			PackMapEnvDataShaderConstantV46::PackMapEnvDataShaderConstantV46( )
			{
			}

			PackMapEnvDataShaderConstantV46::PackMapEnvDataShaderConstantV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataShaderConstantV46::PackMapEnvDataShaderConstantV46( const PackMapEnvDataShaderConstantV46& p_other )
				: token( p_other.token )
				, value( p_other.value ) {
			}

			PackMapEnvDataShaderConstantV46& PackMapEnvDataShaderConstantV46::operator=( const PackMapEnvDataShaderConstantV46& p_other ) {
				token = p_other.token;
				value = p_other.value;
				return *this;
			}

			const byte* PackMapEnvDataShaderConstantV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, token );
				p_data = helpers::read( p_data, p_size, value );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvLensFlareV46
			//============================================================================/

			PackMapEnvLensFlareV46::PackMapEnvLensFlareV46( ) {
			}

			PackMapEnvLensFlareV46::PackMapEnvLensFlareV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvLensFlareV46::PackMapEnvLensFlareV46( const PackMapEnvLensFlareV46& p_other )
				: atoms( p_other.atoms )
				, textures( p_other.textures )
				, material( p_other.material )
				, fadeBand( p_other.fadeBand )
				, reverseFadeBand( p_other.reverseFadeBand )
				, opacityCoeff( p_other.opacityCoeff )
				, flags( p_other.flags )
				, constants( p_other.constants ) {
			}

			PackMapEnvLensFlareV46& PackMapEnvLensFlareV46::operator=( const PackMapEnvLensFlareV46& p_other ) {
				atoms = p_other.atoms;
				textures = p_other.textures;
				material = p_other.material;
				fadeBand = p_other.fadeBand;
				reverseFadeBand = p_other.reverseFadeBand;
				opacityCoeff = p_other.opacityCoeff;
				flags = p_other.flags;
				constants = p_other.constants;
				return *this;
			}

			const byte* PackMapEnvLensFlareV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, atoms );
				p_data = helpers::read( p_data, p_size, textures );
				p_data = helpers::read( p_data, p_size, material );
				p_data = helpers::read( p_data, p_size, fadeBand );
				p_data = helpers::read( p_data, p_size, reverseFadeBand );
				p_data = helpers::read( p_data, p_size, opacityCoeff );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, constants );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataSkyCardAttributesExV46
			//============================================================================/

			PackMapEnvDataSkyCardAttributesExV46::PackMapEnvDataSkyCardAttributesExV46( ) {
			}

			PackMapEnvDataSkyCardAttributesExV46::PackMapEnvDataSkyCardAttributesExV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataSkyCardAttributesExV46::PackMapEnvDataSkyCardAttributesExV46( const PackMapEnvDataSkyCardAttributesExV46& p_other )
				: dummy( p_other.dummy ) {
			}

			PackMapEnvDataSkyCardAttributesExV46& PackMapEnvDataSkyCardAttributesExV46::operator=( const PackMapEnvDataSkyCardAttributesExV46& p_other ) {
				dummy = p_other.dummy;
				return *this;
			}

			const byte* PackMapEnvDataSkyCardAttributesExV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, dummy );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataSkyCardAttributesV75
			//============================================================================/

			PackMapEnvDataSkyCardAttributesV75::PackMapEnvDataSkyCardAttributesV75( )
				: azimuth( 0 )
				, density( 0 )
				, hazeDensity( 0 )
				, latitude( 0 )
				, lightIntensity( 0 )
				, minHaze( 0 )
				, speed( 0 )
				, brightness( 0 ) {
			}

			PackMapEnvDataSkyCardAttributesV75::PackMapEnvDataSkyCardAttributesV75( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataSkyCardAttributesV75::PackMapEnvDataSkyCardAttributesV75( const PackMapEnvDataSkyCardAttributesV75& p_other )
				: azimuth( p_other.azimuth )
				, density( p_other.density )
				, hazeDensity( p_other.hazeDensity )
				, latitude( p_other.latitude )
				, lightIntensity( p_other.lightIntensity )
				, minHaze( p_other.minHaze )
				, scale( p_other.scale )
				, speed( p_other.speed )
				, texture( p_other.texture )
				, textureUV( p_other.textureUV )
				, brightness( p_other.brightness )
				, lensFlare( p_other.lensFlare )
				, ext( p_other.ext ) {
			}

			PackMapEnvDataSkyCardAttributesV75& PackMapEnvDataSkyCardAttributesV75::operator=( const PackMapEnvDataSkyCardAttributesV75& p_other ) {
				azimuth = p_other.azimuth;
				density = p_other.density;
				hazeDensity = p_other.hazeDensity;
				latitude = p_other.latitude;
				lightIntensity = p_other.lightIntensity;
				minHaze = p_other.minHaze;
				scale = p_other.scale;
				speed = p_other.speed;
				texture = p_other.texture;
				textureUV = p_other.textureUV;
				brightness = p_other.brightness;
				lensFlare = p_other.lensFlare;
				ext = p_other.ext;
				return *this;
			}

			const byte* PackMapEnvDataSkyCardAttributesV75::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, azimuth );
				p_data = helpers::read( p_data, p_size, density );
				p_data = helpers::read( p_data, p_size, hazeDensity );
				p_data = helpers::read( p_data, p_size, latitude );
				p_data = helpers::read( p_data, p_size, lightIntensity );
				p_data = helpers::read( p_data, p_size, minHaze );
				p_data = helpers::read( p_data, p_size, scale );
				p_data = helpers::read( p_data, p_size, speed );
				p_data = helpers::read( p_data, p_size, texture );
				p_data = helpers::read( p_data, p_size, textureUV );
				p_data = helpers::read( p_data, p_size, brightness );
				p_data = helpers::read( p_data, p_size, lensFlare );
				p_data = helpers::read( p_data, p_size, ext );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataShaderTextureV46
			//============================================================================/

			PackMapEnvDataShaderTextureV46::PackMapEnvDataShaderTextureV46( )
			{
			}

			PackMapEnvDataShaderTextureV46::PackMapEnvDataShaderTextureV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataShaderTextureV46::PackMapEnvDataShaderTextureV46( const PackMapEnvDataShaderTextureV46& p_other )
				: filename( p_other.filename )
				, textureUV( p_other.textureUV ) {
			}

			PackMapEnvDataShaderTextureV46& PackMapEnvDataShaderTextureV46::operator=( const PackMapEnvDataShaderTextureV46& p_other ) {
				filename = p_other.filename;
				textureUV = p_other.textureUV;
				return *this;
			}

			const byte* PackMapEnvDataShaderTextureV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, filename );
				p_data = helpers::read( p_data, p_size, textureUV );
				return p_data;
			}

			//============================================================================/
			//      PackEnvDataSkyCardAnimationV46
			//============================================================================/

			PackEnvDataSkyCardAnimationV46::PackEnvDataSkyCardAnimationV46( )
				: textureAnimRotation( 0 )
				, texCoords( 0 ) {
			}

			PackEnvDataSkyCardAnimationV46::PackEnvDataSkyCardAnimationV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackEnvDataSkyCardAnimationV46::PackEnvDataSkyCardAnimationV46( const PackEnvDataSkyCardAnimationV46& p_other )
				: textureAnimTranslation( p_other.textureAnimTranslation )
				, textureAnimScaleRangeX( p_other.textureAnimScaleRangeX )
				, textureAnimScaleRangeY( p_other.textureAnimScaleRangeY )
				, textureAnimScaleSpeed( p_other.textureAnimScaleSpeed )
				, textureAnimRotation( p_other.textureAnimRotation )
				, texCoords( p_other.texCoords ) {
			}

			PackEnvDataSkyCardAnimationV46& PackEnvDataSkyCardAnimationV46::operator=( const PackEnvDataSkyCardAnimationV46& p_other ) {
				textureAnimTranslation = p_other.textureAnimTranslation;
				textureAnimScaleRangeX = p_other.textureAnimScaleRangeX;
				textureAnimScaleRangeY = p_other.textureAnimScaleRangeY;
				textureAnimScaleSpeed = p_other.textureAnimScaleSpeed;
				textureAnimRotation = p_other.textureAnimRotation;
				texCoords = p_other.texCoords;
				return *this;
			}

			const byte* PackEnvDataSkyCardAnimationV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, textureAnimTranslation );
				p_data = helpers::read( p_data, p_size, textureAnimScaleRangeX );
				p_data = helpers::read( p_data, p_size, textureAnimScaleRangeY );
				p_data = helpers::read( p_data, p_size, textureAnimScaleSpeed );
				p_data = helpers::read( p_data, p_size, textureAnimRotation );
				p_data = helpers::read( p_data, p_size, texCoords );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataSkycardFlipbookV46
			//============================================================================/

			PackMapEnvDataSkycardFlipbookV46::PackMapEnvDataSkycardFlipbookV46( )
				: rows( 0 )
				, columns( 0 )
				, start( 0 )
				, count( 0 )
				, fps( 0 ) {
			}

			PackMapEnvDataSkycardFlipbookV46::PackMapEnvDataSkycardFlipbookV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataSkycardFlipbookV46::PackMapEnvDataSkycardFlipbookV46( const PackMapEnvDataSkycardFlipbookV46& p_other )
				: rows( p_other.rows )
				, columns( p_other.columns )
				, start( p_other.start )
				, count( p_other.count )
				, fps( p_other.fps ) {
			}

			PackMapEnvDataSkycardFlipbookV46& PackMapEnvDataSkycardFlipbookV46::operator=( const PackMapEnvDataSkycardFlipbookV46& p_other ) {
				rows = p_other.rows;
				columns = p_other.columns;
				start = p_other.start;
				count = p_other.count;
				fps = p_other.fps;
				return *this;
			}

			const byte* PackMapEnvDataSkycardFlipbookV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, rows );
				p_data = helpers::read( p_data, p_size, columns );
				p_data = helpers::read( p_data, p_size, start );
				p_data = helpers::read( p_data, p_size, count );
				p_data = helpers::read( p_data, p_size, fps );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataSkyCardMaterialV46
			//============================================================================/

			PackMapEnvDataSkyCardMaterialV46::PackMapEnvDataSkyCardMaterialV46( )
			{
			}

			PackMapEnvDataSkyCardMaterialV46::PackMapEnvDataSkyCardMaterialV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataSkyCardMaterialV46::PackMapEnvDataSkyCardMaterialV46( const PackMapEnvDataSkyCardMaterialV46& p_other )
				: filename( p_other.filename )
				, constants( p_other.constants )
				, textures( p_other.textures )
				, textureAnimation( p_other.textureAnimation )
				, flipbook( p_other.flipbook ) {
			}

			PackMapEnvDataSkyCardMaterialV46& PackMapEnvDataSkyCardMaterialV46::operator=( const PackMapEnvDataSkyCardMaterialV46& p_other ) {
				filename = p_other.filename;
				constants = p_other.constants;
				textures = p_other.textures;
				textureAnimation = p_other.textureAnimation;
				flipbook = p_other.flipbook;
				return *this;
			}

			const byte* PackMapEnvDataSkyCardMaterialV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, filename );
				p_data = helpers::read( p_data, p_size, constants );
				p_data = helpers::read( p_data, p_size, textures );
				p_data = helpers::read( p_data, p_size, textureAnimation );
				p_data = helpers::read( p_data, p_size, flipbook );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataSkyCardExV46
			//============================================================================/

			PackMapEnvDataSkyCardExV46::PackMapEnvDataSkyCardExV46( )
				: dummy( 0 ) {
			}

			PackMapEnvDataSkyCardExV46::PackMapEnvDataSkyCardExV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataSkyCardExV46::PackMapEnvDataSkyCardExV46( const PackMapEnvDataSkyCardExV46& p_other )
				: dummy( p_other.dummy ) {
			}

			PackMapEnvDataSkyCardExV46& PackMapEnvDataSkyCardExV46::operator=( const PackMapEnvDataSkyCardExV46& p_other ) {
				dummy = p_other.dummy;
				return *this;
			}

			const byte* PackMapEnvDataSkyCardExV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, dummy );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataSkyCardV75
			//============================================================================/

			PackMapEnvDataSkyCardV75::PackMapEnvDataSkyCardV75( )
				: flags( 0 ) {
			}

			PackMapEnvDataSkyCardV75::PackMapEnvDataSkyCardV75( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataSkyCardV75::PackMapEnvDataSkyCardV75( const PackMapEnvDataSkyCardV75& p_other )
				: day( p_other.day )
				, night( p_other.night )
				, flags( p_other.flags )
				, name( p_other.name )
				, location( p_other.location )
				, material( p_other.material )
				, ext( p_other.ext ) {
			}

			PackMapEnvDataSkyCardV75& PackMapEnvDataSkyCardV75::operator=( const PackMapEnvDataSkyCardV75& p_other ) {
				day = p_other.day;
				night = p_other.night;
				flags = p_other.flags;
				name = p_other.name;
				location = p_other.location;
				material = p_other.material;
				ext = p_other.ext;
				return *this;
			}

			const byte* PackMapEnvDataSkyCardV75::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, day );
				p_data = helpers::read( p_data, p_size, night );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, location );
				p_data = helpers::read( p_data, p_size, material );
				p_data = helpers::read( p_data, p_size, ext );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataSkyCardsV75
			//============================================================================/

			PackMapEnvDataSkyCardsV75::PackMapEnvDataSkyCardsV75( ) {
			}

			PackMapEnvDataSkyCardsV75::PackMapEnvDataSkyCardsV75( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataSkyCardsV75::PackMapEnvDataSkyCardsV75( const PackMapEnvDataSkyCardsV75& p_other )
				: cards( p_other.cards ) {
			}

			PackMapEnvDataSkyCardsV75& PackMapEnvDataSkyCardsV75::operator=( const PackMapEnvDataSkyCardsV75& p_other ) {
				cards = p_other.cards;
				return *this;
			}

			const byte* PackMapEnvDataSkyCardsV75::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, cards );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataSpawnModelDataV46
			//============================================================================/

			PackMapEnvDataSpawnModelDataV46::PackMapEnvDataSpawnModelDataV46( )
				: probability( 0 )
				, delay( 0 )
				, flags( 0 )
				, animSequence( 0 )
				, maxConcurrent( 0 ) {
			}

			PackMapEnvDataSpawnModelDataV46::PackMapEnvDataSpawnModelDataV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataSpawnModelDataV46::PackMapEnvDataSpawnModelDataV46( const PackMapEnvDataSpawnModelDataV46& p_other )
				: spawnRange( p_other.spawnRange )
				, lifeSpan( p_other.lifeSpan )
				, scaleRange( p_other.scaleRange )
				, heightRange( p_other.heightRange )
				, rotXRange( p_other.rotXRange )
				, rotYRange( p_other.rotYRange )
				, rotZRange( p_other.rotZRange )
				, probability( p_other.probability )
				, delay( p_other.delay )
				, flags( p_other.flags )
				, animSequence( p_other.animSequence )
				, modelFile( p_other.modelFile )
				, maxConcurrent( p_other.maxConcurrent ) {
			}

			PackMapEnvDataSpawnModelDataV46& PackMapEnvDataSpawnModelDataV46::operator=( const PackMapEnvDataSpawnModelDataV46& p_other ) {
				spawnRange = p_other.spawnRange;
				lifeSpan = p_other.lifeSpan;
				scaleRange = p_other.scaleRange;
				heightRange = p_other.heightRange;
				rotXRange = p_other.rotXRange;
				rotYRange = p_other.rotYRange;
				rotZRange = p_other.rotZRange;
				probability = p_other.probability;
				delay = p_other.delay;
				flags = p_other.flags;
				animSequence = p_other.animSequence;
				modelFile = p_other.modelFile;
				maxConcurrent = p_other.maxConcurrent;
				return *this;
			}

			const byte* PackMapEnvDataSpawnModelDataV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, spawnRange );
				p_data = helpers::read( p_data, p_size, lifeSpan );
				p_data = helpers::read( p_data, p_size, scaleRange );
				p_data = helpers::read( p_data, p_size, heightRange );
				p_data = helpers::read( p_data, p_size, rotXRange );
				p_data = helpers::read( p_data, p_size, rotYRange );
				p_data = helpers::read( p_data, p_size, rotZRange );
				p_data = helpers::read( p_data, p_size, probability );
				p_data = helpers::read( p_data, p_size, delay );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, animSequence );
				p_data = helpers::read( p_data, p_size, modelFile );
				p_data = helpers::read( p_data, p_size, maxConcurrent );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataSpawnListV46
			//============================================================================/

			PackMapEnvDataSpawnListV46::PackMapEnvDataSpawnListV46( ) {
			}

			PackMapEnvDataSpawnListV46::PackMapEnvDataSpawnListV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataSpawnListV46::PackMapEnvDataSpawnListV46( const PackMapEnvDataSpawnListV46& p_other )
				: spawns( p_other.spawns ) {
			}

			PackMapEnvDataSpawnListV46& PackMapEnvDataSpawnListV46::operator=( const PackMapEnvDataSpawnListV46& p_other ) {
				spawns = p_other.spawns;
				return *this;
			}

			const byte* PackMapEnvDataSpawnListV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, spawns );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataSpawnGroupsV46
			//============================================================================/

			PackMapEnvDataSpawnGroupsV46::PackMapEnvDataSpawnGroupsV46( ) {
			}

			PackMapEnvDataSpawnGroupsV46::PackMapEnvDataSpawnGroupsV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataSpawnGroupsV46::PackMapEnvDataSpawnGroupsV46( const PackMapEnvDataSpawnGroupsV46& p_other )
				: spawnGroups( p_other.spawnGroups )
				, targets( p_other.targets ) {
			}

			PackMapEnvDataSpawnGroupsV46& PackMapEnvDataSpawnGroupsV46::operator=( const PackMapEnvDataSpawnGroupsV46& p_other ) {
				spawnGroups = p_other.spawnGroups;
				targets = p_other.targets;
				return *this;
			}

			const byte* PackMapEnvDataSpawnGroupsV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, spawnGroups );
				p_data = helpers::read( p_data, p_size, targets );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataWaterV75
			//============================================================================/

			PackMapEnvDataWaterV75::PackMapEnvDataWaterV75( )
				: waterFlags( 0 )
				, animAmplitude( 0 )
				, animChoppiness( 0 )
				, bumpAmount( 0 )
				, bumpAngle0( 0 )
				, bumpAngle1( 0 )
				, bumpScale0( 0 )
				, bumpScale1( 0 )
				, bumpSpeed0( 0 )
				, bumpSpeed1( 0 )
				, bumpTile0( 0 )
				, bumpTile1( 0 )
				, patternAngle( 0 )
				, patternTile( 0 )
				, patternSpeed( 0 )
				, patternEdge( 0 )
				, surfaceFresnel( 0 )
				, distortAmount( 0 )
				, depthAttenuation( 0 )
				, foamSpawn( 0 )
				, foamDissolve( 0 )
				, foamDepthAttenuation( 0 ) {
			}

			PackMapEnvDataWaterV75::PackMapEnvDataWaterV75( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataWaterV75::PackMapEnvDataWaterV75( const PackMapEnvDataWaterV75& p_other )
				: waterFlags( p_other.waterFlags )
				, animAmplitude( p_other.animAmplitude )
				, animChoppiness( p_other.animChoppiness )
				, animWind( p_other.animWind )
				, bumpAmount( p_other.bumpAmount )
				, bumpAngle0( p_other.bumpAngle0 )
				, bumpAngle1( p_other.bumpAngle1 )
				, bumpScale0( p_other.bumpScale0 )
				, bumpScale1( p_other.bumpScale1 )
				, bumpSpeed0( p_other.bumpSpeed0 )
				, bumpSpeed1( p_other.bumpSpeed1 )
				, bumpTile0( p_other.bumpTile0 )
				, bumpTile1( p_other.bumpTile1 )
				, patternAngle( p_other.patternAngle )
				, patternTile( p_other.patternTile )
				, patternSpeed( p_other.patternSpeed )
				, patternEdge( p_other.patternEdge )
				, surfaceShallowColor( p_other.surfaceShallowColor )
				, surfaceDeepColor( p_other.surfaceDeepColor )
				, patternColor( p_other.patternColor )
				, surfaceFresnel( p_other.surfaceFresnel )
				, distortAmount( p_other.distortAmount )
				, depthAttenuation( p_other.depthAttenuation )
				, materialFilename( p_other.materialFilename )
				, textureFilenames( p_other.textureFilenames )
				, constantTokens( p_other.constantTokens )
				, constantValues( p_other.constantValues )
				, foamSpawn( p_other.foamSpawn )
				, foamDissolve( p_other.foamDissolve )
				, foamDepthAttenuation( p_other.foamDepthAttenuation )
				, foamColor0( p_other.foamColor0 )
				, foamColor1( p_other.foamColor1 ) {
			}

			PackMapEnvDataWaterV75& PackMapEnvDataWaterV75::operator=( const PackMapEnvDataWaterV75& p_other ) {
				waterFlags = p_other.waterFlags;
				animAmplitude = p_other.animAmplitude;
				animChoppiness = p_other.animChoppiness;
				animWind = p_other.animWind;
				bumpAmount = p_other.bumpAmount;
				bumpAngle0 = p_other.bumpAngle0;
				bumpAngle1 = p_other.bumpAngle1;
				bumpScale0 = p_other.bumpScale0;
				bumpScale1 = p_other.bumpScale1;
				bumpSpeed0 = p_other.bumpSpeed0;
				bumpSpeed1 = p_other.bumpSpeed1;
				bumpTile0 = p_other.bumpTile0;
				bumpTile1 = p_other.bumpTile1;
				patternAngle = p_other.patternAngle;
				patternTile = p_other.patternTile;
				patternSpeed = p_other.patternSpeed;
				patternEdge = p_other.patternEdge;
				surfaceShallowColor = p_other.surfaceShallowColor;
				surfaceDeepColor = p_other.surfaceDeepColor;
				patternColor = p_other.patternColor;
				surfaceFresnel = p_other.surfaceFresnel;
				distortAmount = p_other.distortAmount;
				depthAttenuation = p_other.depthAttenuation;
				materialFilename = p_other.materialFilename;
				textureFilenames = p_other.textureFilenames;
				constantTokens = p_other.constantTokens;
				constantValues = p_other.constantValues;
				foamSpawn = p_other.foamSpawn;
				foamDissolve = p_other.foamDissolve;
				foamDepthAttenuation = p_other.foamDepthAttenuation;
				foamColor0 = p_other.foamColor0;
				foamColor1 = p_other.foamColor1;
				return *this;
			}

			const byte* PackMapEnvDataWaterV75::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, waterFlags );
				p_data = helpers::read( p_data, p_size, animAmplitude );
				p_data = helpers::read( p_data, p_size, animChoppiness );
				p_data = helpers::read( p_data, p_size, animWind );
				p_data = helpers::read( p_data, p_size, bumpAmount );
				p_data = helpers::read( p_data, p_size, bumpAngle0 );
				p_data = helpers::read( p_data, p_size, bumpAngle1 );
				p_data = helpers::read( p_data, p_size, bumpScale0 );
				p_data = helpers::read( p_data, p_size, bumpScale1 );
				p_data = helpers::read( p_data, p_size, bumpSpeed0 );
				p_data = helpers::read( p_data, p_size, bumpSpeed1 );
				p_data = helpers::read( p_data, p_size, bumpTile0 );
				p_data = helpers::read( p_data, p_size, bumpTile1 );
				p_data = helpers::read( p_data, p_size, patternAngle );
				p_data = helpers::read( p_data, p_size, patternTile );
				p_data = helpers::read( p_data, p_size, patternSpeed );
				p_data = helpers::read( p_data, p_size, patternEdge );
				p_data = helpers::read( p_data, p_size, surfaceShallowColor );
				p_data = helpers::read( p_data, p_size, surfaceDeepColor );
				p_data = helpers::read( p_data, p_size, patternColor );
				p_data = helpers::read( p_data, p_size, surfaceFresnel );
				p_data = helpers::read( p_data, p_size, distortAmount );
				p_data = helpers::read( p_data, p_size, depthAttenuation );
				p_data = helpers::read( p_data, p_size, materialFilename );
				p_data = helpers::read( p_data, p_size, textureFilenames );
				p_data = helpers::read( p_data, p_size, constantTokens );
				p_data = helpers::read( p_data, p_size, constantValues );
				p_data = helpers::read( p_data, p_size, foamSpawn );
				p_data = helpers::read( p_data, p_size, foamDissolve );
				p_data = helpers::read( p_data, p_size, foamDepthAttenuation );
				p_data = helpers::read( p_data, p_size, foamColor0 );
				p_data = helpers::read( p_data, p_size, foamColor1 );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataWindV75
			//============================================================================/

			PackMapEnvDataWindV75::PackMapEnvDataWindV75( )
				: azimuth( 0 )
				, elevation( 0 )
				, noise( 0 )
				, speed( 0 )
				, gust( 0 )
				, gustFreq( 0 )
				, gustSpeed( 0 ) {
			}

			PackMapEnvDataWindV75::PackMapEnvDataWindV75( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataWindV75::PackMapEnvDataWindV75( const PackMapEnvDataWindV75& p_other )
				: azimuth( p_other.azimuth )
				, elevation( p_other.elevation )
				, noise( p_other.noise )
				, speed( p_other.speed )
				, gust( p_other.gust )
				, gustFreq( p_other.gustFreq )
				, gustSpeed( p_other.gustSpeed ) {
			}

			PackMapEnvDataWindV75& PackMapEnvDataWindV75::operator=( const PackMapEnvDataWindV75& p_other ) {
				azimuth = p_other.azimuth;
				elevation = p_other.elevation;
				noise = p_other.noise;
				speed = p_other.speed;
				gust = p_other.gust;
				gustFreq = p_other.gustFreq;
				gustSpeed = p_other.gustSpeed;
				return *this;
			}

			const byte* PackMapEnvDataWindV75::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, azimuth );
				p_data = helpers::read( p_data, p_size, elevation );
				p_data = helpers::read( p_data, p_size, noise );
				p_data = helpers::read( p_data, p_size, speed );
				p_data = helpers::read( p_data, p_size, gust );
				p_data = helpers::read( p_data, p_size, gustFreq );
				p_data = helpers::read( p_data, p_size, gustSpeed );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataAudioV46
			//============================================================================/

			PackMapEnvDataAudioV46::PackMapEnvDataAudioV46( )
				: token( 0 ) {
			}

			PackMapEnvDataAudioV46::PackMapEnvDataAudioV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataAudioV46::PackMapEnvDataAudioV46( const PackMapEnvDataAudioV46& p_other )
				: token( p_other.token ) {
			}

			PackMapEnvDataAudioV46& PackMapEnvDataAudioV46::operator=( const PackMapEnvDataAudioV46& p_other ) {
				token = p_other.token;
				return *this;
			}

			const byte* PackMapEnvDataAudioV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, token );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataBaseEx2V46
			//============================================================================/

			PackMapEnvDataBaseEx2V46::PackMapEnvDataBaseEx2V46( )
				: dummy( 0 ) {
			}

			PackMapEnvDataBaseEx2V46::PackMapEnvDataBaseEx2V46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataBaseEx2V46::PackMapEnvDataBaseEx2V46( const PackMapEnvDataBaseEx2V46& p_other )
				: dummy( p_other.dummy ) {
			}

			PackMapEnvDataBaseEx2V46& PackMapEnvDataBaseEx2V46::operator=( const PackMapEnvDataBaseEx2V46& p_other ) {
				dummy = p_other.dummy;
				return *this;
			}

			const byte* PackMapEnvDataBaseEx2V46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, dummy );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataBaseExV46
			//============================================================================/

			PackMapEnvDataBaseExV46::PackMapEnvDataBaseExV46( )
				: brightTime( 0 )
				, dimTime( 0 )
				, darkCoeff( 0 )
				, darkExp( 0 )
				, darkMin( 0 )
				, darkMax( 0 )
				, brightMin( 0 )
				, brightMax( 0 )
				, brightScale( 0 )
				, darkScale( 0 ) {
			}

			PackMapEnvDataBaseExV46::PackMapEnvDataBaseExV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataBaseExV46::PackMapEnvDataBaseExV46( const PackMapEnvDataBaseExV46& p_other )
				: ext2( p_other.ext2 )
				, brightTime( p_other.brightTime )
				, dimTime( p_other.dimTime )
				, darkCoeff( p_other.darkCoeff )
				, darkExp( p_other.darkExp )
				, darkMin( p_other.darkMin )
				, darkMax( p_other.darkMax )
				, brightMin( p_other.brightMin )
				, brightMax( p_other.brightMax )
				, brightScale( p_other.brightScale )
				, darkScale( p_other.darkScale )
				, waterReflectionParams( p_other.waterReflectionParams ) {
			}

			PackMapEnvDataBaseExV46& PackMapEnvDataBaseExV46::operator=( const PackMapEnvDataBaseExV46& p_other ) {
				ext2 = p_other.ext2;
				brightTime = p_other.brightTime;
				dimTime = p_other.dimTime;
				darkCoeff = p_other.darkCoeff;
				darkExp = p_other.darkExp;
				darkMin = p_other.darkMin;
				darkMax = p_other.darkMax;
				brightMin = p_other.brightMin;
				brightMax = p_other.brightMax;
				brightScale = p_other.brightScale;
				darkScale = p_other.darkScale;
				waterReflectionParams = p_other.waterReflectionParams;
				return *this;
			}

			const byte* PackMapEnvDataBaseExV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, ext2 );
				p_data = helpers::read( p_data, p_size, brightTime );
				p_data = helpers::read( p_data, p_size, dimTime );
				p_data = helpers::read( p_data, p_size, darkCoeff );
				p_data = helpers::read( p_data, p_size, darkExp );
				p_data = helpers::read( p_data, p_size, darkMin );
				p_data = helpers::read( p_data, p_size, darkMax );
				p_data = helpers::read( p_data, p_size, brightMin );
				p_data = helpers::read( p_data, p_size, brightMax );
				p_data = helpers::read( p_data, p_size, brightScale );
				p_data = helpers::read( p_data, p_size, darkScale );
				p_data = helpers::read( p_data, p_size, waterReflectionParams );
				return p_data;
			}


			//============================================================================/
			//      PackMapEnvDataShapeV46
			//============================================================================/

			PackMapEnvDataShapeV46::PackMapEnvDataShapeV46( )
				: height( 0 )
				, fadeHorizInner( 0 )
				, fadeHorizOuter( 0 )
				, fadeVertical( 0 )
				, shapeType( 0 ) {
			}

			PackMapEnvDataShapeV46::PackMapEnvDataShapeV46( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataShapeV46::PackMapEnvDataShapeV46( const PackMapEnvDataShapeV46& p_other )
				: center( p_other.center )
				, height( p_other.height )
				, fadeHorizInner( p_other.fadeHorizInner )
				, fadeHorizOuter( p_other.fadeHorizOuter )
				, fadeVertical( p_other.fadeVertical )
				, vertexArray( p_other.vertexArray )
				, shapeType( p_other.shapeType ) {
			}

			PackMapEnvDataShapeV46& PackMapEnvDataShapeV46::operator=( const PackMapEnvDataShapeV46& p_other ) {
				center = p_other.center;
				height = p_other.height;
				fadeHorizInner = p_other.fadeHorizInner;
				fadeHorizOuter = p_other.fadeHorizOuter;
				fadeVertical = p_other.fadeVertical;
				vertexArray = p_other.vertexArray;
				shapeType = p_other.shapeType;
				return *this;
			}

			const byte* PackMapEnvDataShapeV46::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, center );
				p_data = helpers::read( p_data, p_size, height );
				p_data = helpers::read( p_data, p_size, fadeHorizInner );
				p_data = helpers::read( p_data, p_size, fadeHorizOuter );
				p_data = helpers::read( p_data, p_size, fadeVertical );
				p_data = helpers::read( p_data, p_size, vertexArray );
				p_data = helpers::read( p_data, p_size, shapeType );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataLocalV75
			//============================================================================/

			PackMapEnvDataLocalV75::PackMapEnvDataLocalV75( )
				: bindTarget( 0 )
				, flags( 0 )
				, type( 0 )
				, guid( 0 ) {
			}

			PackMapEnvDataLocalV75::PackMapEnvDataLocalV75( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataLocalV75::PackMapEnvDataLocalV75( const PackMapEnvDataLocalV75& p_other )
				: lighting( p_other.lighting )
				, lightingCharGroups( p_other.lightingCharGroups )
				, clouds( p_other.clouds )
				, coloredLightRings( p_other.coloredLightRings )
				, effect( p_other.effect )
				, haze( p_other.haze )
				, particleFields( p_other.particleFields )
				, particleFieldCutouts( p_other.particleFieldCutouts )
				, sky( p_other.sky )
				, skyCards( p_other.skyCards )
				, spawns( p_other.spawns )
				, water( p_other.water )
				, wind( p_other.wind )
				, audio( p_other.audio )
				, name( p_other.name )
				, nightMods( p_other.nightMods )
				, bindTarget( p_other.bindTarget )
				, flags( p_other.flags )
				, ext( p_other.ext )
				, type( p_other.type )
				, guid( p_other.guid )
				, shapeArray( p_other.shapeArray ) {
			}

			PackMapEnvDataLocalV75& PackMapEnvDataLocalV75::operator=( const PackMapEnvDataLocalV75& p_other ) {
				lighting = p_other.lighting;
				lightingCharGroups = p_other.lightingCharGroups;
				clouds = p_other.clouds;
				coloredLightRings = p_other.coloredLightRings;
				effect = p_other.effect;
				haze = p_other.haze;
				particleFields = p_other.particleFields;
				particleFieldCutouts = p_other.particleFieldCutouts;
				sky = p_other.sky;
				skyCards = p_other.skyCards;
				spawns = p_other.spawns;
				water = p_other.water;
				wind = p_other.wind;
				audio = p_other.audio;
				name = p_other.name;
				nightMods = p_other.nightMods;
				bindTarget = p_other.bindTarget;
				flags = p_other.flags;
				ext = p_other.ext;
				type = p_other.type;
				guid = p_other.guid;
				shapeArray = p_other.shapeArray;
				return *this;
			}

			const byte* PackMapEnvDataLocalV75::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, lighting );
				p_data = helpers::read( p_data, p_size, lightingCharGroups );
				p_data = helpers::read( p_data, p_size, clouds );
				p_data = helpers::read( p_data, p_size, coloredLightRings );
				p_data = helpers::read( p_data, p_size, effect );
				p_data = helpers::read( p_data, p_size, haze );
				p_data = helpers::read( p_data, p_size, particleFields );
				p_data = helpers::read( p_data, p_size, particleFieldCutouts );
				p_data = helpers::read( p_data, p_size, sky );
				p_data = helpers::read( p_data, p_size, skyCards );
				p_data = helpers::read( p_data, p_size, spawns );
				p_data = helpers::read( p_data, p_size, water );
				p_data = helpers::read( p_data, p_size, wind );
				p_data = helpers::read( p_data, p_size, audio );
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, nightMods );
				p_data = helpers::read( p_data, p_size, bindTarget );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, ext );
				p_data = helpers::read( p_data, p_size, type );
				p_data = helpers::read( p_data, p_size, guid );
				p_data = helpers::read( p_data, p_size, shapeArray );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataSkyModeTexV75
			//============================================================================/

			PackMapEnvDataSkyModeTexV75::PackMapEnvDataSkyModeTexV75( ) {
			}

			PackMapEnvDataSkyModeTexV75::PackMapEnvDataSkyModeTexV75( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataSkyModeTexV75::PackMapEnvDataSkyModeTexV75( const PackMapEnvDataSkyModeTexV75& p_other )
				: texPathNE( p_other.texPathNE )
				, texPathSW( p_other.texPathSW )
				, texPathT( p_other.texPathT ) {
			}

			PackMapEnvDataSkyModeTexV75& PackMapEnvDataSkyModeTexV75::operator=( const PackMapEnvDataSkyModeTexV75& p_other ) {
				texPathNE = p_other.texPathNE;
				texPathSW = p_other.texPathSW;
				texPathT = p_other.texPathT;
				return *this;
			}

			const byte* PackMapEnvDataSkyModeTexV75::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, texPathNE );
				p_data = helpers::read( p_data, p_size, texPathSW );
				p_data = helpers::read( p_data, p_size, texPathT );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvDataGlobalV75
			//============================================================================/

			PackMapEnvDataGlobalV75::PackMapEnvDataGlobalV75( )
				: bindTarget( 0 )
				, flags( 0 ) {
			}

			PackMapEnvDataGlobalV75::PackMapEnvDataGlobalV75( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvDataGlobalV75::PackMapEnvDataGlobalV75( const PackMapEnvDataGlobalV75& p_other )
				: lighting( p_other.lighting )
				, lightingCharGroups( p_other.lightingCharGroups )
				, clouds( p_other.clouds )
				, coloredLightRings( p_other.coloredLightRings )
				, effect( p_other.effect )
				, haze( p_other.haze )
				, particleFields( p_other.particleFields )
				, particleFieldCutouts( p_other.particleFieldCutouts )
				, sky( p_other.sky )
				, skyCards( p_other.skyCards )
				, spawns( p_other.spawns )
				, water( p_other.water )
				, wind( p_other.wind )
				, audio( p_other.audio )
				, name( p_other.name )
				, nightMods( p_other.nightMods )
				, bindTarget( p_other.bindTarget )
				, flags( p_other.flags )
				, ext( p_other.ext )
				, skyModeTex( p_other.skyModeTex )
				, starFile( p_other.starFile ) {
			}

			PackMapEnvDataGlobalV75& PackMapEnvDataGlobalV75::operator=( const PackMapEnvDataGlobalV75& p_other ) {
				lighting = p_other.lighting;
				lightingCharGroups = p_other.lightingCharGroups;
				clouds = p_other.clouds;
				coloredLightRings = p_other.coloredLightRings;
				effect = p_other.effect;
				haze = p_other.haze;
				particleFields = p_other.particleFields;
				particleFieldCutouts = p_other.particleFieldCutouts;
				sky = p_other.sky;
				skyCards = p_other.skyCards;
				spawns = p_other.spawns;
				water = p_other.water;
				wind = p_other.wind;
				audio = p_other.audio;
				name = p_other.name;
				nightMods = p_other.nightMods;
				bindTarget = p_other.bindTarget;
				flags = p_other.flags;
				ext = p_other.ext;
				skyModeTex = p_other.skyModeTex;
				starFile = p_other.starFile;
				return *this;
			}

			const byte* PackMapEnvDataGlobalV75::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, lighting );
				p_data = helpers::read( p_data, p_size, lightingCharGroups );
				p_data = helpers::read( p_data, p_size, clouds );
				p_data = helpers::read( p_data, p_size, coloredLightRings );
				p_data = helpers::read( p_data, p_size, effect );
				p_data = helpers::read( p_data, p_size, haze );
				p_data = helpers::read( p_data, p_size, particleFields );
				p_data = helpers::read( p_data, p_size, particleFieldCutouts );
				p_data = helpers::read( p_data, p_size, sky );
				p_data = helpers::read( p_data, p_size, skyCards );
				p_data = helpers::read( p_data, p_size, spawns );
				p_data = helpers::read( p_data, p_size, water );
				p_data = helpers::read( p_data, p_size, wind );
				p_data = helpers::read( p_data, p_size, audio );
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, nightMods );
				p_data = helpers::read( p_data, p_size, bindTarget );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, ext );
				p_data = helpers::read( p_data, p_size, skyModeTex );
				p_data = helpers::read( p_data, p_size, starFile );
				return p_data;
			}

			//============================================================================/
			//      PackMapEnvironmentV75
			//============================================================================/

			PackMapEnvironmentV75::PackMapEnvironmentV75( ) {
			}

			PackMapEnvironmentV75::PackMapEnvironmentV75( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapEnvironmentV75::PackMapEnvironmentV75( const PackMapEnvironmentV75& p_other )
				: dataLocalArray( p_other.dataLocalArray )
				, dataGlobal( p_other.dataGlobal ) {
			}

			PackMapEnvironmentV75& PackMapEnvironmentV75::operator=( const PackMapEnvironmentV75& p_other ) {
				dataLocalArray = p_other.dataLocalArray;
				dataGlobal = p_other.dataGlobal;
				return *this;
			}

			const byte* PackMapEnvironmentV75::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, dataLocalArray );
				p_data = helpers::read( p_data, p_size, dataGlobal );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
