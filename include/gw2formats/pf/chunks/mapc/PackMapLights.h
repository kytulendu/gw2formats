// File: gw2formats/pf/chunks/mapc/PackMapLights.h

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

// Filetype: mapc
// Chunktype: lght

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPLIGHTS_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPLIGHTS_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/FileName.h>
#include <gw2formats/pf/helpers/Ptr.h>
#include <gw2formats/pf/helpers/Vector.h>
#include <gw2formats/pf/helpers/WString.h>

#include <gw2formats/pf/chunks/mapc/common.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			GW2FORMATS_API struct PackMapLightV19 {
				float3 position;
				byte3 color;
				float intensity;
				float nearDistance;
				float farDistance;
				dword flags;
			public:
				PackMapLightV19( );
				PackMapLightV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapLightV19( const PackMapLightV19& p_other );
				PackMapLightV19& operator=( const PackMapLightV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapCurveV19 {
				float gust;
				float gustFreq;
				float noise;
				float phase;
				float offset;
				float amplitude;
				dword curveType;
			public:
				PackMapCurveV19( );
				PackMapCurveV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapCurveV19( const PackMapCurveV19& p_other );
				PackMapCurveV19& operator=( const PackMapCurveV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapPointLightgroupsV19 {
				qword guid;
				helpers::Array<PackMapLightV19> lights;
				helpers::Array<PackMapCurveV19> curves;
				word broadId;
			public:
				PackMapPointLightgroupsV19( );
				PackMapPointLightgroupsV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapPointLightgroupsV19( const PackMapPointLightgroupsV19& p_other );
				PackMapPointLightgroupsV19& operator=( const PackMapPointLightgroupsV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapPortalDataV19 {
				float fadeCamera;
				float fadeLight;
				float lighten;
				float darken;
			public:
				PackMapPortalDataV19( );
				PackMapPortalDataV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapPortalDataV19( const PackMapPortalDataV19& p_other );
				PackMapPortalDataV19& operator=( const PackMapPortalDataV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapPortalLightV19 {
				qword guid;
				helpers::Array<float3> points;
				helpers::Array<PackMapPortalDataV19> portalData;
				word broadId;
			public:
				PackMapPortalLightV19( );
				PackMapPortalLightV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapPortalLightV19( const PackMapPortalLightV19& p_other );
				PackMapPortalLightV19& operator=( const PackMapPortalLightV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapSpotShadowV19 {
				helpers::FileName shadowFilename;
			public:
				PackMapSpotShadowV19( );
				PackMapSpotShadowV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapSpotShadowV19( const PackMapSpotShadowV19& p_other );
				PackMapSpotShadowV19& operator=( const PackMapSpotShadowV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapSpotLodV19 {
				float distance;
				dword flags;
				dword lightFlags;
				byte3 color;
				float intensity;
				float nearDist;
				float farDist;
				float innerAngle;
				float outerAngle;
			public:
				PackMapSpotLodV19( );
				PackMapSpotLodV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapSpotLodV19( const PackMapSpotLodV19& p_other );
				PackMapSpotLodV19& operator=( const PackMapSpotLodV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapSpotLightV19 {
				float3 position;
				byte3 color;
				float intensity;
				float nearDistance;
				float farDistance;
				dword flags;
				float3 direction;
				float3 upDirection;
				float innerAngle;
				float outerAngle;
				helpers::FileName textureName;
				helpers::Ptr<PackMapSpotShadowV19> shadowData;
				PackMapSpotLodV19 lodData[2];
			public:
				PackMapSpotLightV19( );
				PackMapSpotLightV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapSpotLightV19( const PackMapSpotLightV19& p_other );
				PackMapSpotLightV19& operator=( const PackMapSpotLightV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapSpotLightgroupsV19 {
				qword guid;
				helpers::Array<PackMapSpotLightV19> lights;
				helpers::Array<PackMapCurveV19> curves;
				word broadId;
			public:
				PackMapSpotLightgroupsV19( );
				PackMapSpotLightgroupsV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapSpotLightgroupsV19( const PackMapSpotLightgroupsV19& p_other );
				PackMapSpotLightgroupsV19& operator=( const PackMapSpotLightgroupsV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapVolumeImageV19 {
				helpers::FileName filename;
				dword2 dims;
				dword format;
				helpers::Array<byte> image;
			public:
				PackMapVolumeImageV19( );
				PackMapVolumeImageV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapVolumeImageV19( const PackMapVolumeImageV19& p_other );
				PackMapVolumeImageV19& operator=( const PackMapVolumeImageV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapVolumeLightV19 {
				qword guid;
				float3 position;
				float3 extents;
				float3 rotation;
				float2 intensities;
				float4 pack;
				helpers::WString name;
				helpers::Array<float3> floodPoints;
				dword flags;
				helpers::Array<PackMapVolumeImageV19> images;
				word broadId;
			public:
				PackMapVolumeLightV19( );
				PackMapVolumeLightV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapVolumeLightV19( const PackMapVolumeLightV19& p_other );
				PackMapVolumeLightV19& operator=( const PackMapVolumeLightV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapLightsV19 {
				helpers::Array<PackMapPointLightgroupsV19> pointLights;
				helpers::Array<PackMapPortalLightV19> portalLights;
				helpers::Array<PackMapSpotLightgroupsV19> spotLights;
				helpers::Array<PackMapVolumeLightV19> volumeLights;
				PackBroadphaseType broadPhase;
				word maxBroadId;
				dword maxLightVsConstants;
			public:
				PackMapLightsV19( );
				PackMapLightsV19( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapLightsV19( const PackMapLightsV19& p_other );
				PackMapLightsV19& operator=( const PackMapLightsV19& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef PackMapLightsV19 PackMapLights;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::mapc, fcc::lght> { typedef chunks::PackMapLights Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_MAPC_PACKMAPLIGHTS_H_INCLUDED
