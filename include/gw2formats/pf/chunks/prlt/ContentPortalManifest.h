// File: gw2formats/pf/chunks/prlt/ContentPortalManifest.h

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

// Filetype: prlt
// Chunktype: mfst

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_PRLT_CONTENTPORTALMANIFEST_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_PRLT_CONTENTPORTALMANIFEST_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/FileName.h>
#include <gw2formats/pf/helpers/Vector.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			GW2FORMATS_API struct ContentMapRedirector {
				byte16 mapGUID;
				dword token;
				float3 position;
				float radius;
			public:
				ContentMapRedirector( );
				ContentMapRedirector( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ContentMapRedirector( const ContentMapRedirector& p_other );
				ContentMapRedirector& operator=( const ContentMapRedirector& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ContentMapModel {
				helpers::FileName filename;
				dword flags;
				dword type;
				qword permutation;
			public:
				ContentMapModel( );
				ContentMapModel( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ContentMapModel( const ContentMapModel& p_other );
				ContentMapModel& operator=( const ContentMapModel& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ContentMapStart {
				dword token;
				helpers::Array<ContentMapModel> modelArray;
				float3 position;
				float radius;
			public:
				ContentMapStart( );
				ContentMapStart( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ContentMapStart( const ContentMapStart& p_other );
				ContentMapStart& operator=( const ContentMapStart& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ContentMap {
				byte16 mapGUID;
				helpers::Array<ContentMapRedirector> mapRedirectorArray;
				helpers::Array<ContentMapStart> mapStartArray;
			public:
				ContentMap( );
				ContentMap( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ContentMap( const ContentMap& p_other );
				ContentMap& operator=( const ContentMap& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ContentPortalManifest {
				helpers::Array<ContentMap> mapArray;
			public:
				ContentPortalManifest( );
				ContentPortalManifest( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ContentPortalManifest( const ContentPortalManifest& p_other );
				ContentPortalManifest& operator=( const ContentPortalManifest& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef ContentPortalManifest ContentPortalManifest;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::prlt, fcc::mfst> { typedef chunks::ContentPortalManifest Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_PRLT_CONTENTPORTALMANIFEST_H_INCLUDED
