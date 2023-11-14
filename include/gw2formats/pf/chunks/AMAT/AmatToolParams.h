// File: gw2formats/pf/chunks/AMAT/AmatToolParams.h

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

// Filetype: AMAT
// Chunktype: TOOL

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_AMAT_AMATTOOLPARAMS_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_AMAT_AMATTOOLPARAMS_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>
#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/Vector.h>
#include <gw2formats/pf/helpers/WString.h>

namespace gw2f {
    namespace pf {
        namespace chunks {

            GW2FORMATS_API struct AmatToolConstantV3 {
                dword token;
                helpers::WString displayName;
                float4 defaultValue;
                dword flags;
                float4 minValue;
                float4 maxValue;
            public:
                AmatToolConstantV3();
                AmatToolConstantV3(const byte* p_data, size_t p_size, const byte** po_pointer = nullptr);
                AmatToolConstantV3(const AmatToolConstantV3& p_other);
                AmatToolConstantV3& operator=(const AmatToolConstantV3& p_other);
                const byte* assign(const byte* p_data, size_t p_size);
            };

            GW2FORMATS_API struct AmatToolTextureV3 {
                helpers::WString texName;
                helpers::WString texDefaultFile;
                dword flags;
                helpers::Array<dword> texGen;
            public:
                AmatToolTextureV3();
                AmatToolTextureV3(const byte* p_data, size_t p_size, const byte** po_pointer = nullptr);
                AmatToolTextureV3(const AmatToolTextureV3& p_other);
                AmatToolTextureV3& operator=(const AmatToolTextureV3& p_other);
                const byte* assign(const byte* p_data, size_t p_size);
            };

            GW2FORMATS_API struct AmatToolParamsV3 {
                helpers::WString description;
                dword flags;
                byte texCoordCount;
                byte texTransformCount;
                dword decompressedTextCount;
                helpers::Array<byte> compressedText;
                helpers::Array<AmatToolConstantV3> constants;
                helpers::Array<AmatToolTextureV3> textures;
            public:
                AmatToolParamsV3();
                AmatToolParamsV3(const byte* p_data, size_t p_size, const byte** po_pointer = nullptr);
                AmatToolParamsV3(const AmatToolParamsV3& p_other);
                AmatToolParamsV3& operator=(const AmatToolParamsV3& p_other);
                const byte* assign(const byte* p_data, size_t p_size);
            };

            typedef AmatToolParamsV3 AmatToolParams;

        }; // namespace chunks

        template<> struct ChunkFactory<fcc::AMAT, fcc::TOOL> { typedef chunks::AmatToolParams Type; };

    }; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_AMAT_AMATTOOLPARAMS_H_INCLUDED
