// File: pf/chunks/AMAT/AmatGfxMaterial.cpp

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

#include <gw2formats/pf/chunks/AMAT/AmatGfxMaterial.h>

namespace gw2f {
    namespace pf {
        namespace chunks {

            //============================================================================/
            //      AmatGfxShaderConstantV1
            //============================================================================/

            AmatGfxShaderConstantV1::AmatGfxShaderConstantV1()
                : token(0) {
            }

            AmatGfxShaderConstantV1::AmatGfxShaderConstantV1(const byte* p_data, size_t p_size, const byte** po_pointer) {
                auto pointer = assign(p_data, p_size);
                if (po_pointer) { *po_pointer = pointer; }
            }

            AmatGfxShaderConstantV1::AmatGfxShaderConstantV1(const AmatGfxShaderConstantV1& p_other)
                : token(p_other.token) {
            }

            AmatGfxShaderConstantV1& AmatGfxShaderConstantV1::operator=(const AmatGfxShaderConstantV1& p_other) {
                token = p_other.token;
                return *this;
            }

            const byte* AmatGfxShaderConstantV1::assign(const byte* p_data, size_t p_size) {
                p_data = helpers::read(p_data, p_size, token);
                return p_data;
            }

            //============================================================================/
            //      AmatGfxSamplerConstantV1
            //============================================================================/

            AmatGfxSamplerConstantV1::AmatGfxSamplerConstantV1()
                : token(0)
                , stateIndex(0)
                , textureIndex(0)
                , textureSlot(0) {
            }

            AmatGfxSamplerConstantV1::AmatGfxSamplerConstantV1(const byte* p_data, size_t p_size, const byte** po_pointer) {
                auto pointer = assign(p_data, p_size);
                if (po_pointer) { *po_pointer = pointer; }
            }

            AmatGfxSamplerConstantV1::AmatGfxSamplerConstantV1(const AmatGfxSamplerConstantV1& p_other)
                : token(p_other.token)
                , stateIndex(p_other.stateIndex)
                , textureIndex(p_other.textureIndex)
                , textureSlot(p_other.textureSlot) {
            }

            AmatGfxSamplerConstantV1& AmatGfxSamplerConstantV1::operator=(const AmatGfxSamplerConstantV1& p_other) {
                token = p_other.token;
                stateIndex = p_other.stateIndex;
                textureIndex = p_other.textureIndex;
                textureSlot = p_other.textureSlot;
                return *this;
            }

            const byte* AmatGfxSamplerConstantV1::assign(const byte* p_data, size_t p_size) {
                p_data = helpers::read(p_data, p_size, token);
                p_data = helpers::read(p_data, p_size, stateIndex);
                p_data = helpers::read(p_data, p_size, textureIndex);
                p_data = helpers::read(p_data, p_size, textureSlot);
                return p_data;
            }

            //============================================================================/
            //      AmatGfxShaderBinaryV1
            //============================================================================/

            AmatGfxShaderBinaryV1::AmatGfxShaderBinaryV1() {
            }

            AmatGfxShaderBinaryV1::AmatGfxShaderBinaryV1(const byte* p_data, size_t p_size, const byte** po_pointer) {
                auto pointer = assign(p_data, p_size);
                if (po_pointer) { *po_pointer = pointer; }
            }

            AmatGfxShaderBinaryV1::AmatGfxShaderBinaryV1(const AmatGfxShaderBinaryV1& p_other)
                : data(p_other.data)
                , constants(p_other.constants)
                , samplers(p_other.samplers) {
            }

            AmatGfxShaderBinaryV1& AmatGfxShaderBinaryV1::operator=(const AmatGfxShaderBinaryV1& p_other) {
                data = p_other.data;
                constants = p_other.constants;
                samplers = p_other.samplers;
                return *this;
            }

            const byte* AmatGfxShaderBinaryV1::assign(const byte* p_data, size_t p_size) {
                p_data = helpers::read(p_data, p_size, data);
                p_data = helpers::read(p_data, p_size, constants);
                p_data = helpers::read(p_data, p_size, samplers);
                return p_data;
            }

            //============================================================================/
            //      AmatGfxShaderV1
            //============================================================================/

            AmatGfxShaderV1::AmatGfxShaderV1()
                : isPixelShader(0) {
            }

            AmatGfxShaderV1::AmatGfxShaderV1(const byte* p_data, size_t p_size, const byte** po_pointer) {
                auto pointer = assign(p_data, p_size);
                if (po_pointer) { *po_pointer = pointer; }
            }

            AmatGfxShaderV1::AmatGfxShaderV1(const AmatGfxShaderV1& p_other)
                : isPixelShader(p_other.isPixelShader)
                , dxShader(p_other.dxShader)
                , osxShader(p_other.osxShader) {
            }

            AmatGfxShaderV1& AmatGfxShaderV1::operator=(const AmatGfxShaderV1& p_other) {
                isPixelShader = p_other.isPixelShader;
                dxShader = p_other.dxShader;
                osxShader = p_other.osxShader;
                return *this;
            }

            const byte* AmatGfxShaderV1::assign(const byte* p_data, size_t p_size) {
                p_data = helpers::read(p_data, p_size, isPixelShader);
                p_data = helpers::read(p_data, p_size, dxShader);
                p_data = helpers::read(p_data, p_size, osxShader);
                return p_data;
            }

            //============================================================================/
            //      AmatGfxSamplerStateV1
            //============================================================================/

            AmatGfxSamplerStateV1::AmatGfxSamplerStateV1()
                : state(0) {
            }

            AmatGfxSamplerStateV1::AmatGfxSamplerStateV1(const byte* p_data, size_t p_size, const byte** po_pointer) {
                auto pointer = assign(p_data, p_size);
                if (po_pointer) { *po_pointer = pointer; }
            }

            AmatGfxSamplerStateV1::AmatGfxSamplerStateV1(const AmatGfxSamplerStateV1& p_other)
                : state(p_other.state) {
            }

            AmatGfxSamplerStateV1& AmatGfxSamplerStateV1::operator=(const AmatGfxSamplerStateV1& p_other) {
                state = p_other.state;
                return *this;
            }

            const byte* AmatGfxSamplerStateV1::assign(const byte* p_data, size_t p_size) {
                p_data = helpers::read(p_data, p_size, state);
                return p_data;
            }

            //============================================================================/
            //      AmatGfxVertexShaderVariantV1
            //============================================================================/

            AmatGfxVertexShaderVariantV1::AmatGfxVertexShaderVariantV1()
                : variant(0)
                , vertexShaderIndex(0) {
            }

            AmatGfxVertexShaderVariantV1::AmatGfxVertexShaderVariantV1(const byte* p_data, size_t p_size, const byte** po_pointer) {
                auto pointer = assign(p_data, p_size);
                if (po_pointer) { *po_pointer = pointer; }
            }

            AmatGfxVertexShaderVariantV1::AmatGfxVertexShaderVariantV1(const AmatGfxVertexShaderVariantV1& p_other)
                : variant(p_other.variant)
                , vertexShaderIndex(p_other.vertexShaderIndex) {
            }

            AmatGfxVertexShaderVariantV1& AmatGfxVertexShaderVariantV1::operator=(const AmatGfxVertexShaderVariantV1& p_other) {
                variant = p_other.variant;
                vertexShaderIndex = p_other.vertexShaderIndex;
                return *this;
            }

            const byte* AmatGfxVertexShaderVariantV1::assign(const byte* p_data, size_t p_size) {
                p_data = helpers::read(p_data, p_size, variant);
                p_data = helpers::read(p_data, p_size, vertexShaderIndex);
                return p_data;
            }

            //============================================================================/
            //      AmatGfxEffectV1
            //============================================================================/

            AmatGfxEffectV1::AmatGfxEffectV1()
                : token(0)
                , renderState(0)
                , shaderPassFlags(0)
                , pixelShaderIndex(0) {
            }

            AmatGfxEffectV1::AmatGfxEffectV1(const byte* p_data, size_t p_size, const byte** po_pointer) {
                auto pointer = assign(p_data, p_size);
                if (po_pointer) { *po_pointer = pointer; }
            }

            AmatGfxEffectV1::AmatGfxEffectV1(const AmatGfxEffectV1& p_other)
                : token(p_other.token)
                , renderState(p_other.renderState)
                , shaderPassFlags(p_other.shaderPassFlags)
                , pixelShaderIndex(p_other.pixelShaderIndex)
                , vertexShaderVariants(p_other.vertexShaderVariants) {
            }

            AmatGfxEffectV1& AmatGfxEffectV1::operator=(const AmatGfxEffectV1& p_other) {
                token = p_other.token;
                renderState = p_other.renderState;
                shaderPassFlags = p_other.shaderPassFlags;
                pixelShaderIndex = p_other.pixelShaderIndex;
                vertexShaderVariants = p_other.vertexShaderVariants;
                return *this;
            }

            const byte* AmatGfxEffectV1::assign(const byte* p_data, size_t p_size) {
                p_data = helpers::read(p_data, p_size, token);
                p_data = helpers::read(p_data, p_size, renderState);
                p_data = helpers::read(p_data, p_size, shaderPassFlags);
                p_data = helpers::read(p_data, p_size, pixelShaderIndex);
                p_data = helpers::read(p_data, p_size, vertexShaderVariants);
                return p_data;
            }

            //============================================================================/
            //      AmatGfxPassV1
            //============================================================================/

            AmatGfxPassV1::AmatGfxPassV1() {
            }

            AmatGfxPassV1::AmatGfxPassV1(const byte* p_data, size_t p_size, const byte** po_pointer) {
                auto pointer = assign(p_data, p_size);
                if (po_pointer) { *po_pointer = pointer; }
            }

            AmatGfxPassV1::AmatGfxPassV1(const AmatGfxPassV1& p_other)
                : effects(p_other.effects) {
            }

            AmatGfxPassV1& AmatGfxPassV1::operator=(const AmatGfxPassV1& p_other) {
                effects = p_other.effects;
                return *this;
            }

            const byte* AmatGfxPassV1::assign(const byte* p_data, size_t p_size) {
                p_data = helpers::read(p_data, p_size, effects);
                return p_data;
            }

            //============================================================================/
            //      AmatGfxTechniqueV1
            //============================================================================/

            AmatGfxTechniqueV1::AmatGfxTechniqueV1()
                : quality(0) {
            }

            AmatGfxTechniqueV1::AmatGfxTechniqueV1(const byte* p_data, size_t p_size, const byte** po_pointer) {
                auto pointer = assign(p_data, p_size);
                if (po_pointer) { *po_pointer = pointer; }
            }

            AmatGfxTechniqueV1::AmatGfxTechniqueV1(const AmatGfxTechniqueV1& p_other)
                : quality(p_other.quality)
                , passes(p_other.passes) {
            }

            AmatGfxTechniqueV1& AmatGfxTechniqueV1::operator=(const AmatGfxTechniqueV1& p_other) {
                quality = p_other.quality;
                passes = p_other.passes;
                return *this;
            }

            const byte* AmatGfxTechniqueV1::assign(const byte* p_data, size_t p_size) {
                p_data = helpers::read(p_data, p_size, quality);
                p_data = helpers::read(p_data, p_size, passes);
                return p_data;
            }

            //============================================================================/
            //      AmatGfxMaterialV1
            //============================================================================/

            AmatGfxMaterialV1::AmatGfxMaterialV1() {
            }

            AmatGfxMaterialV1::AmatGfxMaterialV1(const byte* p_data, size_t p_size, const byte** po_pointer) {
                auto pointer = assign(p_data, p_size);
                if (po_pointer) { *po_pointer = pointer; }
            }

            AmatGfxMaterialV1::AmatGfxMaterialV1(const AmatGfxMaterialV1& p_other)
                : shaders(p_other.shaders)
                , samplers(p_other.samplers)
                , techniques(p_other.techniques) {
            }

            AmatGfxMaterialV1& AmatGfxMaterialV1::operator=(const AmatGfxMaterialV1& p_other) {
                shaders = p_other.shaders;
                samplers = p_other.samplers;
                techniques = p_other.techniques;
                return *this;
            }

            const byte* AmatGfxMaterialV1::assign(const byte* p_data, size_t p_size) {
                p_data = helpers::read(p_data, p_size, shaders);
                p_data = helpers::read(p_data, p_size, samplers);
                p_data = helpers::read(p_data, p_size, techniques);
                return p_data;
            }

        }; // namespace chunks
    }; // namespace pf
}; // namespace gw2f
