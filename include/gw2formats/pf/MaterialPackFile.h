// File: gw2formats/pf/MaterialPackFile.h

/*  Copyright (C) 2023 Khralkatorrix <https://github.com/kytulendu>
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

#ifndef GW2FORMATS_PF_MATERIALPACKFILE_H_INCLUDED
#define GW2FORMATS_PF_MATERIALPACKFILE_H_INCLUDED

#include <gw2formats/fcc.h>
#include <gw2formats/pf/PackFile.h>

#include <gw2formats/pf/chunks/AMAT/AmatGr.h>
#include <gw2formats/pf/chunks/AMAT/AmatDx9Material.h>
#include <gw2formats/pf/chunks/AMAT/AmatGfxMaterial.h>

namespace gw2f {
    namespace pf {

        typedef PackFile<fcc::AMAT> AmatPackFile;
        typedef PackFile<fcc::AMAT> MaterialPackFile;

        namespace MaterialChunks {
            enum {
                GRMT = fcc::GRMT,
                GrannyMaterial = fcc::GRMT,
                DX9S = fcc::DX9S,
                Dx9Shader = fcc::DX9S,
                BGFX = fcc::BGFX,
            }; // anon enum
        }; // namespace MaterialChunks

    }; // namespace pf
}; // namespace gw2formats

#endif // GW2FORMATS_PF_MATERIALPACKFILE_H_INCLUDED
