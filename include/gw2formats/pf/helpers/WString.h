// File: gw2formats/pf/helpers/WString.h

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

#pragma once

#ifndef GW2FORMATS_PF_HELPERS_WSTRING_H_INCLUDED
#define GW2FORMATS_PF_HELPERS_WSTRING_H_INCLUDED

#include <cwchar>

#include <gw2formats/base.h>
#include <gw2formats/pf/helpers/StringBase.h>

namespace gw2f {
	namespace pf {
		namespace helpers {

			typedef StringBase<char16> WString;

			template<> inline size_t StringBase<char16>::strlen( const char16* p_string ) const {
#if defined(_MSC_VER)
				return std::wcslen( p_string );
#elif defined(__GNUC__) || defined(__GNUG__)
				return std::char_traits<char16>::length( p_string );
#else
				// NOTE: UNTESTED!
				return std::wcslen( p_string );
#endif
			}

		}; // namespace helpers
	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_HELPERS_WSTRING_H_INCLUDED
