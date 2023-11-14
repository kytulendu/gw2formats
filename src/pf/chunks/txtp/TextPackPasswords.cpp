// File: pf/chunks/txtp/TextPackPasswords.cpp

/*  Copyright (C) 2023 Khralkatorrix <https://github.com/kytulendu>

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

#include <gw2formats/pf/chunks/txtp/TextPackPasswords.h>

namespace gw2f {
    namespace pf {
        namespace chunks {

            //============================================================================/
            //      TextPackPasswordV0
            //============================================================================/

            TextPackPasswordV0::TextPackPasswordV0( )
                : textId(0) 
                , password(0) {
            }

            TextPackPasswordV0::TextPackPasswordV0( const byte* p_data, size_t p_size, const byte** po_pointer ) {
                auto pointer = assign( p_data, p_size );
                if ( po_pointer ) { *po_pointer = pointer; }
            }

            TextPackPasswordV0::TextPackPasswordV0( const TextPackPasswordV0& p_other )
                : textId( p_other.textId)
                , password(p_other.password) {
            }

            TextPackPasswordV0& TextPackPasswordV0::operator=( const TextPackPasswordV0& p_other ) {
                textId = p_other.textId;
                password = p_other.password;
                return *this;
            }

            const byte* TextPackPasswordV0::assign( const byte* p_data, size_t p_size ) {
                p_data = helpers::read( p_data, p_size, textId);
                p_data = helpers::read(p_data, p_size, password);
                return p_data;
            }

            //============================================================================/
            //      TextPackPasswordsV0
            //============================================================================/

            TextPackPasswordsV0::TextPackPasswordsV0( )
                : stringCount( 0 ) {
            }

            TextPackPasswordsV0::TextPackPasswordsV0( const byte* p_data, size_t p_size, const byte** po_pointer ) {
                auto pointer = assign( p_data, p_size );
                if ( po_pointer ) { *po_pointer = pointer; }
            }

            TextPackPasswordsV0::TextPackPasswordsV0( const TextPackPasswordsV0& p_other )
                : stringCount( p_other.stringCount)
                , passwords( p_other.passwords) {
            }

            TextPackPasswordsV0& TextPackPasswordsV0::operator=( const TextPackPasswordsV0& p_other ) {
                stringCount = p_other.stringCount;
                passwords = p_other.passwords;
                return *this;
            }

            const byte* TextPackPasswordsV0::assign( const byte* p_data, size_t p_size ) {
                p_data = helpers::read( p_data, p_size, stringCount);
                p_data = helpers::read( p_data, p_size, passwords);
                return p_data;
            }

        }; // namespace chunks
    }; // namespace pf
}; // namespace gw2f
