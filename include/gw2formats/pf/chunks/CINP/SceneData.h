// File: gw2formats/pf/chunks/CINP/SceneData.h

/*
Copyright (C) 2014-2015 Khral Steelforge <https://github.com/kytulendu>
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

// Filetype: CINP
// Chunktype: CSCN

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_CINP_SCENEDATA_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_CINP_SCENEDATA_H_INCLUDED

#include <gw2formats/base.h>
#include <gw2formats/fcc.h>
#include <gw2formats/pf/ChunkFactory.h>

#include <gw2formats/pf/helpers/Array.h>
#include <gw2formats/pf/helpers/FileName.h>
#include <gw2formats/pf/helpers/Ptr.h>
#include <gw2formats/pf/helpers/Vector.h>
#include <gw2formats/pf/helpers/WString.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			GW2FORMATS_API struct PropertyDataV36 {
				qword value;
				helpers::FileName pathVal;
				byte type;
			public:
				PropertyDataV36( );
				PropertyDataV36( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PropertyDataV36( const PropertyDataV36& p_other );
				PropertyDataV36& operator=( const PropertyDataV36& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct CurveKeyDataV36 {
				float time;
				float value;
				float inTangent;
				float outTangent;
			public:
				CurveKeyDataV36( );
				CurveKeyDataV36( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				CurveKeyDataV36( const CurveKeyDataV36& p_other );
				CurveKeyDataV36& operator=( const CurveKeyDataV36& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct FlagKeyDataV36 {
				float time;
				float value;
			public:
				FlagKeyDataV36( );
				FlagKeyDataV36( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				FlagKeyDataV36( const FlagKeyDataV36& p_other );
				FlagKeyDataV36& operator=( const FlagKeyDataV36& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct TriggerKeyDataV36 {
				float time;
				byte flags1;
				byte flags2;
				byte flags3;
				byte flags4;
				qword token1;
				qword token2;
				float value1;
				float value2;
				float value3;
				float value4;
			public:
				TriggerKeyDataV36( );
				TriggerKeyDataV36( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				TriggerKeyDataV36( const TriggerKeyDataV36& p_other );
				TriggerKeyDataV36& operator=( const TriggerKeyDataV36& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct TrackDataV36 {
				qword name;
				helpers::Array<CurveKeyDataV36> curveKeys;
				helpers::Array<FlagKeyDataV36> flagKeys;
				helpers::Array<TriggerKeyDataV36> triggerKeys;
				byte type;
			public:
				TrackDataV36( );
				TrackDataV36( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				TrackDataV36( const TrackDataV36& p_other );
				TrackDataV36& operator=( const TrackDataV36& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct TrackGroupDataV36 {
				qword name;
				dword flags;
				helpers::Array<PropertyDataV36> props;
				helpers::Array<TrackDataV36> tracks;
				byte type;
			public:
				TrackGroupDataV36( );
				TrackGroupDataV36( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				TrackGroupDataV36( const TrackGroupDataV36& p_other );
				TrackGroupDataV36& operator=( const TrackGroupDataV36& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct SequenceDataV36 {
				qword name;
				qword playScript;
				qword updateScript;
				helpers::FileName environmentMap;
				helpers::WString map;
				helpers::WString clientMap;
				float length;
				dword flags;
				helpers::Array<TrackGroupDataV36> trackGroups;
			public:
				SequenceDataV36( );
				SequenceDataV36( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				SequenceDataV36( const SequenceDataV36& p_other );
				SequenceDataV36& operator=( const SequenceDataV36& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ColorDefDataV36 {
				float intensity;
				byte3 color;
			public:
				ColorDefDataV36( );
				ColorDefDataV36( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ColorDefDataV36( const ColorDefDataV36& p_other );
				ColorDefDataV36& operator=( const ColorDefDataV36& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct AmbientLightDataV36 {
				ColorDefDataV36 ambientGroundColor;
				ColorDefDataV36 ambientSkyColor;
				ColorDefDataV36 fillColor;
				ColorDefDataV36 hemisphericalColor;
				qword name;
			public:
				AmbientLightDataV36( );
				AmbientLightDataV36( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				AmbientLightDataV36( const AmbientLightDataV36& p_other );
				AmbientLightDataV36& operator=( const AmbientLightDataV36& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct FileNameRefDataV36 {
				qword name;
				helpers::FileName fileName;
			public:
				FileNameRefDataV36( );
				FileNameRefDataV36( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				FileNameRefDataV36( const FileNameRefDataV36& p_other );
				FileNameRefDataV36& operator=( const FileNameRefDataV36& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ScriptDataV36 {
				qword name;
				helpers::Array<byte> byteCode;
			public:
				ScriptDataV36( );
				ScriptDataV36( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ScriptDataV36( const ScriptDataV36& p_other );
				ScriptDataV36& operator=( const ScriptDataV36& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct TextEntryDataV36 {
				helpers::WString text;
				byte language;
			public:
				TextEntryDataV36( );
				TextEntryDataV36( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				TextEntryDataV36( const TextEntryDataV36& p_other );
				TextEntryDataV36& operator=( const TextEntryDataV36& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct TextResourceDataV36 {
				qword name;
				dword index;
				dword voiceId;
				helpers::Array<TextEntryDataV36> textEntries;
			public:
				TextResourceDataV36( );
				TextResourceDataV36( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				TextResourceDataV36( const TextResourceDataV36& p_other );
				TextResourceDataV36& operator=( const TextResourceDataV36& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct SpeciesResourceDataV36 {
				byte16 speciesId;
				qword name;
				qword modelId;
				qword modelVariant;
			public:
				SpeciesResourceDataV36( );
				SpeciesResourceDataV36( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				SpeciesResourceDataV36( const SpeciesResourceDataV36& p_other );
				SpeciesResourceDataV36& operator=( const SpeciesResourceDataV36& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ResourceDataV36 {
				helpers::Array<AmbientLightDataV36> ambientLightResources;
				helpers::Array<FileNameRefDataV36> fileNameRefs;
				helpers::Array<ScriptDataV36> scripts;
				helpers::Array<TextResourceDataV36> textResources;
				helpers::Array<SpeciesResourceDataV36> speciesResource;
			public:
				ResourceDataV36( );
				ResourceDataV36( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ResourceDataV36( const ResourceDataV36& p_other );
				ResourceDataV36& operator=( const ResourceDataV36& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct SceneDataV36 {
				qword startingSequence;
				helpers::Array<SequenceDataV36> sequences;
				ResourceDataV36 resources;
				helpers::Ptr<TrackGroupDataV36> trackGroups;
			public:
				SceneDataV36( );
				SceneDataV36( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				SceneDataV36( const SceneDataV36& p_other );
				SceneDataV36& operator=( const SceneDataV36& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef SceneDataV36 SceneData;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::CINP, fcc::CSCN> { typedef chunks::SceneData Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_CINP_SCENEDATA_H_INCLUDED
