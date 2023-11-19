// File: gw2formats/pf/chunks/emoc/PackEmoteAnimations.h

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

// Filetype: emoc
// Chunktype: anim

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_EMOC_PACKEMOTEANIMATIONS_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_EMOC_PACKEMOTEANIMATIONS_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/FileName.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			GW2FORMATS_API struct PackEmoteTimingV3 {
				helpers::FileName modelFile;
				float blendIn;
				float blendOut;
				dword introDuration;
				dword loopDuration;
				dword outroDuration;
				dword StartOffset;
			public:
				PackEmoteTimingV3( );
				PackEmoteTimingV3( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackEmoteTimingV3( const PackEmoteTimingV3& p_other );
				PackEmoteTimingV3& operator=( const PackEmoteTimingV3& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackEmoteAnimationV3 {
				qword token;
				helpers::Array<PackEmoteTimingV3> timings;
			public:
				PackEmoteAnimationV3( );
				PackEmoteAnimationV3( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackEmoteAnimationV3( const PackEmoteAnimationV3& p_other );
				PackEmoteAnimationV3& operator=( const PackEmoteAnimationV3& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PackEmoteAnimationsV3 {
				helpers::Array<PackEmoteAnimationV3> animations;
			public:
				PackEmoteAnimationsV3( );
				PackEmoteAnimationsV3( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PackEmoteAnimationsV3( const PackEmoteAnimationsV3& p_other );
				PackEmoteAnimationsV3& operator=( const PackEmoteAnimationsV3& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef PackEmoteAnimationsV3 PackEmoteAnimations;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::emoc, fcc::anim> { typedef chunks::PackEmoteAnimations Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_EMOC_PACKEMOTEANIMATIONS_H_INCLUDED
