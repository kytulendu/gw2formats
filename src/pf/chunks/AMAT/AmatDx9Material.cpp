// File: pf/chunks/AMAT/AmatDx9Material.cpp

/*
Copyright (C) 2014-2016 Khral Steelforge <https://github.com/kytulendu>
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

#include <gw2formats/pf/chunks/AMAT/AmatDx9Material.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      AmatDx9SamplerV11
			//============================================================================/

			AmatDx9SamplerV11::AmatDx9SamplerV11( )
				: textureIndex( 0 ) {
			}

			AmatDx9SamplerV11::AmatDx9SamplerV11( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			AmatDx9SamplerV11::AmatDx9SamplerV11( const AmatDx9SamplerV11& p_other )
				: textureIndex( p_other.textureIndex )
				, state( p_other.state )
				, usesBindTexture( p_other.usesBindTexture ) {
			}

			AmatDx9SamplerV11& AmatDx9SamplerV11::operator=( const AmatDx9SamplerV11& p_other ) {
				textureIndex = p_other.textureIndex;
				state = p_other.state;
				usesBindTexture = p_other.usesBindTexture;
				return *this;
			}

			const byte* AmatDx9SamplerV11::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, textureIndex );
				p_data = helpers::read( p_data, p_size, state );
				p_data = helpers::read( p_data, p_size, usesBindTexture );
				return p_data;
			}

			//============================================================================/
			//      AmatDx9ShaderV11
			//============================================================================/

			AmatDx9ShaderV11::AmatDx9ShaderV11( )
				: instructionCount( 0 ) {
			}

			AmatDx9ShaderV11::AmatDx9ShaderV11( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			AmatDx9ShaderV11::AmatDx9ShaderV11( const AmatDx9ShaderV11& p_other )
				: shader( p_other.shader )
				, constRegisters( p_other.constRegisters )
				, constTokens( p_other.constTokens )
				, instructionCount( p_other.instructionCount ) {
			}

			AmatDx9ShaderV11& AmatDx9ShaderV11::operator=( const AmatDx9ShaderV11& p_other ) {
				shader = p_other.shader;
				constRegisters = p_other.constRegisters;
				constTokens = p_other.constTokens;
				instructionCount = p_other.instructionCount;
				return *this;
			}

			const byte* AmatDx9ShaderV11::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, shader );
				p_data = helpers::read( p_data, p_size, constRegisters );
				p_data = helpers::read( p_data, p_size, constTokens );
				p_data = helpers::read( p_data, p_size, instructionCount );
				return p_data;
			}

			//============================================================================/
			//      AmatDx9EffectV11
			//============================================================================/

			AmatDx9EffectV11::AmatDx9EffectV11( )
				: token( 0 )
				, pixelShader( 0 )
				, vertexShader( 0 )
				, vsGenFlags( 0 )
				, passFlags( 0 ) {
			}

			AmatDx9EffectV11::AmatDx9EffectV11( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			AmatDx9EffectV11::AmatDx9EffectV11( const AmatDx9EffectV11& p_other )
				: token( p_other.token )
				, renderStates( p_other.renderStates )
				, samplerIndex( p_other.samplerIndex )
				, pixelShader( p_other.pixelShader )
				, vertexShader( p_other.vertexShader )
				, texGen( p_other.texGen )
				, vsGenFlags( p_other.vsGenFlags )
				, passFlags( p_other.passFlags ) {
			}

			AmatDx9EffectV11& AmatDx9EffectV11::operator=( const AmatDx9EffectV11& p_other ) {
				token = p_other.token;
				renderStates = p_other.renderStates;
				samplerIndex = p_other.samplerIndex;
				pixelShader = p_other.pixelShader;
				vertexShader = p_other.vertexShader;
				texGen = p_other.texGen;
				vsGenFlags = p_other.vsGenFlags;
				passFlags = p_other.passFlags;
				return *this;
			}

			const byte* AmatDx9EffectV11::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, token );
				p_data = helpers::read( p_data, p_size, renderStates );
				p_data = helpers::read( p_data, p_size, samplerIndex );
				p_data = helpers::read( p_data, p_size, pixelShader );
				p_data = helpers::read( p_data, p_size, vertexShader );
				p_data = helpers::read( p_data, p_size, texGen );
				p_data = helpers::read( p_data, p_size, vsGenFlags );
				p_data = helpers::read( p_data, p_size, passFlags );
				return p_data;
			}

			//============================================================================/
			//      AmatDx9PassV11
			//============================================================================/

			AmatDx9PassV11::AmatDx9PassV11( ) {
			}

			AmatDx9PassV11::AmatDx9PassV11( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			AmatDx9PassV11::AmatDx9PassV11( const AmatDx9PassV11& p_other )
				: effects( p_other.effects ) {
			}

			AmatDx9PassV11& AmatDx9PassV11::operator=( const AmatDx9PassV11& p_other ) {
				effects = p_other.effects;
				return *this;
			}

			const byte* AmatDx9PassV11::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, effects );
				return p_data;
			}

			//============================================================================/
			//      AmatDx9TechniqueV11
			//============================================================================/

			AmatDx9TechniqueV11::AmatDx9TechniqueV11( )
				: maxPsVersion( 0 )
				, maxVsVersion( 0 ) {
			}

			AmatDx9TechniqueV11::AmatDx9TechniqueV11( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			AmatDx9TechniqueV11::AmatDx9TechniqueV11( const AmatDx9TechniqueV11& p_other )
				: name( p_other.name )
				, passes( p_other.passes )
				, maxPsVersion( p_other.maxPsVersion )
				, maxVsVersion( p_other.maxVsVersion ) {
			}

			AmatDx9TechniqueV11& AmatDx9TechniqueV11::operator=( const AmatDx9TechniqueV11& p_other ) {
				name = p_other.name;
				passes = p_other.passes;
				maxPsVersion = p_other.maxPsVersion;
				maxVsVersion = p_other.maxVsVersion;
				return *this;
			}

			const byte* AmatDx9TechniqueV11::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, passes );
				p_data = helpers::read( p_data, p_size, maxPsVersion );
				p_data = helpers::read( p_data, p_size, maxVsVersion );
				return p_data;
			}

			//============================================================================/
			//      AmatDx9MaterialV11
			//============================================================================/

			AmatDx9MaterialV11::AmatDx9MaterialV11( ) {
			}

			AmatDx9MaterialV11::AmatDx9MaterialV11( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			AmatDx9MaterialV11::AmatDx9MaterialV11( const AmatDx9MaterialV11& p_other )
				: samplers( p_other.samplers )
				, shaders( p_other.shaders )
				, techniques( p_other.techniques )
				, useLegacyBindTextures( p_other.useLegacyBindTextures ) {
			}

			AmatDx9MaterialV11& AmatDx9MaterialV11::operator=( const AmatDx9MaterialV11& p_other ) {
				samplers = p_other.samplers;
				shaders = p_other.shaders;
				techniques = p_other.techniques;
				useLegacyBindTextures = p_other.useLegacyBindTextures;
				return *this;
			}

			const byte* AmatDx9MaterialV11::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, samplers );
				p_data = helpers::read( p_data, p_size, shaders );
				p_data = helpers::read( p_data, p_size, techniques );
				p_data = helpers::read( p_data, p_size, useLegacyBindTextures );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
