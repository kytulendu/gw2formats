// File: pf/chunks/prlt/ContentPortalManifest.cpp

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

#include <gw2formats/pf/chunks/prlt/ContentPortalManifest.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      ContentMapRedirector
			//============================================================================/

			ContentMapRedirector::ContentMapRedirector( )
				: token( 0 )
				, radius( 0 ) {
			}

			ContentMapRedirector::ContentMapRedirector( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ContentMapRedirector::ContentMapRedirector( const ContentMapRedirector& p_other )
				: mapGUID( p_other.mapGUID )
				, token( p_other.token )
				, position( p_other.position )
				, radius( p_other.radius ) {
			}

			ContentMapRedirector& ContentMapRedirector::operator=( const ContentMapRedirector& p_other ) {
				mapGUID = p_other.mapGUID;
				token = p_other.token;
				position = p_other.position;
				radius = p_other.radius;
				return *this;
			}

			const byte* ContentMapRedirector::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, mapGUID );
				p_data = helpers::read( p_data, p_size, token );
				p_data = helpers::read( p_data, p_size, position );
				p_data = helpers::read( p_data, p_size, radius );
				return p_data;
			}

			//============================================================================/
			//      ContentMapModel
			//============================================================================/

			ContentMapModel::ContentMapModel( )
				: flags( 0 )
				, type( 0 ) {
			}

			ContentMapModel::ContentMapModel( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ContentMapModel::ContentMapModel( const ContentMapModel& p_other )
				: filename( p_other.filename )
				, flags( p_other.flags )
				, type( p_other.type ) 
				, permutation( p_other.permutation ) {
			}

			ContentMapModel& ContentMapModel::operator=( const ContentMapModel& p_other ) {
				filename = p_other.filename;
				flags = p_other.flags;
				type = p_other.type;
				permutation = p_other.permutation;
				return *this;
			}

			const byte* ContentMapModel::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, filename );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, type );
				p_data = helpers::read( p_data, p_size, permutation );
				return p_data;
			}

			//============================================================================/
			//      ContentMapStart
			//============================================================================/

			ContentMapStart::ContentMapStart( )
				: token( 0 )
				, radius( 0 ) {
			}

			ContentMapStart::ContentMapStart( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ContentMapStart::ContentMapStart( const ContentMapStart& p_other )
				: token( p_other.token )
				, modelArray( p_other.modelArray )
				, position( p_other.position )
				, radius( p_other.radius ) {
			}

			ContentMapStart& ContentMapStart::operator=( const ContentMapStart& p_other ) {
				token = p_other.token;
				modelArray = p_other.modelArray;
				position = p_other.position;
				radius = p_other.radius;
				return *this;
			}

			const byte* ContentMapStart::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, token );
				p_data = helpers::read( p_data, p_size, modelArray );
				p_data = helpers::read( p_data, p_size, position );
				p_data = helpers::read( p_data, p_size, radius );
				return p_data;
			}

			//============================================================================/
			//      ContentMap
			//============================================================================/

			ContentMap::ContentMap( ) {
			}

			ContentMap::ContentMap( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ContentMap::ContentMap( const ContentMap& p_other )
				: mapGUID( p_other.mapGUID )
				, mapRedirectorArray( p_other.mapRedirectorArray )
				, mapStartArray( p_other.mapStartArray ) {
			}

			ContentMap& ContentMap::operator=( const ContentMap& p_other ) {
				mapGUID = p_other.mapGUID;
				mapRedirectorArray = p_other.mapRedirectorArray;
				mapStartArray = p_other.mapStartArray;
				return *this;
			}

			const byte* ContentMap::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, mapGUID );
				p_data = helpers::read( p_data, p_size, mapRedirectorArray );
				p_data = helpers::read( p_data, p_size, mapStartArray );
				return p_data;
			}

			//============================================================================/
			//      ContentPortalManifest
			//============================================================================/

			ContentPortalManifest::ContentPortalManifest( ) {
			}

			ContentPortalManifest::ContentPortalManifest( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ContentPortalManifest::ContentPortalManifest( const ContentPortalManifest& p_other )
				: mapArray( p_other.mapArray ) {
			}

			ContentPortalManifest& ContentPortalManifest::operator=( const ContentPortalManifest& p_other ) {
				mapArray = p_other.mapArray;
				return *this;
			}

			const byte* ContentPortalManifest::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, mapArray );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
