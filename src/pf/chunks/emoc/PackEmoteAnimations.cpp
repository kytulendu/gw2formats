// File: pf/chunks/emoc/PackEmoteAnimations.cpp

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

#include <gw2formats/pf/chunks/emoc/PackEmoteAnimations.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      PackEmoteTimingV2
			//============================================================================/

			PackEmoteTimingV2::PackEmoteTimingV2( )
				: blendIn( 0 )
				, blendOut( 0 )
				, introDuration( 0 )
				, loopDuration( 0 )
				, outroDuration( 0 ) {
			}

			PackEmoteTimingV2::PackEmoteTimingV2( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackEmoteTimingV2::PackEmoteTimingV2( const PackEmoteTimingV2& p_other )
				: modelFile( p_other.modelFile )
				, blendIn( p_other.blendIn )
				, blendOut( p_other.blendOut )
				, introDuration( p_other.introDuration )
				, loopDuration( p_other.loopDuration )
				, outroDuration( p_other.outroDuration ) {
			}

			PackEmoteTimingV2& PackEmoteTimingV2::operator=( const PackEmoteTimingV2& p_other ) {
				modelFile = p_other.modelFile;
				blendIn = p_other.blendIn;
				blendOut = p_other.blendOut;
				introDuration = p_other.introDuration;
				loopDuration = p_other.loopDuration;
				outroDuration = p_other.outroDuration;
				return *this;
			}

			const byte* PackEmoteTimingV2::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, modelFile );
				p_data = helpers::read( p_data, p_size, blendIn );
				p_data = helpers::read( p_data, p_size, blendOut );
				p_data = helpers::read( p_data, p_size, introDuration );
				p_data = helpers::read( p_data, p_size, loopDuration );
				p_data = helpers::read( p_data, p_size, outroDuration );
				return p_data;
			}

			//============================================================================/
			//      PackEmoteAnimationV2
			//============================================================================/

			PackEmoteAnimationV2::PackEmoteAnimationV2( )
				: token( 0 ) {
			}

			PackEmoteAnimationV2::PackEmoteAnimationV2( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackEmoteAnimationV2::PackEmoteAnimationV2( const PackEmoteAnimationV2& p_other )
				: token( p_other.token )
				, timings( p_other.timings ) {
			}

			PackEmoteAnimationV2& PackEmoteAnimationV2::operator=( const PackEmoteAnimationV2& p_other ) {
				token = p_other.token;
				timings = p_other.timings;
				return *this;
			}

			const byte* PackEmoteAnimationV2::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, token );
				p_data = helpers::read( p_data, p_size, timings );
				return p_data;
			}

			//============================================================================/
			//      PackEmoteAnimationsV2
			//============================================================================/

			PackEmoteAnimationsV2::PackEmoteAnimationsV2( ) {
			}

			PackEmoteAnimationsV2::PackEmoteAnimationsV2( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackEmoteAnimationsV2::PackEmoteAnimationsV2( const PackEmoteAnimationsV2& p_other )
				: animations( p_other.animations ) {
			}

			PackEmoteAnimationsV2& PackEmoteAnimationsV2::operator=( const PackEmoteAnimationsV2& p_other ) {
				animations = p_other.animations;
				return *this;
			}

			const byte* PackEmoteAnimationsV2::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, animations );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
