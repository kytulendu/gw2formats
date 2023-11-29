// File: gw2formats/pf/chunks/mapc/MapAudio.h

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
// Chunktype: audi

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_MAPC_MAPAUDIO_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_MAPC_MAPAUDIO_H_INCLUDED

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

			GW2FORMATS_API struct PackMapAudioRegionV8 {
				dword regionType;
				dword overrideMode;
				helpers::FileName filenameSourceDay;
				helpers::FileName filenameAmbientDay;
				helpers::FileName filenameSourceNight;
				helpers::FileName filenameAmbientNight;
				helpers::FileName filenameInterior;
				float exteriorVolume;
				dword priority;
				helpers::Array<float3> points;
				float3 position;
				float3 orientation;
				float fadeBand;
				float height;
				float radius;
				qword guid;
				dword flags;
			public:
				PackMapAudioRegionV8( );
				PackMapAudioRegionV8( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapAudioRegionV8( const PackMapAudioRegionV8& p_other );
				PackMapAudioRegionV8& operator=( const PackMapAudioRegionV8& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapAudioRegionToolV8 {
				helpers::WString annotation;
			public:
				PackMapAudioRegionToolV8( );
				PackMapAudioRegionToolV8( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapAudioRegionToolV8( const PackMapAudioRegionToolV8& p_other );
				PackMapAudioRegionToolV8& operator=( const PackMapAudioRegionToolV8& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackMapAudioDepV8 {
				helpers::FileName dependency;
				dword flags;
			public:
				PackMapAudioDepV8( );
				PackMapAudioDepV8( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackMapAudioDepV8( const PackMapAudioDepV8& p_other );
				PackMapAudioDepV8& operator=( const PackMapAudioDepV8& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MapAudioV8 {
				helpers::FileName filenameAmbientDaySurface;
				helpers::FileName filenameAmbientDayUnderwater;
				helpers::FileName filenameAmbientNightSurface;
				helpers::FileName filenameAmbientNightUnderwater;
				helpers::Array<PackMapAudioRegionV8> audioRegions;
				helpers::Array<PackMapAudioRegionToolV8> audioRegionTools;
				helpers::Array<PackMapAudioDepV8> audioDepArray;
			public:
				MapAudioV8( );
				MapAudioV8( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MapAudioV8( const MapAudioV8& p_other );
				MapAudioV8& operator=( const MapAudioV8& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef MapAudioV8 MapAudio;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::mapc, fcc::audi> { typedef chunks::MapAudio Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_MAPC_MAPAUDIO_H_INCLUDED
