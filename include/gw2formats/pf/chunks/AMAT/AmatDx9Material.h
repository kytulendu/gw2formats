// File: gw2formats/pf/chunks/AMAT/AmatDx9Material.h

/*
Copyright (C) 2014-2015 Khralkatorrix <https://github.com/kytulendu>
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

// Filetype: AMAT
// Chunktype: DX9S

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_AMAT_AMATDX9MATERIAL_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_AMAT_AMATDX9MATERIAL_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>
#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/RefList.h>
#include <gw2formats/pf/helpers/String.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			GW2FORMATS_API struct AmatDx9SamplerV11 {
				dword textureIndex;
				helpers::Array<dword> state;
				dword usesBindTexture;
			public:
				AmatDx9SamplerV11( );
				AmatDx9SamplerV11( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				AmatDx9SamplerV11( const AmatDx9SamplerV11& p_other );
				AmatDx9SamplerV11& operator=( const AmatDx9SamplerV11& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct AmatDx9ShaderV11 {
				helpers::Array<dword> shader;
				helpers::Array<dword> constRegisters;
				helpers::Array<dword> constTokens;
				word instructionCount;
			public:
				AmatDx9ShaderV11( );
				AmatDx9ShaderV11( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				AmatDx9ShaderV11( const AmatDx9ShaderV11& p_other );
				AmatDx9ShaderV11& operator=( const AmatDx9ShaderV11& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct AmatDx9EffectV11 {
				qword token;
				helpers::Array<dword> renderStates;
				helpers::Array<dword> samplerIndex;
				dword pixelShader;
				dword vertexShader;
				helpers::Array<dword> texGen;
				dword vsGenFlags;
				dword passFlags;
			public:
				AmatDx9EffectV11( );
				AmatDx9EffectV11( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				AmatDx9EffectV11( const AmatDx9EffectV11& p_other );
				AmatDx9EffectV11& operator=( const AmatDx9EffectV11& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct AmatDx9PassV11 {
				helpers::RefList<AmatDx9EffectV11> effects;
			public:
				AmatDx9PassV11( );
				AmatDx9PassV11( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				AmatDx9PassV11( const AmatDx9PassV11& p_other );
				AmatDx9PassV11& operator=( const AmatDx9PassV11& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct AmatDx9TechniqueV11 {
				helpers::String name;
				helpers::Array<AmatDx9PassV11> passes;
				word maxPsVersion;
				word maxVsVersion;
			public:
				AmatDx9TechniqueV11( );
				AmatDx9TechniqueV11( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				AmatDx9TechniqueV11( const AmatDx9TechniqueV11& p_other );
				AmatDx9TechniqueV11& operator=( const AmatDx9TechniqueV11& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct AmatDx9MaterialV11 {
				helpers::Array<AmatDx9SamplerV11> samplers;
				helpers::Array<AmatDx9ShaderV11> shaders;
				helpers::Array<AmatDx9TechniqueV11> techniques;
				dword useLegacyBindTextures;
			public:
				AmatDx9MaterialV11( );
				AmatDx9MaterialV11( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				AmatDx9MaterialV11( const AmatDx9MaterialV11& p_other );
				AmatDx9MaterialV11& operator=( const AmatDx9MaterialV11& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef AmatDx9MaterialV11 AmatDx9Material;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::AMAT, fcc::DX9S> { typedef chunks::AmatDx9Material Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_AMAT_AMATDX9MATERIAL_H_INCLUDED
