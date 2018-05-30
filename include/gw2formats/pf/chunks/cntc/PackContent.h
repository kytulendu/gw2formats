// File: gw2formats/pf/chunks/cntc/PackContent.h

/*
Copyright (C) 2014-2018 Khral Steelforge <https://github.com/kytulendu>
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

// Filetype: cntc
// Chunktype: Main

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_CNTC_PACKCONTENT_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_CNTC_PACKCONTENT_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/FileName.h>
#include <gw2formats/pf/helpers/WString.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

            GW2FORMATS_API struct PackContentTypeInfoV0 {
                dword guidOffset;
                dword uidOffset;
                dword dataIdOffset;
                dword nameOffset;
                byte trackReferences;
            public:
                PackContentTypeInfoV0( );
                PackContentTypeInfoV0( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
                PackContentTypeInfoV0( const PackContentTypeInfoV0& p_other );
                PackContentTypeInfoV0& operator=( const PackContentTypeInfoV0& p_other );
                const byte* assign( const byte* p_data, size_t p_size );
            };

            GW2FORMATS_API struct PackContentNamespaceV0 {
                helpers::WString name;
                dword domain;
                dword parentIndex;
            public:
                PackContentNamespaceV0( );
                PackContentNamespaceV0( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
                PackContentNamespaceV0( const PackContentNamespaceV0& p_other );
                PackContentNamespaceV0& operator=( const PackContentNamespaceV0& p_other );
                const byte* assign( const byte* p_data, size_t p_size );
            };

            GW2FORMATS_API struct PackContentIndexEntryV0 {
                dword type;
                dword offset;
                dword namespaceIndex;
                dword rootIndex;
            public:
                PackContentIndexEntryV0( );
                PackContentIndexEntryV0( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
                PackContentIndexEntryV0( const PackContentIndexEntryV0& p_other );
                PackContentIndexEntryV0& operator=( const PackContentIndexEntryV0& p_other );
                const byte* assign( const byte* p_data, size_t p_size );
            };

            GW2FORMATS_API struct PackContentLocalOffsetFixupV0 {
                dword relocOffset;
            public:
                PackContentLocalOffsetFixupV0( );
                PackContentLocalOffsetFixupV0( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
                PackContentLocalOffsetFixupV0( const PackContentLocalOffsetFixupV0& p_other );
                PackContentLocalOffsetFixupV0& operator=( const PackContentLocalOffsetFixupV0& p_other );
                const byte* assign( const byte* p_data, size_t p_size );
            };

            GW2FORMATS_API struct PackContentExternalOffsetFixupV0 {
                dword relocOffset;
                dword targetFileIndex;
            public:
                PackContentExternalOffsetFixupV0( );
                PackContentExternalOffsetFixupV0( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
                PackContentExternalOffsetFixupV0( const PackContentExternalOffsetFixupV0& p_other );
                PackContentExternalOffsetFixupV0& operator=( const PackContentExternalOffsetFixupV0& p_other );
                const byte* assign( const byte* p_data, size_t p_size );
            };

            GW2FORMATS_API struct PackContentFileIndexFixupV0 {
                dword relocOffset;
            public:
                PackContentFileIndexFixupV0( );
                PackContentFileIndexFixupV0( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
                PackContentFileIndexFixupV0( const PackContentFileIndexFixupV0& p_other );
                PackContentFileIndexFixupV0& operator=( const PackContentFileIndexFixupV0& p_other );
                const byte* assign( const byte* p_data, size_t p_size );
            };

            GW2FORMATS_API struct PackContentStringIndexFixupV0 {
                dword relocOffset;
            public:
                PackContentStringIndexFixupV0( );
                PackContentStringIndexFixupV0( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
                PackContentStringIndexFixupV0( const PackContentStringIndexFixupV0& p_other );
                PackContentStringIndexFixupV0& operator=( const PackContentStringIndexFixupV0& p_other );
                const byte* assign( const byte* p_data, size_t p_size );
            };

            GW2FORMATS_API struct PackContentTrackedReferenceV0 {
                dword sourceOffset;
                dword targetFileIndex;
                dword targetOffset;
            public:
                PackContentTrackedReferenceV0( );
                PackContentTrackedReferenceV0( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
                PackContentTrackedReferenceV0( const PackContentTrackedReferenceV0& p_other );
                PackContentTrackedReferenceV0& operator=( const PackContentTrackedReferenceV0& p_other );
                const byte* assign( const byte* p_data, size_t p_size );
            };

			GW2FORMATS_API struct PackContentV0 {
				dword flags;
                helpers::Array<PackContentTypeInfoV0> typeInfos;
                helpers::Array<PackContentNamespaceV0> namespaces;
				helpers::Array<helpers::FileName> fileRefs;
                helpers::Array<PackContentIndexEntryV0> indexEntries;
                helpers::Array<PackContentLocalOffsetFixupV0> localOffsets;
                helpers::Array<PackContentExternalOffsetFixupV0> externalOffsets;
                helpers::Array<PackContentFileIndexFixupV0> fileIndices;
                helpers::Array<PackContentStringIndexFixupV0> stringIndices;
                helpers::Array<PackContentTrackedReferenceV0> trackedReferences;
                helpers::Array<helpers::WString> strings;
                helpers::Array<byte> content;
			public:
				PackContentV0( );
				PackContentV0( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackContentV0( const PackContentV0& p_other );
				PackContentV0& operator=( const PackContentV0& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef PackContentV0 PackContent;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::cntc, fcc::Main> { typedef chunks::PackContent Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_CNTC_PACKCONTENT_H_INCLUDED
