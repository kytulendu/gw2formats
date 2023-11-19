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
			//      PackEmoteTimingV3
			//============================================================================/

			PackEmoteTimingV3::PackEmoteTimingV3( )
				: blendIn( 0 )
				, blendOut( 0 )
				, introDuration( 0 )
				, loopDuration( 0 )
				, outroDuration( 0 )
				, StartOffset( 0 ) {
			}

			PackEmoteTimingV3::PackEmoteTimingV3( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackEmoteTimingV3::PackEmoteTimingV3( const PackEmoteTimingV3& p_other )
				: modelFile( p_other.modelFile )
				, blendIn( p_other.blendIn )
				, blendOut( p_other.blendOut )
				, introDuration( p_other.introDuration )
				, loopDuration( p_other.loopDuration )
				, outroDuration( p_other.outroDuration )
				, StartOffset( p_other.StartOffset ) {
			}

			PackEmoteTimingV3& PackEmoteTimingV3::operator=( const PackEmoteTimingV3& p_other ) {
				modelFile = p_other.modelFile;
				blendIn = p_other.blendIn;
				blendOut = p_other.blendOut;
				introDuration = p_other.introDuration;
				loopDuration = p_other.loopDuration;
				outroDuration = p_other.outroDuration;
				StartOffset = p_other.StartOffset;
				return *this;
			}

			const byte* PackEmoteTimingV3::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, modelFile );
				p_data = helpers::read( p_data, p_size, blendIn );
				p_data = helpers::read( p_data, p_size, blendOut );
				p_data = helpers::read( p_data, p_size, introDuration );
				p_data = helpers::read( p_data, p_size, loopDuration );
				p_data = helpers::read( p_data, p_size, outroDuration );
				p_data = helpers::read( p_data, p_size, StartOffset );
				return p_data;
			}

			//============================================================================/
			//      PackEmoteAnimationV3
			//============================================================================/

			PackEmoteAnimationV3::PackEmoteAnimationV3( )
				: token( 0 ) {
			}

			PackEmoteAnimationV3::PackEmoteAnimationV3( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackEmoteAnimationV3::PackEmoteAnimationV3( const PackEmoteAnimationV3& p_other )
				: token( p_other.token )
				, timings( p_other.timings ) {
			}

			PackEmoteAnimationV3& PackEmoteAnimationV3::operator=( const PackEmoteAnimationV3& p_other ) {
				token = p_other.token;
				timings = p_other.timings;
				return *this;
			}

			const byte* PackEmoteAnimationV3::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, token );
				p_data = helpers::read( p_data, p_size, timings );
				return p_data;
			}

			//============================================================================/
			//      PackEmoteAnimationsV3
			//============================================================================/

			PackEmoteAnimationsV3::PackEmoteAnimationsV3( ) {
			}

			PackEmoteAnimationsV3::PackEmoteAnimationsV3( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PackEmoteAnimationsV3::PackEmoteAnimationsV3( const PackEmoteAnimationsV3& p_other )
				: animations( p_other.animations ) {
			}

			PackEmoteAnimationsV3& PackEmoteAnimationsV3::operator=( const PackEmoteAnimationsV3& p_other ) {
				animations = p_other.animations;
				return *this;
			}

			const byte* PackEmoteAnimationsV3::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, animations );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
