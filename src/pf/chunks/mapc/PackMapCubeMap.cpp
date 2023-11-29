// File: pf/chunks/mapc/PackMapCubeMap.cpp

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

#include <gw2formats/pf/chunks/mapc/PackMapCubeMap.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      PackMapCubeMapSampleV4
			//============================================================================/

			PackMapCubeMapSampleV4::PackMapCubeMapSampleV4( )
				: envID( 0 ) {
			}

			PackMapCubeMapSampleV4::PackMapCubeMapSampleV4( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapCubeMapSampleV4::PackMapCubeMapSampleV4( const PackMapCubeMapSampleV4& p_other )
				: position( p_other.position )
				, filenameDayDefault( p_other.filenameDayDefault )
				, filenameNightDefault( p_other.filenameNightDefault )
				, filenameDayScript( p_other.filenameDayScript )
				, filenameNightScript( p_other.filenameNightScript )
				, filenameDayDefaultHiRes( p_other.filenameDayDefaultHiRes )
				, filenameNightDefaultHiRes( p_other.filenameNightDefaultHiRes )
				, filenameDayScriptHiRes( p_other.filenameDayScriptHiRes )
				, filenameNightScriptHiRes( p_other.filenameNightScriptHiRes )
				, envID( p_other.envID ) {
			}

			PackMapCubeMapSampleV4& PackMapCubeMapSampleV4::operator=( const PackMapCubeMapSampleV4& p_other ) {
				position = p_other.position;
				filenameDayDefault = p_other.filenameDayDefault;
				filenameNightDefault = p_other.filenameNightDefault;
				filenameDayScript = p_other.filenameDayScript;
				filenameNightScript = p_other.filenameNightScript;
				filenameDayDefaultHiRes = p_other.filenameDayDefaultHiRes;
				filenameNightDefaultHiRes = p_other.filenameNightDefaultHiRes;
				filenameDayScriptHiRes = p_other.filenameDayScriptHiRes;
				filenameNightScriptHiRes = p_other.filenameNightScriptHiRes;
				envID = p_other.envID;
				return *this;
			}

			const byte* PackMapCubeMapSampleV4::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, position );
				p_data = helpers::read( p_data, p_size, filenameDayDefault );
				p_data = helpers::read( p_data, p_size, filenameNightDefault );
				p_data = helpers::read( p_data, p_size, filenameDayScript );
				p_data = helpers::read( p_data, p_size, filenameNightScript );
				p_data = helpers::read( p_data, p_size, filenameDayDefaultHiRes );
				p_data = helpers::read( p_data, p_size, filenameNightDefaultHiRes );
				p_data = helpers::read( p_data, p_size, filenameDayScriptHiRes );
				p_data = helpers::read( p_data, p_size, filenameNightScriptHiRes );
				p_data = helpers::read( p_data, p_size, envID );
				return p_data;
			}

			//============================================================================/
			//      PackMapCubeMapParamsV4
			//============================================================================/

			PackMapCubeMapParamsV4::PackMapCubeMapParamsV4( )
				: modulateColor( 0 )
				, brightness( 0 )
				, contrast( 0 )
				, blurPasses( 0 ) {
			}

			PackMapCubeMapParamsV4::PackMapCubeMapParamsV4( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapCubeMapParamsV4::PackMapCubeMapParamsV4( const PackMapCubeMapParamsV4& p_other )
				: modulateColor( p_other.modulateColor )
				, brightness( p_other.brightness )
				, contrast( p_other.contrast )
				, blurPasses( p_other.blurPasses )
				, envVolume( p_other.envVolume ) {
			}

			PackMapCubeMapParamsV4& PackMapCubeMapParamsV4::operator=( const PackMapCubeMapParamsV4& p_other ) {
				modulateColor = p_other.modulateColor;
				brightness = p_other.brightness;
				contrast = p_other.contrast;
				blurPasses = p_other.blurPasses;
				envVolume = p_other.envVolume;
				return *this;
			}

			const byte* PackMapCubeMapParamsV4::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, modulateColor );
				p_data = helpers::read( p_data, p_size, brightness );
				p_data = helpers::read( p_data, p_size, contrast );
				p_data = helpers::read( p_data, p_size, blurPasses );
				p_data = helpers::read( p_data, p_size, envVolume );
				return p_data;
			}

			//============================================================================/
			//      PackMapCubeMapV4
			//============================================================================/

			PackMapCubeMapV4::PackMapCubeMapV4( ) {
			}

			PackMapCubeMapV4::PackMapCubeMapV4( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackMapCubeMapV4::PackMapCubeMapV4( const PackMapCubeMapV4& p_other )
				: sampleArray( p_other.sampleArray )
				, paramsArray( p_other.paramsArray ) {
			}

			PackMapCubeMapV4& PackMapCubeMapV4::operator=( const PackMapCubeMapV4& p_other ) {
				sampleArray = p_other.sampleArray;
				paramsArray = p_other.paramsArray;
				return *this;
			}

			const byte* PackMapCubeMapV4::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, sampleArray );
				p_data = helpers::read( p_data, p_size, paramsArray );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
