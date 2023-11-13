// File: gw2formats/pf/helpers/read.h

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

#pragma once

#ifndef GW2FORMATS_PF_HELPERS_READ_H_INCLUDED
#define GW2FORMATS_PF_HELPERS_READ_H_INCLUDED

#include <stdexcept>

#include <gw2formats/base.h>

namespace gw2f {
	namespace pf {
		namespace helpers {

			/** Reads the data contained in p_data into po_output.
			*  \param[in]      p_data      Data to read.
			*  \param[in,out]  po_size     In: Size of data. Out: Size of remaining data.
			*  \param[out]     po_output   Object to assign data to.
			*  \tparam         T           Type of object to read.
			*  \return         const byte* Pointer to the first byte beyond the read data. */
			template <typename T>
			const byte* read( const byte* p_data, size_t& po_size, T& po_output ) {
				auto pointer = po_output.assign( p_data, po_size );
				po_size -= ( reinterpret_cast<const byte*>( pointer ) - p_data );
				return pointer;
			}

			/** Reads the data contained in p_data into the given fixed-size array.
			*  \param[in]      p_data      Data to read.
			*  \param[in,out]  po_size     In: Size of data. Out: Size of remaining data.
			*  \param[out]     po_output   Fixed-size array to assign data to.
			*  \tparam         T           Type of elements contained in the array.
			*  \tparam         TSize       Size of the fixed-size array.
			*  \return         const byte* Pointer to the first byte beyond the read data. */
			template <typename T, size_t TSize>
			const byte* read( const byte* p_data, size_t& po_size, T( &po_output )[TSize] ) {
				for ( auto& it : po_output ) {
					p_data = read( p_data, po_size, it );
				}
				return p_data;
			}

			/** Reads the data contained in p_data into the given integral type object.
			*  \param[in]      p_data      Data to read.
			*  \param[in,out]  po_size     In: Size of data. Out: Size of remaining data.
			*  \param[out]     po_output   Object to assign data to.
			*  \tparam         T           Type of object to read.
			*  \return         const byte* Pointer to the first byte beyond the read data. */

			template <typename T>
			const byte* readNumber( const byte* p_data, size_t& po_size, T& po_output ) {
				if ( !p_data ) { throw std::invalid_argument( "p_data must not be nullptr." ); }
				if ( po_size < sizeof( T ) ) { throw std::invalid_argument( "p_data does not contain enough data." ); }
				po_output = *reinterpret_cast<const T*>( p_data );
				po_size -= sizeof( T );
				return p_data + sizeof( T );
			}

			// double
			template<> inline const byte* read<double>( const byte* p_data, size_t& po_size, double& po_output ) {
				return readNumber( p_data, po_size, po_output );
			}

			// float
			template<> inline const byte* read<float>( const byte* p_data, size_t& po_size, float& po_output ) {
				return readNumber( p_data, po_size, po_output );
			}

			// uint64
			template<> inline const byte* read<uint64>( const byte* p_data, size_t& po_size, uint64& po_output ) {
				return readNumber( p_data, po_size, po_output );
			}

			// int64
			template<> inline const byte* read<int64>( const byte* p_data, size_t& po_size, int64& po_output ) {
				return readNumber( p_data, po_size, po_output );
			}

			// uint32
			template<> inline const byte* read<uint32>( const byte* p_data, size_t& po_size, uint32& po_output ) {
				return readNumber( p_data, po_size, po_output );
			}

			// int32
			template<> inline const byte* read<int32>( const byte* p_data, size_t& po_size, int32& po_output ) {
				return readNumber( p_data, po_size, po_output );
			}

			// uint16
			template<> inline const byte* read<uint16>( const byte* p_data, size_t& po_size, uint16& po_output ) {
				return readNumber( p_data, po_size, po_output );
			}

			// int16
			template<> inline const byte* read<int16>( const byte* p_data, size_t& po_size, int16& po_output ) {
				return readNumber( p_data, po_size, po_output );
			}

			// uint8
			template<> inline const byte* read<uint8>( const byte* p_data, size_t& po_size, uint8& po_output ) {
				return readNumber( p_data, po_size, po_output );
			}

			// int8
			template<> inline const byte* read<int8>( const byte* p_data, size_t& po_size, int8& po_output ) {
				return readNumber( p_data, po_size, po_output );
			}

			// char16
			template<> inline const byte* read<char16>( const byte* p_data, size_t& po_size, char16& po_output ) {
				return readNumber( p_data, po_size, po_output );
			}

			// char
			template<> inline const byte* read<char>( const byte* p_data, size_t& po_size, char& po_output ) {
				return readNumber( p_data, po_size, po_output );
			}

		}; // namespace helpers
	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_HELPERS_READ_H_INCLUDED
