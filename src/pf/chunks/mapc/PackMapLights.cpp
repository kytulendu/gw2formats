// File: pf/chunks/mapc/PackMapLights.cpp

/*
Copyright (C) 2014 Khralkatorrix <https://github.com/kytulendu>
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

#include <gw2formats/pf/chunks/mapc/PackMapLights.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      PackMapLightV19
			//============================================================================/

			PackMapLightV19::PackMapLightV19( )
				: intensity( 0 )
				, nearDistance( 0 )
				, farDistance( 0 )
				, flags( 0 ) {
			}

			PackMapLightV19::PackMapLightV19( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapLightV19::PackMapLightV19( const PackMapLightV19& p_other )
				: position( p_other.position )
				, color( p_other.color )
				, intensity( p_other.intensity )
				, nearDistance( p_other.nearDistance )
				, farDistance( p_other.farDistance )
				, flags( p_other.flags ) {
			}

			PackMapLightV19& PackMapLightV19::operator=( const PackMapLightV19& p_other ) {
				position = p_other.position;
				color = p_other.color;
				intensity = p_other.intensity;
				nearDistance = p_other.nearDistance;
				farDistance = p_other.farDistance;
				flags = p_other.flags;
				return *this;
			}

			const byte* PackMapLightV19::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, position );
				p_data = helpers::read( p_data, p_size, color );
				p_data = helpers::read( p_data, p_size, intensity );
				p_data = helpers::read( p_data, p_size, nearDistance );
				p_data = helpers::read( p_data, p_size, farDistance );
				p_data = helpers::read( p_data, p_size, flags );
				return p_data;
			}

			//============================================================================/
			//      PackMapCurveV19
			//============================================================================/

			PackMapCurveV19::PackMapCurveV19( )
				: gust( 0 )
				, gustFreq( 0 )
				, noise( 0 )
				, phase( 0 )
				, offset( 0 )
				, amplitude( 0 )
				, curveType( 0 ) {
			}

			PackMapCurveV19::PackMapCurveV19( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapCurveV19::PackMapCurveV19( const PackMapCurveV19& p_other )
				: gust( p_other.gust )
				, gustFreq( p_other.gustFreq )
				, noise( p_other.noise )
				, phase( p_other.phase )
				, offset( p_other.offset )
				, amplitude( p_other.amplitude )
				, curveType( p_other.curveType ) {
			}

			PackMapCurveV19& PackMapCurveV19::operator=( const PackMapCurveV19& p_other ) {
				gust = p_other.gust;
				gustFreq = p_other.gustFreq;
				noise = p_other.noise;
				phase = p_other.phase;
				offset = p_other.offset;
				amplitude = p_other.amplitude;
				curveType = p_other.curveType;
				return *this;
			}

			const byte* PackMapCurveV19::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, gust );
				p_data = helpers::read( p_data, p_size, gustFreq );
				p_data = helpers::read( p_data, p_size, noise );
				p_data = helpers::read( p_data, p_size, phase );
				p_data = helpers::read( p_data, p_size, offset );
				p_data = helpers::read( p_data, p_size, amplitude );
				p_data = helpers::read( p_data, p_size, curveType );
				return p_data;
			}

			//============================================================================/
			//      PackMapPointLightgroupsV19
			//============================================================================/

			PackMapPointLightgroupsV19::PackMapPointLightgroupsV19( )
				: guid( 0 )
				, broadId( 0 ) {
			}

			PackMapPointLightgroupsV19::PackMapPointLightgroupsV19( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapPointLightgroupsV19::PackMapPointLightgroupsV19( const PackMapPointLightgroupsV19& p_other )
				: guid( p_other.guid )
				, lights( p_other.lights )
				, curves( p_other.curves )
				, broadId( p_other.broadId ) {
			}

			PackMapPointLightgroupsV19& PackMapPointLightgroupsV19::operator=( const PackMapPointLightgroupsV19& p_other ) {
				guid = p_other.guid;
				lights = p_other.lights;
				curves = p_other.curves;
				broadId = p_other.broadId;
				return *this;
			}

			const byte* PackMapPointLightgroupsV19::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, guid );
				p_data = helpers::read( p_data, p_size, lights );
				p_data = helpers::read( p_data, p_size, curves );
				p_data = helpers::read( p_data, p_size, broadId );
				return p_data;
			}

			//============================================================================/
			//      PackMapPortalDataV19
			//============================================================================/

			PackMapPortalDataV19::PackMapPortalDataV19( )
				: fadeCamera( 0 )
				, fadeLight( 0 )
				, lighten( 0 )
				, darken( 0 ) {
			}

			PackMapPortalDataV19::PackMapPortalDataV19( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapPortalDataV19::PackMapPortalDataV19( const PackMapPortalDataV19& p_other )
				: fadeCamera( p_other.fadeCamera )
				, fadeLight( p_other.fadeLight )
				, lighten( p_other.lighten )
				, darken( p_other.darken ) {
			}

			PackMapPortalDataV19& PackMapPortalDataV19::operator=( const PackMapPortalDataV19& p_other ) {
				fadeCamera = p_other.fadeCamera;
				fadeLight = p_other.fadeLight;
				lighten = p_other.lighten;
				darken = p_other.darken;
				return *this;
			}

			const byte* PackMapPortalDataV19::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, fadeCamera );
				p_data = helpers::read( p_data, p_size, fadeLight );
				p_data = helpers::read( p_data, p_size, lighten );
				p_data = helpers::read( p_data, p_size, darken );
				return p_data;
			}

			//============================================================================/
			//      PackMapPortalLightV19
			//============================================================================/

			PackMapPortalLightV19::PackMapPortalLightV19( )
				: guid( 0 )
				, broadId( 0 ) {
			}

			PackMapPortalLightV19::PackMapPortalLightV19( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapPortalLightV19::PackMapPortalLightV19( const PackMapPortalLightV19& p_other )
				: guid( p_other.guid )
				, points( p_other.points )
				, portalData( p_other.portalData )
				, broadId( p_other.broadId ) {
			}

			PackMapPortalLightV19& PackMapPortalLightV19::operator=( const PackMapPortalLightV19& p_other ) {
				guid = p_other.guid;
				points = p_other.points;
				portalData = p_other.portalData;
				broadId = p_other.broadId;
				return *this;
			}

			const byte* PackMapPortalLightV19::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, guid );
				p_data = helpers::read( p_data, p_size, points );
				p_data = helpers::read( p_data, p_size, portalData );
				p_data = helpers::read( p_data, p_size, broadId );
				return p_data;
			}

			//============================================================================/
			//      PackMapSpotShadowV19
			//============================================================================/

			PackMapSpotShadowV19::PackMapSpotShadowV19( ) {
			}

			PackMapSpotShadowV19::PackMapSpotShadowV19( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapSpotShadowV19::PackMapSpotShadowV19( const PackMapSpotShadowV19& p_other )
				: shadowFilename( p_other.shadowFilename ) {
			}

			PackMapSpotShadowV19& PackMapSpotShadowV19::operator=( const PackMapSpotShadowV19& p_other ) {
				shadowFilename = p_other.shadowFilename;
				return *this;
			}

			const byte* PackMapSpotShadowV19::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, shadowFilename );
				return p_data;
			}

			//============================================================================/
			//      PackMapSpotLodV19
			//============================================================================/

			PackMapSpotLodV19::PackMapSpotLodV19( )
				: distance( 0 )
				, flags( 0 )
				, lightFlags( 0 )
				, intensity( 0 )
				, nearDist( 0 )
				, farDist( 0 )
				, innerAngle( 0 )
				, outerAngle( 0 ) {
			}

			PackMapSpotLodV19::PackMapSpotLodV19( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapSpotLodV19::PackMapSpotLodV19( const PackMapSpotLodV19& p_other )
				: distance( p_other.distance )
				, flags( p_other.flags )
				, lightFlags( p_other.lightFlags )
				, color( p_other.color )
				, intensity( p_other.intensity )
				, nearDist( p_other.nearDist )
				, farDist( p_other.farDist )
				, innerAngle( p_other.innerAngle )
				, outerAngle( p_other.outerAngle ) {
			}

			PackMapSpotLodV19& PackMapSpotLodV19::operator=( const PackMapSpotLodV19& p_other ) {
				distance = p_other.distance;
				flags = p_other.flags;
				lightFlags = p_other.lightFlags;
				color = p_other.color;
				intensity = p_other.intensity;
				nearDist = p_other.nearDist;
				farDist = p_other.farDist;
				innerAngle = p_other.innerAngle;
				outerAngle = p_other.outerAngle;
				return *this;
			}

			const byte* PackMapSpotLodV19::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, distance );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, lightFlags );
				p_data = helpers::read( p_data, p_size, color );
				p_data = helpers::read( p_data, p_size, intensity );
				p_data = helpers::read( p_data, p_size, nearDist );
				p_data = helpers::read( p_data, p_size, farDist );
				p_data = helpers::read( p_data, p_size, innerAngle );
				p_data = helpers::read( p_data, p_size, outerAngle );
				return p_data;
			}

			//============================================================================/
			//      PackMapSpotLightV19
			//============================================================================/

			PackMapSpotLightV19::PackMapSpotLightV19( )
				: intensity( 0 )
				, nearDistance( 0 )
				, farDistance( 0 )
				, flags( 0 )
				, innerAngle( 0 )
				, outerAngle( 0 ) {
			}

			PackMapSpotLightV19::PackMapSpotLightV19( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapSpotLightV19::PackMapSpotLightV19( const PackMapSpotLightV19& p_other )
				: position( p_other.position )
				, color( p_other.color )
				, intensity( p_other.intensity )
				, nearDistance( p_other.nearDistance )
				, farDistance( p_other.farDistance )
				, flags( p_other.flags )
				, direction( p_other.direction )
				, upDirection( p_other.upDirection )
				, innerAngle( p_other.innerAngle )
				, outerAngle( p_other.outerAngle )
				, textureName( p_other.textureName )
				, shadowData( p_other.shadowData ) {
			}

			PackMapSpotLightV19& PackMapSpotLightV19::operator=( const PackMapSpotLightV19& p_other ) {
				position = p_other.position;
				color = p_other.color;
				intensity = p_other.intensity;
				nearDistance = p_other.nearDistance;
				farDistance = p_other.farDistance;
				flags = p_other.flags;
				direction = p_other.direction;
				upDirection = p_other.upDirection;
				innerAngle = p_other.innerAngle;
				outerAngle = p_other.outerAngle;
				textureName = p_other.textureName;
				shadowData = p_other.shadowData;
				return *this;
			}

			const byte* PackMapSpotLightV19::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, position );
				p_data = helpers::read( p_data, p_size, color );
				p_data = helpers::read( p_data, p_size, intensity );
				p_data = helpers::read( p_data, p_size, nearDistance );
				p_data = helpers::read( p_data, p_size, farDistance );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, direction );
				p_data = helpers::read( p_data, p_size, upDirection );
				p_data = helpers::read( p_data, p_size, innerAngle );
				p_data = helpers::read( p_data, p_size, outerAngle );
				p_data = helpers::read( p_data, p_size, textureName );
				p_data = helpers::read( p_data, p_size, shadowData );
				return p_data;
			}

			//============================================================================/
			//      PackMapSpotLightgroupsV19
			//============================================================================/

			PackMapSpotLightgroupsV19::PackMapSpotLightgroupsV19( )
				: guid( 0 )
				, broadId( 0 ) {
			}

			PackMapSpotLightgroupsV19::PackMapSpotLightgroupsV19( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapSpotLightgroupsV19::PackMapSpotLightgroupsV19( const PackMapSpotLightgroupsV19& p_other )
				: guid( p_other.guid )
				, lights( p_other.lights )
				, curves( p_other.curves )
				, broadId( p_other.broadId ) {
			}

			PackMapSpotLightgroupsV19& PackMapSpotLightgroupsV19::operator=( const PackMapSpotLightgroupsV19& p_other ) {
				guid = p_other.guid;
				lights = p_other.lights;
				curves = p_other.curves;
				broadId = p_other.broadId;
				return *this;
			}

			const byte* PackMapSpotLightgroupsV19::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, guid );
				p_data = helpers::read( p_data, p_size, lights );
				p_data = helpers::read( p_data, p_size, curves );
				p_data = helpers::read( p_data, p_size, broadId );
				return p_data;
			}

			//============================================================================/
			//      PackMapVolumeImageV19
			//============================================================================/

			PackMapVolumeImageV19::PackMapVolumeImageV19( )
				: format( 0 ) {
			}

			PackMapVolumeImageV19::PackMapVolumeImageV19( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapVolumeImageV19::PackMapVolumeImageV19( const PackMapVolumeImageV19& p_other )
				: filename( p_other.filename )
				, dims( p_other.dims )
				, format( p_other.format )
				, image( p_other.image ) {
			}

			PackMapVolumeImageV19& PackMapVolumeImageV19::operator=( const PackMapVolumeImageV19& p_other ) {
				filename = p_other.filename;
				dims = p_other.dims;
				format = p_other.format;
				image = p_other.image;
				return *this;
			}

			const byte* PackMapVolumeImageV19::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, filename );
				p_data = helpers::read( p_data, p_size, dims );
				p_data = helpers::read( p_data, p_size, format );
				p_data = helpers::read( p_data, p_size, image );
				return p_data;
			}

			//============================================================================/
			//      PackMapVolumeLightV19
			//============================================================================/

			PackMapVolumeLightV19::PackMapVolumeLightV19( )
				: guid( 0 )
				, flags( 0 )
				, broadId( 0 ) {
			}

			PackMapVolumeLightV19::PackMapVolumeLightV19( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapVolumeLightV19::PackMapVolumeLightV19( const PackMapVolumeLightV19& p_other )
				: guid( p_other.guid )
				, position( p_other.position )
				, extents( p_other.extents )
				, rotation( p_other.rotation )
				, intensities( p_other.intensities )
				, pack( p_other.pack )
				, name( p_other.name )
				, floodPoints( p_other.floodPoints )
				, flags( p_other.flags )
				, images( p_other.images )
				, broadId( p_other.broadId ) {
			}

			PackMapVolumeLightV19& PackMapVolumeLightV19::operator=( const PackMapVolumeLightV19& p_other ) {
				guid = p_other.guid;
				position = p_other.position;
				extents = p_other.extents;
				rotation = p_other.rotation;
				intensities = p_other.intensities;
				pack = p_other.pack;
				name = p_other.name;
				floodPoints = p_other.floodPoints;
				flags = p_other.flags;
				images = p_other.images;
				broadId = p_other.broadId;
				return *this;
			}

			const byte* PackMapVolumeLightV19::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, guid );
				p_data = helpers::read( p_data, p_size, position );
				p_data = helpers::read( p_data, p_size, extents );
				p_data = helpers::read( p_data, p_size, rotation );
				p_data = helpers::read( p_data, p_size, intensities );
				p_data = helpers::read( p_data, p_size, pack );
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, floodPoints );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, images );
				p_data = helpers::read( p_data, p_size, broadId );
				return p_data;
			}

			//============================================================================/
			//      PackMapLightsV19
			//============================================================================/

			PackMapLightsV19::PackMapLightsV19( )
				: maxBroadId( 0 )
				, maxLightVsConstants( 0 ) {
			}

			PackMapLightsV19::PackMapLightsV19( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapLightsV19::PackMapLightsV19( const PackMapLightsV19& p_other )
				: pointLights( p_other.pointLights )
				, portalLights( p_other.portalLights )
				, spotLights( p_other.spotLights )
				, volumeLights( p_other.volumeLights )
				, broadPhase( p_other.broadPhase )
				, maxBroadId( p_other.maxBroadId )
				, maxLightVsConstants( p_other.maxLightVsConstants ) {
			}

			PackMapLightsV19& PackMapLightsV19::operator=( const PackMapLightsV19& p_other ) {
				pointLights = p_other.pointLights;
				portalLights = p_other.portalLights;
				spotLights = p_other.spotLights;
				volumeLights = p_other.volumeLights;
				broadPhase = p_other.broadPhase;
				maxBroadId = p_other.maxBroadId;
				maxLightVsConstants = p_other.maxLightVsConstants;
				return *this;
			}

			const byte* PackMapLightsV19::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, pointLights );
				p_data = helpers::read( p_data, p_size, portalLights );
				p_data = helpers::read( p_data, p_size, spotLights );
				p_data = helpers::read( p_data, p_size, volumeLights );
				p_data = helpers::read( p_data, p_size, broadPhase );
				p_data = helpers::read( p_data, p_size, maxBroadId );
				p_data = helpers::read( p_data, p_size, maxLightVsConstants );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
