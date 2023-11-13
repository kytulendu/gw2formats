// File: gw2formats/pf/helpers/Array.h

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

#pragma once

#ifndef GW2FORMATS_PF_HELPERS_ARRAY_H_INCLUDED
#define GW2FORMATS_PF_HELPERS_ARRAY_H_INCLUDED

#include <memory>
#include <stdexcept>
#include <vector>

#include <gw2formats/base.h>
#include <gw2formats/pf/helpers/read.h>

namespace gw2f {
	namespace pf {
		namespace helpers {

			/** Array helper class, for reading from byte arrays.
			*  \tparam     T       Type of objects contained in this array. */
			template <typename T>
			class Array {
				std::shared_ptr<std::vector<T>> m_data;
			public:
				/** Default constructor. */
				Array( )
					: m_data( new std::vector<T> ) {
				}

				/** Constructs this object and assigns it the data contained in the given
				*  byte array.
				*  \param[in]  p_data      Data to assign.
				*  \param[in]  p_size      Size of data.
				*  \param[out] po_pointer  Optional. If given, it is set to the end of the
				*                          data read by this class. */
				Array( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr )
					: m_data( new std::vector<T> ) {
					p_data = assign( p_data, p_size );
					if ( po_pointer ) { *po_pointer = p_data; }
				}

				/** Copy constructor. */
				Array( const Array& p_other )
					: m_data( p_other.m_data ) {
				}

				/** Destructor. */
				~Array( ) {
				}

				/** Copies the data contained in p_other to this object. */
				Array& operator=( const Array& p_other ) {
					m_data = p_other.m_data;
					return *this;
				}

				/** Gets the element contained in this array at the given index. */
				const T& operator[]( size_t p_index ) const {
					if ( p_index >= m_data->size( ) ) { throw std::out_of_range( "The given index is too large." ); }
					return ( *m_data )[p_index];
				}

				/** Assigns this Array the contents of the given data.
				*  \param[in]  p_data      Data to assign.
				*  \param[in]  p_size      Size of p_data.
				*  \return     const byte* Pointer to the first byte after the read data. */
				const byte* assign( const byte* p_data, size_t p_size ) {
					if ( !p_data ) { throw std::invalid_argument( "p_data must not be null" ); }
					if ( p_size < 2 * sizeof( int32 ) ) { throw std::invalid_argument( "p_size must be large enough to contain two 32-bit integers." ); }

					// Turns out some offsets are negative, there's nothing we can do to
					// check the safety of that without providing yet *another* parameter.
					// ... I'll probably add that at some point, for now I trust GW2 files.

					auto count = *reinterpret_cast<const uint32*>( p_data );
					auto offset = *reinterpret_cast<const int32*>( p_data + sizeof( count ) );
					p_size -= sizeof( count ) + sizeof( offset );
					p_data += sizeof( count ) + sizeof( offset );

					auto pointer = p_data - sizeof( offset ) + offset;
					auto end = p_data + p_size;
					if ((pointer - p_data) > 0 && ((unsigned) (pointer - p_data)) > p_size) { throw std::out_of_range("read data were larger than remaining size."); }
					
					auto size = p_size - ( pointer - p_data );
					if (count > size) { throw std::out_of_range("size is too low for requested data to be read."); }

					m_data.reset( new std::vector<T> );
					m_data->resize( count );

					for ( uint i = 0; i < count; i++ ) {
						if ( pointer >= end ) { throw std::out_of_range( "pointer went past the end of the buffer." ); }
						pointer = read( pointer, size, ( *m_data )[i] );
						size = ( end - pointer );
					}

					return p_data;
				}

				/** Gets the amount of elements contained in this array. */
				size_t size( ) const {
					return m_data->size( );
				}

				/** Gets the data contained in this array. */
				const T* data( ) const {
					return m_data->data( );
				}
			};

		}; // namespace helpers
	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_HELPERS_ARRAY_H_INCLUDED
