// File: gw2formats/pf/chunks/AMAT/AmatGfxMaterial.h

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
// Chunktype: BGFX

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_AMAT_AMATGFXMATERIAL_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_AMAT_AMATGFXMATERIAL_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>
#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/RefList.h>

namespace gw2f {
    namespace pf {
        namespace chunks {

            GW2FORMATS_API struct AmatGfxShaderConstantV1 {
                dword token;
            public:
                AmatGfxShaderConstantV1();
                AmatGfxShaderConstantV1(const byte* p_data, size_t p_size, const byte** po_pointer = nullptr);
                AmatGfxShaderConstantV1(const AmatGfxShaderConstantV1& p_other);
                AmatGfxShaderConstantV1& operator=(const AmatGfxShaderConstantV1& p_other);
                const byte* assign(const byte* p_data, size_t p_size);
            };

            GW2FORMATS_API struct AmatGfxSamplerConstantV1 {
                qword token;
                dword stateIndex;
                dword textureIndex;
                dword textureSlot;
            public:
                AmatGfxSamplerConstantV1();
                AmatGfxSamplerConstantV1(const byte* p_data, size_t p_size, const byte** po_pointer = nullptr);
                AmatGfxSamplerConstantV1(const AmatGfxSamplerConstantV1& p_other);
                AmatGfxSamplerConstantV1& operator=(const AmatGfxSamplerConstantV1& p_other);
                const byte* assign(const byte* p_data, size_t p_size);
            };

            GW2FORMATS_API struct AmatGfxShaderBinaryV1 {
                helpers::Array<byte> data;
                helpers::Array<AmatGfxShaderConstantV1> constants;
                helpers::Array<AmatGfxSamplerConstantV1> samplers;
            public:
                AmatGfxShaderBinaryV1();
                AmatGfxShaderBinaryV1(const byte* p_data, size_t p_size, const byte** po_pointer = nullptr);
                AmatGfxShaderBinaryV1(const AmatGfxShaderBinaryV1& p_other);
                AmatGfxShaderBinaryV1& operator=(const AmatGfxShaderBinaryV1& p_other);
                const byte* assign(const byte* p_data, size_t p_size);
            };

            GW2FORMATS_API struct AmatGfxShaderV1 {
                dword isPixelShader;
                AmatGfxShaderBinaryV1 dxShader;
                AmatGfxShaderBinaryV1 osxShader;
            public:
                AmatGfxShaderV1();
                AmatGfxShaderV1(const byte* p_data, size_t p_size, const byte** po_pointer = nullptr);
                AmatGfxShaderV1(const AmatGfxShaderV1& p_other);
                AmatGfxShaderV1& operator=(const AmatGfxShaderV1& p_other);
                const byte* assign(const byte* p_data, size_t p_size);
            };

            GW2FORMATS_API struct AmatGfxSamplerStateV1 {
                dword state;
            public:
                AmatGfxSamplerStateV1();
                AmatGfxSamplerStateV1(const byte* p_data, size_t p_size, const byte** po_pointer = nullptr);
                AmatGfxSamplerStateV1(const AmatGfxSamplerStateV1& p_other);
                AmatGfxSamplerStateV1& operator=(const AmatGfxSamplerStateV1& p_other);
                const byte* assign(const byte* p_data, size_t p_size);
            };

            GW2FORMATS_API struct AmatGfxVertexShaderVariantV1 {
                dword variant;
                dword vertexShaderIndex;
            public:
                AmatGfxVertexShaderVariantV1();
                AmatGfxVertexShaderVariantV1(const byte* p_data, size_t p_size, const byte** po_pointer = nullptr);
                AmatGfxVertexShaderVariantV1(const AmatGfxVertexShaderVariantV1& p_other);
                AmatGfxVertexShaderVariantV1& operator=(const AmatGfxVertexShaderVariantV1& p_other);
                const byte* assign(const byte* p_data, size_t p_size);
            };

            GW2FORMATS_API struct AmatGfxEffectV1 {
                qword token;
                qword renderState;
                dword shaderPassFlags;
                dword pixelShaderIndex;
                helpers::Array<AmatGfxVertexShaderVariantV1> vertexShaderVariants;
            public:
                AmatGfxEffectV1();
                AmatGfxEffectV1(const byte* p_data, size_t p_size, const byte** po_pointer = nullptr);
                AmatGfxEffectV1(const AmatGfxEffectV1& p_other);
                AmatGfxEffectV1& operator=(const AmatGfxEffectV1& p_other);
                const byte* assign(const byte* p_data, size_t p_size);
            };

            GW2FORMATS_API struct AmatGfxPassV1 {
                helpers::RefList<AmatGfxEffectV1> effects;
            public:
                AmatGfxPassV1();
                AmatGfxPassV1(const byte* p_data, size_t p_size, const byte** po_pointer = nullptr);
                AmatGfxPassV1(const AmatGfxPassV1& p_other);
                AmatGfxPassV1& operator=(const AmatGfxPassV1& p_other);
                const byte* assign(const byte* p_data, size_t p_size);
            };

            GW2FORMATS_API struct AmatGfxTechniqueV1 {
                dword quality;
                helpers::Array<AmatGfxPassV1> passes;
            public:
                AmatGfxTechniqueV1();
                AmatGfxTechniqueV1(const byte* p_data, size_t p_size, const byte** po_pointer = nullptr);
                AmatGfxTechniqueV1(const AmatGfxTechniqueV1& p_other);
                AmatGfxTechniqueV1& operator=(const AmatGfxTechniqueV1& p_other);
                const byte* assign(const byte* p_data, size_t p_size);
            };

            GW2FORMATS_API struct AmatGfxMaterialV1 {
                helpers::Array<AmatGfxShaderV1> shaders;
                helpers::Array<AmatGfxSamplerStateV1> samplers;
                helpers::Array<AmatGfxTechniqueV1> techniques;
            public:
                AmatGfxMaterialV1();
                AmatGfxMaterialV1(const byte* p_data, size_t p_size, const byte** po_pointer = nullptr);
                AmatGfxMaterialV1(const AmatGfxMaterialV1& p_other);
                AmatGfxMaterialV1& operator=(const AmatGfxMaterialV1& p_other);
                const byte* assign(const byte* p_data, size_t p_size);
            };

            typedef AmatGfxMaterialV1 AmatGfxMaterial;

        }; // namespace chunks

        template<> struct ChunkFactory<fcc::AMAT, fcc::BGFX> { typedef chunks::AmatGfxMaterial Type; };

    }; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_AMAT_AMATGFXMATERIAL_H_INCLUDED
