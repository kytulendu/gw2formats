// File: pf/chunks/MODL/common.cpp

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

#include <gw2formats/pf/chunks/MODL/common.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      PackVertexType
			//============================================================================/

			PackVertexType::PackVertexType( )
				: fvf( 0 ) {
			}

			PackVertexType::PackVertexType( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackVertexType::PackVertexType( const PackVertexType& p_other )
				: fvf( p_other.fvf )
				, vertices( p_other.vertices ) {
			}

			PackVertexType& PackVertexType::operator=( const PackVertexType& p_other ) {
				fvf = p_other.fvf;
				vertices = p_other.vertices;
				return *this;
			}

			const byte* PackVertexType::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, fvf );
				p_data = helpers::read( p_data, p_size, vertices );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
