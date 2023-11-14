// File: gw2formats/pf/chunks/txtp/TextPackPasswords.h

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

// Filetype: txtp
// Chunktype: txtp

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_TXTP_TEXTPACKPASSWORDS_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_TXTP_TEXTPACKPASSWORDS_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>

namespace gw2f {
    namespace pf {
        namespace chunks {

            GW2FORMATS_API struct TextPackPasswordV0 {
                dword textId;
                qword password;
            public:
                TextPackPasswordV0( );
                TextPackPasswordV0( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
                TextPackPasswordV0( const TextPackPasswordV0& p_other );
                TextPackPasswordV0& operator=( const TextPackPasswordV0& p_other );
                const byte* assign( const byte* p_data, size_t p_size );
            };

            GW2FORMATS_API struct TextPackPasswordsV0 {
                dword stringCount;
                helpers::Array<TextPackPasswordV0> passwords;
            public:
                TextPackPasswordsV0( );
                TextPackPasswordsV0( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
                TextPackPasswordsV0( const TextPackPasswordsV0& p_other );
                TextPackPasswordsV0& operator=( const TextPackPasswordsV0& p_other );
                const byte* assign( const byte* p_data, size_t p_size );
            };

            typedef TextPackPasswordsV0 TextPackPasswords;

        }; // namespace chunks

        template<> struct ChunkFactory<fcc::txtp, fcc::txtp> { typedef chunks::TextPackPasswords Type; };

    }; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_TXTP_TEXTPACKPASSWORDS_H_INCLUDED
