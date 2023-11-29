// File: pf/chunks/mapc/MapShore.cpp

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

#include <gw2formats/pf/chunks/mapc/MapShore.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      MapShoreChainV3
			//============================================================================/

			MapShoreChainV3::MapShoreChainV3( )
				: offset( 0 )
				, opacity( 0 )
				, animationSpeed( 0 )
				, flags( 0 )
				, restTime( 0 )
				, simplifyDistMin( 0 )
				, simplifyDistMax( 0 )
				, simplifyDot( 0 ) {
			}

			MapShoreChainV3::MapShoreChainV3( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MapShoreChainV3::MapShoreChainV3( const MapShoreChainV3& p_other )
				: offset( p_other.offset )
				, opacity( p_other.opacity )
				, animationSpeed( p_other.animationSpeed )
				, edgeSize( p_other.edgeSize )
				, flags( p_other.flags )
				, points( p_other.points )
				, materialFilename( p_other.materialFilename )
				, textureFilenames( p_other.textureFilenames )
				, restTime( p_other.restTime )
				, simplifyDistMin( p_other.simplifyDistMin )
				, simplifyDistMax( p_other.simplifyDistMax )
				, simplifyDot( p_other.simplifyDot ) {
				std::copy( p_other.fadeRanges, p_other.fadeRanges + 4, fadeRanges );
			}

			MapShoreChainV3& MapShoreChainV3::operator=( const MapShoreChainV3& p_other ) {
				offset = p_other.offset;
				opacity = p_other.opacity;
				animationSpeed = p_other.animationSpeed;
				edgeSize = p_other.edgeSize;
				flags = p_other.flags;
				points = p_other.points;
				materialFilename = p_other.materialFilename;
				textureFilenames = p_other.textureFilenames;
				restTime = p_other.restTime;
				simplifyDistMin = p_other.simplifyDistMin;
				simplifyDistMax = p_other.simplifyDistMax;
				simplifyDot = p_other.simplifyDot;
				std::copy( p_other.fadeRanges, p_other.fadeRanges + 4, fadeRanges );
				return *this;
			}

			const byte* MapShoreChainV3::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, offset );
				p_data = helpers::read( p_data, p_size, opacity );
				p_data = helpers::read( p_data, p_size, animationSpeed );
				p_data = helpers::read( p_data, p_size, edgeSize );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, points );
				p_data = helpers::read( p_data, p_size, materialFilename );
				p_data = helpers::read( p_data, p_size, textureFilenames );
				p_data = helpers::read( p_data, p_size, restTime );
				p_data = helpers::read( p_data, p_size, fadeRanges );
				p_data = helpers::read( p_data, p_size, simplifyDistMin );
				p_data = helpers::read( p_data, p_size, simplifyDistMax );
				p_data = helpers::read( p_data, p_size, simplifyDot );
				return p_data;
			}

			//============================================================================/
			//      MapShoreV3
			//============================================================================/

			MapShoreV3::MapShoreV3( ) {
			}

			MapShoreV3::MapShoreV3( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MapShoreV3::MapShoreV3( const MapShoreV3& p_other )
				: chains( p_other.chains ) {
			}

			MapShoreV3& MapShoreV3::operator=( const MapShoreV3& p_other ) {
				chains = p_other.chains;
				return *this;
			}

			const byte* MapShoreV3::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, chains );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
