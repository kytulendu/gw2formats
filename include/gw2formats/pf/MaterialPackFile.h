// File: gw2formats/pf/MaterialPackFile.h

#pragma once

#ifndef GW2FORMATS_PF_MATERIALPACKFILE_H_INCLUDED
#define GW2FORMATS_PF_MATERIALPACKFILE_H_INCLUDED

#include <gw2formats/fcc.h>
#include <gw2formats/pf/PackFile.h>

#include <gw2formats/pf/chunks/AMAT/AmatGr.h>
#include <gw2formats/pf/chunks/AMAT/AmatDx9Material.h>

namespace gw2f {
namespace pf {

typedef PackFile<fcc::AMAT> AmatPackFile;
typedef PackFile<fcc::AMAT> MaterialPackFile;

namespace MaterialChunks { enum 
{
    GRMT           = fcc::GRMT,
    GrannyMaterial = fcc::GRMT,
    DX9S           = fcc::DX9S,
    Dx9Shader      = fcc::DX9S,
}; // anon enum
}; // namespace MaterialChunks

}; // namespace pf
}; // namespace gw2formats

#endif // GW2FORMATS_PF_MATERIALPACKFILE_H_INCLUDED
