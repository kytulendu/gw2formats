// File: pf/chunks/AMAT/AmatToolParams.cpp

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

#include <gw2formats/pf/chunks/AMAT/AmatToolParams.h>

namespace gw2f {
    namespace pf {
        namespace chunks {

            //============================================================================/
            //      AmatToolConstantV3
            //============================================================================/

            AmatToolConstantV3::AmatToolConstantV3()
                : token(0)
                , flags(0) {
            }

            AmatToolConstantV3::AmatToolConstantV3(const byte* p_data, size_t p_size, const byte** po_pointer) {
                auto pointer = assign(p_data, p_size);
                if (po_pointer) { *po_pointer = pointer; }
            }

            AmatToolConstantV3::AmatToolConstantV3(const AmatToolConstantV3& p_other)
                : token(p_other.token)
                , displayName(p_other.displayName)
                , defaultValue(p_other.defaultValue)
                , flags(p_other.flags)
                , minValue(p_other.minValue)
                , maxValue(p_other.maxValue) {
            }

            AmatToolConstantV3& AmatToolConstantV3::operator=(const AmatToolConstantV3& p_other) {
                token = p_other.token;
                displayName = p_other.displayName;
                defaultValue = p_other.defaultValue;
                flags = p_other.flags;
                minValue = p_other.minValue;
                maxValue = p_other.maxValue;
                return *this;
            }

            const byte* AmatToolConstantV3::assign(const byte* p_data, size_t p_size) {
                p_data = helpers::read(p_data, p_size, token);
                p_data = helpers::read(p_data, p_size, displayName);
                p_data = helpers::read(p_data, p_size, defaultValue);
                p_data = helpers::read(p_data, p_size, flags);
                p_data = helpers::read(p_data, p_size, minValue);
                p_data = helpers::read(p_data, p_size, maxValue);
                return p_data;
            }

            //============================================================================/
            //      AmatToolTextureV3
            //============================================================================/

            AmatToolTextureV3::AmatToolTextureV3()
                : flags(0) {
            }

            AmatToolTextureV3::AmatToolTextureV3(const byte* p_data, size_t p_size, const byte** po_pointer) {
                auto pointer = assign(p_data, p_size);
                if (po_pointer) { *po_pointer = pointer; }
            }

            AmatToolTextureV3::AmatToolTextureV3(const AmatToolTextureV3& p_other)
                : texName(p_other.texName)
                , texDefaultFile(p_other.texDefaultFile)
                , flags(p_other.flags)
                , texGen(p_other.texGen) {
            }

            AmatToolTextureV3& AmatToolTextureV3::operator=(const AmatToolTextureV3& p_other) {
                texName = p_other.texName;
                texDefaultFile = p_other.texDefaultFile;
                flags = p_other.flags;
                texGen = p_other.texGen;
                return *this;
            }

            const byte* AmatToolTextureV3::assign(const byte* p_data, size_t p_size) {
                p_data = helpers::read(p_data, p_size, texName);
                p_data = helpers::read(p_data, p_size, texDefaultFile);
                p_data = helpers::read(p_data, p_size, flags);
                p_data = helpers::read(p_data, p_size, texGen);
                return p_data;
            }

            //============================================================================/
            //      AmatToolParamsV3
            //============================================================================/

            AmatToolParamsV3::AmatToolParamsV3()
                : flags(0)
                , texCoordCount(0)
                , texTransformCount(0)
                , decompressedTextCount(0) {
            }

            AmatToolParamsV3::AmatToolParamsV3(const byte* p_data, size_t p_size, const byte** po_pointer) {
                auto pointer = assign(p_data, p_size);
                if (po_pointer) { *po_pointer = pointer; }
            }

            AmatToolParamsV3::AmatToolParamsV3(const AmatToolParamsV3& p_other)
                : description(p_other.description)
                , flags(p_other.flags)
                , texCoordCount(p_other.texCoordCount)
                , texTransformCount(p_other.texTransformCount)
                , decompressedTextCount(p_other.decompressedTextCount)
                , compressedText(p_other.compressedText)
                , constants(p_other.constants)
                , textures(p_other.textures) {
            }

            AmatToolParamsV3& AmatToolParamsV3::operator=(const AmatToolParamsV3& p_other) {
                description = p_other.description;
                flags = p_other.flags;
                texCoordCount = p_other.texCoordCount;
                texTransformCount = p_other.texTransformCount;
                decompressedTextCount = p_other.decompressedTextCount;
                compressedText = p_other.compressedText;
                constants = p_other.constants;
                textures = p_other.textures;
                return *this;
            }

            const byte* AmatToolParamsV3::assign(const byte* p_data, size_t p_size) {
                p_data = helpers::read(p_data, p_size, description);
                p_data = helpers::read(p_data, p_size, flags);
                p_data = helpers::read(p_data, p_size, texCoordCount);
                p_data = helpers::read(p_data, p_size, texTransformCount);
                p_data = helpers::read(p_data, p_size, decompressedTextCount);
                p_data = helpers::read(p_data, p_size, compressedText);
                p_data = helpers::read(p_data, p_size, constants);
                p_data = helpers::read(p_data, p_size, textures);
                return p_data;
            }

        }; // namespace chunks
    }; // namespace pf
}; // namespace gw2f
