// File: pf/chunks/cntc/PackContent.cpp

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

#include <gw2formats/pf/chunks/cntc/PackContent.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

            //============================================================================/
            //      PackContentTypeInfoV0
            //============================================================================/

            PackContentTypeInfoV0::PackContentTypeInfoV0( ) {
            }

            PackContentTypeInfoV0::PackContentTypeInfoV0( const byte* p_data, size_t p_size, const byte** po_pointer ) {
                auto pointer = assign( p_data, p_size );
                if ( po_pointer ) { *po_pointer = pointer; }
            }

            PackContentTypeInfoV0::PackContentTypeInfoV0( const PackContentTypeInfoV0& p_other )
                : guidOffset( p_other.guidOffset )
                , uidOffset( p_other.uidOffset )
                , dataIdOffset( p_other.dataIdOffset )
                , nameOffset( p_other.nameOffset )
                , trackReferences( p_other.trackReferences ) {
            }

            PackContentTypeInfoV0& PackContentTypeInfoV0::operator=( const PackContentTypeInfoV0& p_other ) {
                guidOffset = p_other.guidOffset;
                uidOffset = p_other.uidOffset;
                dataIdOffset = p_other.dataIdOffset;
                nameOffset = p_other.nameOffset;
                trackReferences = p_other.trackReferences;
                return *this;
            }

            const byte* PackContentTypeInfoV0::assign( const byte* p_data, size_t p_size ) {
                p_data = helpers::read( p_data, p_size, guidOffset );
                p_data = helpers::read( p_data, p_size, uidOffset );
                p_data = helpers::read( p_data, p_size, dataIdOffset );
                p_data = helpers::read( p_data, p_size, nameOffset );
                p_data = helpers::read( p_data, p_size, trackReferences );
                return p_data;
            }

            //============================================================================/
            //      PackContentNamespaceV0
            //============================================================================/

            PackContentNamespaceV0::PackContentNamespaceV0( ) {
            }

            PackContentNamespaceV0::PackContentNamespaceV0( const byte* p_data, size_t p_size, const byte** po_pointer ) {
                auto pointer = assign( p_data, p_size );
                if ( po_pointer ) { *po_pointer = pointer; }
            }

            PackContentNamespaceV0::PackContentNamespaceV0( const PackContentNamespaceV0& p_other )
                : name( p_other.name )
                , domain( p_other.domain )
                , parentIndex( p_other.parentIndex ) {
            }

            PackContentNamespaceV0& PackContentNamespaceV0::operator=( const PackContentNamespaceV0& p_other ) {
                name = p_other.name;
                domain = p_other.domain;
                parentIndex = p_other.parentIndex;
                return *this;
            }

            const byte* PackContentNamespaceV0::assign( const byte* p_data, size_t p_size ) {
                p_data = helpers::read( p_data, p_size, name );
                p_data = helpers::read( p_data, p_size, domain );
                p_data = helpers::read( p_data, p_size, parentIndex );
                return p_data;
            }

            //============================================================================/
            //      PackContentIndexEntryV0
            //============================================================================/

            PackContentIndexEntryV0::PackContentIndexEntryV0( ) {
            }

            PackContentIndexEntryV0::PackContentIndexEntryV0( const byte* p_data, size_t p_size, const byte** po_pointer ) {
                auto pointer = assign( p_data, p_size );
                if ( po_pointer ) { *po_pointer = pointer; }
            }

            PackContentIndexEntryV0::PackContentIndexEntryV0( const PackContentIndexEntryV0& p_other )
                : type( p_other.type )
                , offset( p_other.offset )
                , namespaceIndex( p_other.namespaceIndex )
                , rootIndex( p_other.rootIndex ) {
            }

            PackContentIndexEntryV0& PackContentIndexEntryV0::operator=( const PackContentIndexEntryV0& p_other ) {
                type = p_other.type;
                offset = p_other.offset;
                namespaceIndex = p_other.namespaceIndex;
                rootIndex = p_other.rootIndex;
                return *this;
            }

            const byte* PackContentIndexEntryV0::assign( const byte* p_data, size_t p_size ) {
                p_data = helpers::read( p_data, p_size, type );
                p_data = helpers::read( p_data, p_size, offset );
                p_data = helpers::read( p_data, p_size, namespaceIndex );
                p_data = helpers::read( p_data, p_size, rootIndex );
                return p_data;
            }

            //============================================================================/
            //      PackContentLocalOffsetFixupV0
            //============================================================================/

            PackContentLocalOffsetFixupV0::PackContentLocalOffsetFixupV0( ) {
            }

            PackContentLocalOffsetFixupV0::PackContentLocalOffsetFixupV0( const byte* p_data, size_t p_size, const byte** po_pointer ) {
                auto pointer = assign( p_data, p_size );
                if ( po_pointer ) { *po_pointer = pointer; }
            }

            PackContentLocalOffsetFixupV0::PackContentLocalOffsetFixupV0( const PackContentLocalOffsetFixupV0& p_other )
                : relocOffset( p_other.relocOffset ) {
            }

            PackContentLocalOffsetFixupV0& PackContentLocalOffsetFixupV0::operator=( const PackContentLocalOffsetFixupV0& p_other ) {
                relocOffset = p_other.relocOffset;
                return *this;
            }

            const byte* PackContentLocalOffsetFixupV0::assign( const byte* p_data, size_t p_size ) {
                p_data = helpers::read( p_data, p_size, relocOffset );
                return p_data;
            }

            //============================================================================/
            //      PackContentExternalOffsetFixupV0
            //============================================================================/

            PackContentExternalOffsetFixupV0::PackContentExternalOffsetFixupV0( ) {
            }

            PackContentExternalOffsetFixupV0::PackContentExternalOffsetFixupV0( const byte* p_data, size_t p_size, const byte** po_pointer ) {
                auto pointer = assign( p_data, p_size );
                if ( po_pointer ) { *po_pointer = pointer; }
            }

            PackContentExternalOffsetFixupV0::PackContentExternalOffsetFixupV0( const PackContentExternalOffsetFixupV0& p_other )
                : relocOffset( p_other.relocOffset )
                , targetFileIndex( p_other.targetFileIndex ) {
            }

            PackContentExternalOffsetFixupV0& PackContentExternalOffsetFixupV0::operator=( const PackContentExternalOffsetFixupV0& p_other ) {
                relocOffset = p_other.relocOffset;
                targetFileIndex = p_other.targetFileIndex;
                return *this;
            }

            const byte* PackContentExternalOffsetFixupV0::assign( const byte* p_data, size_t p_size ) {
                p_data = helpers::read( p_data, p_size, relocOffset );
                p_data = helpers::read( p_data, p_size, targetFileIndex );
                return p_data;
            }

            //============================================================================/
            //      PackContentFileIndexFixupV0
            //============================================================================/

            PackContentFileIndexFixupV0::PackContentFileIndexFixupV0( ) {
            }

            PackContentFileIndexFixupV0::PackContentFileIndexFixupV0( const byte* p_data, size_t p_size, const byte** po_pointer ) {
                auto pointer = assign( p_data, p_size );
                if ( po_pointer ) { *po_pointer = pointer; }
            }

            PackContentFileIndexFixupV0::PackContentFileIndexFixupV0( const PackContentFileIndexFixupV0& p_other )
                : relocOffset( p_other.relocOffset ) {
            }

            PackContentFileIndexFixupV0& PackContentFileIndexFixupV0::operator=( const PackContentFileIndexFixupV0& p_other ) {
                relocOffset = p_other.relocOffset;
                return *this;
            }

            const byte* PackContentFileIndexFixupV0::assign( const byte* p_data, size_t p_size ) {
                p_data = helpers::read( p_data, p_size, relocOffset );
                return p_data;
            }

            //============================================================================/
            //      PackContentStringIndexFixupV0
            //============================================================================/

            PackContentStringIndexFixupV0::PackContentStringIndexFixupV0( ) {
            }

            PackContentStringIndexFixupV0::PackContentStringIndexFixupV0( const byte* p_data, size_t p_size, const byte** po_pointer ) {
                auto pointer = assign( p_data, p_size );
                if ( po_pointer ) { *po_pointer = pointer; }
            }

            PackContentStringIndexFixupV0::PackContentStringIndexFixupV0( const PackContentStringIndexFixupV0& p_other )
                : relocOffset( p_other.relocOffset ) {
            }

            PackContentStringIndexFixupV0& PackContentStringIndexFixupV0::operator=( const PackContentStringIndexFixupV0& p_other ) {
                relocOffset = p_other.relocOffset;
                return *this;
            }

            const byte* PackContentStringIndexFixupV0::assign( const byte* p_data, size_t p_size ) {
                p_data = helpers::read( p_data, p_size, relocOffset );
                return p_data;
            }

            //============================================================================/
            //      PackContentTrackedReferenceV0
            //============================================================================/

            PackContentTrackedReferenceV0::PackContentTrackedReferenceV0( ) {
            }

            PackContentTrackedReferenceV0::PackContentTrackedReferenceV0( const byte* p_data, size_t p_size, const byte** po_pointer ) {
                auto pointer = assign( p_data, p_size );
                if ( po_pointer ) { *po_pointer = pointer; }
            }

            PackContentTrackedReferenceV0::PackContentTrackedReferenceV0( const PackContentTrackedReferenceV0& p_other )
                : sourceOffset( p_other.sourceOffset )
                , targetFileIndex( p_other.targetFileIndex )
                , targetOffset( p_other.targetOffset ) {
            }

            PackContentTrackedReferenceV0& PackContentTrackedReferenceV0::operator=( const PackContentTrackedReferenceV0& p_other ) {
                sourceOffset = p_other.sourceOffset;
                targetFileIndex = p_other.targetFileIndex;
                targetOffset = p_other.targetOffset;
                return *this;
            }

            const byte* PackContentTrackedReferenceV0::assign( const byte* p_data, size_t p_size ) {
                p_data = helpers::read( p_data, p_size, sourceOffset );
                p_data = helpers::read( p_data, p_size, targetFileIndex );
                p_data = helpers::read( p_data, p_size, targetOffset );
                return p_data;
            }

			//============================================================================/
			//      PackContentV0
			//============================================================================/

			PackContentV0::PackContentV0( )
				: flags( 0 ) {
			}

			PackContentV0::PackContentV0( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackContentV0::PackContentV0( const PackContentV0& p_other )
				: flags( p_other.flags )
				, typeInfos( p_other.typeInfos )
				, namespaces( p_other.namespaces )
                , fileRefs( p_other.fileRefs )
                , indexEntries( p_other.indexEntries )
                , localOffsets( p_other.localOffsets )
                , externalOffsets( p_other.externalOffsets )
                , fileIndices( p_other.fileIndices )
                , stringIndices( p_other.stringIndices )
                , trackedReferences( p_other.trackedReferences )
                , strings( p_other.strings )
				, content( p_other.content ) {
			}

			PackContentV0& PackContentV0::operator=( const PackContentV0& p_other ) {
				flags = p_other.flags;
                typeInfos = p_other.typeInfos;
				namespaces = p_other.namespaces;
                fileRefs = p_other.fileRefs;
                indexEntries = p_other.indexEntries;
                localOffsets = p_other.localOffsets;
                externalOffsets = p_other.externalOffsets;
                fileIndices = p_other.fileIndices;
                stringIndices = p_other.stringIndices;
                trackedReferences = p_other.trackedReferences;
                strings = p_other.strings;
                content = p_other.content;
				return *this;
			}

			const byte* PackContentV0::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, flags );
                p_data = helpers::read( p_data, p_size, typeInfos );
                p_data = helpers::read( p_data, p_size, namespaces );
                p_data = helpers::read( p_data, p_size, fileRefs );
                p_data = helpers::read( p_data, p_size, indexEntries );
                p_data = helpers::read( p_data, p_size, localOffsets );
                p_data = helpers::read( p_data, p_size, externalOffsets );
                p_data = helpers::read( p_data, p_size, fileIndices );
                p_data = helpers::read( p_data, p_size, stringIndices );
                p_data = helpers::read( p_data, p_size, trackedReferences );
                p_data = helpers::read( p_data, p_size, strings );
                p_data = helpers::read( p_data, p_size, content );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
