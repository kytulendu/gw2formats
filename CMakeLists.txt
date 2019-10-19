project(libgw2formats)

cmake_minimum_required(VERSION 3.0)

# Set a default build type if none was specified
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message("Setting build type to 'RelWithDebInfo' as none was specified.")
  set(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING "Choose the type of build." FORCE)
  # Set the possible values of build type for cmake-gui
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release"
    "MinSizeRel" "RelWithDebInfo")
endif()

# Set options
option(BUILD_EXAMPLES "Build the examples." OFF)

# libgw2formats

set(LIBGW2FORMATS_VERSION_MAJOR 1)
set(LIBGW2FORMATS_VERSION_MINOR 0)
set(LIBGW2FORMATS_VERSION_PATCH 0)
set(LIBGW2FORMATS_VERSION "${LIBGW2FORMATS_VERSION_MAJOR}.${LIBGW2FORMATS_VERSION_MINOR}.${LIBGW2FORMATS_VERSION_PATCH}")

set(LIBGW2FORMATS_SOURCE_DIR ${PROJECT_SOURCE_DIR}/src)
set(LIBGW2FORMATS_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)

set(LIBGW2FORMATS_SOURCE_FILES
    ${LIBGW2FORMATS_SOURCE_DIR}/StringsFile.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/TextureFile.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/exception/Exception.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/ABIX/BankIndexData.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/ABNK/BankFileData.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/AMAT/AmatDx9Material.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/AMAT/AmatGr.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/AMSP/ScriptFileData.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/anic/PackAnimSequences.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/ASND/WaveformData.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/CINP/SceneData.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/cmaC/CollideModelManifest.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/cmpc/PackComposite.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/cntc/PackContent.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/emoc/PackEmoteAnimations.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/eula/PackEula.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/hvkC/PackMapCollide.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mapc/common.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mapc/MapAudio.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mapc/MapMission.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mapc/MapParam.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mapc/MapShore.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mapc/MapSurfaces.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mapc/MapTerrainImg.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mapc/PackMapAreas.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mapc/PackMapCubeMap.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mapc/PackMapDecals.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mapc/PackMapEnvironment.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mapc/PackMapLights.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mapc/PackMapProp.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mapc/PackMapRivers.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mapc/PackMapShadowExt.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mapc/PackMapTerrain.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mapc/PackMapZones.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mMet/PackMapMetadata.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/MODL/common.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/MODL/ModelFileAnimation.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/MODL/ModelFileData.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/MODL/ModelFileGeometry.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/MODL/ModelFileProperties.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/MODL/ModelFileRootMotion.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/MODL/ModelFileSkeleton.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/mpsd/PackMapShadow.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/PIMG/PagedImageTableData.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/prlt/ContentPortalManifest.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/txtm/TextPackManifest.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/txtV/TextPackVariants.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/chunks/txtv_/TextPackVoices.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/helpers/FileName.cpp
    ${LIBGW2FORMATS_SOURCE_DIR}/pf/helpers/FileReference.cpp
)

set(LIBGW2FORMATS_HEADER_FILES
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/base.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/fcc.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/Language.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/StringsFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/TextureFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/exception/Exception.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/AnimSequencesPackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/AudioPackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/BankIndexPackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/BankPackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/ChunkFactory.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/CollideModelManifestPackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/CompositePackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/ContentManifestPackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/EmoteAnimPackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/EulaPackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/HavokPackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/MapMetadataPackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/MapPackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/MapShadowPackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/MaterialPackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/ModelPackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/PackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/PagedImagePackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/PortalManifestPackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/ScenePackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/ScriptPackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/TextManifestPackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/TextVariantPackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/TextVoicePackFile.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/ABIX/BankIndexData.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/ABNK/BankFileData.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/AMAT/AmatDx9Material.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/AMAT/AmatGr.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/AMSP/ScriptFileData.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/anic/PackAnimSequences.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/ASND/WaveformData.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/CINP/SceneData.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/cmaC/CollideModelManifest.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/cmpc/PackComposite.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/cntc/PackContent.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/emoc/PackEmoteAnimations.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/eula/PackEula.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/hvkC/PackMapCollide.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mapc/common.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mapc/MapAudio.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mapc/MapMission.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mapc/MapParam.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mapc/MapShore.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mapc/MapSurfaces.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mapc/MapTerrainImg.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mapc/PackMapAreas.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mapc/PackMapCollide.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mapc/PackMapCubeMap.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mapc/PackMapDecals.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mapc/PackMapEnvironment.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mapc/PackMapLights.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mapc/PackMapProp.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mapc/PackMapRivers.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mapc/PackMapShadowExt.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mapc/PackMapTerrain.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mapc/PackMapZones.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mMet/PackMapMetadata.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/MODL/common.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/MODL/ModelFileAnimation.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/MODL/ModelFileData.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/MODL/ModelFileGeometry.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/MODL/ModelFileProperties.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/MODL/ModelFileRootMotion.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/MODL/ModelFileSkeleton.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/mpsd/PackMapShadow.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/PIMG/PagedImageTableData.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/prlt/ContentPortalManifest.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/txtm/TextPackManifest.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/txtV/TextPackVariants.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/chunks/txtv_/TextPackVoices.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/helpers/Array.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/helpers/FileName.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/helpers/FileReference.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/helpers/Ptr.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/helpers/read.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/helpers/RefList.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/helpers/String.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/helpers/StringBase.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/helpers/Vector.h
    ${LIBGW2FORMATS_INCLUDE_DIR}/gw2formats/pf/helpers/WString.h
)

source_group(include FILES ${LIBGW2FORMATS_HEADER_FILES})

add_library(gw2formats SHARED ${LIBGW2FORMATS_SOURCE_FILES} ${LIBGW2FORMATS_HEADER_FILES})

target_compile_definitions(gw2formats PRIVATE LIBGW2FORMATS_EXPORT)

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" OR
    "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    target_compile_options(gw2formats PRIVATE -Wall)
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    target_compile_options(gw2formats PRIVATE /W4)
endif()

target_include_directories(gw2formats PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_include_directories(gw2formats PUBLIC $<INSTALL_INTERFACE:include> $<BUILD_INTERFACE:${LIBGW2FORMATS_INCLUDE_DIR}>)

set_property(TARGET gw2formats PROPERTY VERSION ${LIBGW2FORMATS_VERSION})
set_property(TARGET gw2formats PROPERTY SOVERSION ${LIBGW2FORMATS_VERSION_MAJOR})
set_property(TARGET gw2formats PROPERTY DEBUG_POSTFIX d)

# samples
if(BUILD_EXAMPLES)
    find_package(libgw2dattools CONFIG REQUIRED)
    add_subdirectory(examples)
endif()

# installation - spefify files to package
install(TARGETS gw2formats EXPORT libgw2formatsTargets
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PRIVATE_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(DIRECTORY ${LIBGW2FORMATS_INCLUDE_DIR}/ DESTINATION include FILES_MATCHING PATTERN "*.h")

if(MSVC)
    install(FILES $<TARGET_FILE_DIR:gw2formats>/gw2formatsd.pdb DESTINATION bin CONFIGURATIONS Debug)
endif()

include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    ${CMAKE_BINARY_DIR}/cmake/libgw2formatsVersion.cmake
    VERSION ${LIBGW2FORMATS_VERSION}
    COMPATIBILITY SameMajorVersion
)

# installation - build tree specific package config files
export(EXPORT libgw2formatsTargets FILE ${CMAKE_BINARY_DIR}/libgw2formatsTargets.cmake)
configure_file(${PROJECT_SOURCE_DIR}/libgw2formatsConfig.cmake.in
    ${CMAKE_BINARY_DIR}/libgw2formatsConfig.cmake
    COPYONLY
)

# installation - relocatable package config files
configure_package_config_file(${PROJECT_SOURCE_DIR}/libgw2formatsConfig.cmake.in
                              ${CMAKE_CURRENT_BINARY_DIR}/cmake/libgw2formatsConfig.cmake
                              INSTALL_DESTINATION cmake
)
install(EXPORT libgw2formatsTargets
    FILE libgw2formatsTargets.cmake
    DESTINATION "lib/cmake/libgw2formats"
)
install(FILES
    ${CMAKE_BINARY_DIR}/cmake/libgw2formatsConfig.cmake
    ${CMAKE_BINARY_DIR}/cmake/libgw2formatsVersion.cmake
    DESTINATION "lib/cmake/libgw2formats"
)

if(NOT TARGET uninstall)
  configure_file(
      ${CMAKE_CURRENT_SOURCE_DIR}/cmake_uninstall.cmake.in
      ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake
      IMMEDIATE @ONLY)

  add_custom_target(uninstall
      COMMAND ${CMAKE_COMMAND} -P
      ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)
endif()
