// File: gw2formats/pf/chunks/AMSP/ScriptFileData.h

/*
Copyright (C) 2014-2015 Khralkatorrix <https://github.com/kytulendu>
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

// Filetype: AMSP
// Chunktype: AMSP

#pragma once

#ifndef GW2FORMATS_PF_CHUNKS_AMSP_SCRIPTFILEDATA_H_INCLUDED
#define GW2FORMATS_PF_CHUNKS_AMSP_SCRIPTFILEDATA_H_INCLUDED

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

			GW2FORMATS_API struct DspDataV29 {
				dword type;
				dword flags;
				helpers::Array<float> properties;
			public:
				DspDataV29( );
				DspDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				DspDataV29( const DspDataV29& p_other );
				DspDataV29& operator=( const DspDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct BussDynamicDataV29 {
				qword name;
				dword flags;
				float volume;
				helpers::Array<DspDataV29> dsp;
			public:
				BussDynamicDataV29( );
				BussDynamicDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				BussDynamicDataV29( const BussDynamicDataV29& p_other );
				BussDynamicDataV29& operator=( const BussDynamicDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct BussDataV29 {
				qword name;
				dword flags;
				qword output;
				float normalizeFadeTime;
				float normalizeThreshold;
				float normalizeMaxAmp;
				float compressorThreshold;
				float compressorAttack;
				float compressorRelease;
				float compressorGainMakeup;
				helpers::Ptr<BussDynamicDataV29> dynamicData;
			public:
				BussDataV29( );
				BussDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				BussDataV29( const BussDataV29& p_other );
				BussDataV29& operator=( const BussDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct EnvelopePointDataV29 {
				float offset;
				float value;
			public:
				EnvelopePointDataV29( );
				EnvelopePointDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				EnvelopePointDataV29( const EnvelopePointDataV29& p_other );
				EnvelopePointDataV29& operator=( const EnvelopePointDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct EnvelopeDataV29 {
				qword offsetParameter;
				helpers::Array<EnvelopePointDataV29> envelopePoints;
				byte offsetType;
			public:
				EnvelopeDataV29( );
				EnvelopeDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				EnvelopeDataV29( const EnvelopeDataV29& p_other );
				EnvelopeDataV29& operator=( const EnvelopeDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct RangeDataV29 {
				float max;
				float minFloat;
				byte minByte;
			public:
				RangeDataV29( );
				RangeDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				RangeDataV29( const RangeDataV29& p_other );
				RangeDataV29& operator=( const RangeDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct RandomParamDataV29 {
				RangeDataV29 time;
				RangeDataV29 value;
			public:
				RandomParamDataV29( );
				RandomParamDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				RandomParamDataV29( const RandomParamDataV29& p_other );
				RandomParamDataV29& operator=( const RandomParamDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct DynamicParamDataV29 {
				helpers::Ptr<EnvelopeDataV29> envelopeData;
				helpers::Ptr<RandomParamDataV29> randomParamData;
				float value;
				byte type;
			public:
				DynamicParamDataV29( );
				DynamicParamDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				DynamicParamDataV29( const DynamicParamDataV29& p_other );
				DynamicParamDataV29& operator=( const DynamicParamDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct AttenuationDataV29 {
				float doppler;
				DynamicParamDataV29 lowPass;
				DynamicParamDataV29 highPass;
				DynamicParamDataV29 pan3D;
				DynamicParamDataV29 reverb;
				DynamicParamDataV29 spread3D;
				DynamicParamDataV29 volumeA;
				DynamicParamDataV29 volumeB;
				DynamicParamDataV29 lfe;
			public:
				AttenuationDataV29( );
				AttenuationDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				AttenuationDataV29( const AttenuationDataV29& p_other );
				AttenuationDataV29& operator=( const AttenuationDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct CategoryDynamicDataV29 {
				qword name;
				float volume;
				float nonFocusGain;
				float lowPass;
				float highPass;
				float reverbDirect;
				float reverbRoom;
				dword flags;
				dword minAudible;
				dword maxAudibleLQ;
				dword maxAudibleHG;
			public:
				CategoryDynamicDataV29( );
				CategoryDynamicDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				CategoryDynamicDataV29( const CategoryDynamicDataV29& p_other );
				CategoryDynamicDataV29& operator=( const CategoryDynamicDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct CategoryDataV29 {
				qword name;
				qword volumeGroupName;
				qword outputBussName;
				helpers::Ptr<AttenuationDataV29> attenuation;
				helpers::Ptr<CategoryDynamicDataV29> dynamicData;
				float focusReserve;
				float muteFadeTime;
				dword flags;
				dword maxAudible;
				byte maxAudibleBehavior;
				byte priority;
			public:
				CategoryDataV29( );
				CategoryDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				CategoryDataV29( const CategoryDataV29& p_other );
				CategoryDataV29& operator=( const CategoryDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MaterialDataV29 {
				qword name;
				dword flags;
				float absorptionLF;
				float absorptionMF;
				float absorptionHF;
				float occlusion;
			public:
				MaterialDataV29( );
				MaterialDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MaterialDataV29( const MaterialDataV29& p_other );
				MaterialDataV29& operator=( const MaterialDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MusicConditionDataV29 {
				qword name;
				dword flags;
				helpers::Array<byte> byteCode;
			public:
				MusicConditionDataV29( );
				MusicConditionDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MusicConditionDataV29( const MusicConditionDataV29& p_other );
				MusicConditionDataV29& operator=( const MusicConditionDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct FileNameDataV29 {
				qword condition;
				qword language;
				float volume;
				float weight;
				helpers::FileName fileName;
				byte audioType;
				byte noteBase;
				byte noteMin;
				byte noteMax;
			public:
				FileNameDataV29( );
				FileNameDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				FileNameDataV29( const FileNameDataV29& p_other );
				FileNameDataV29& operator=( const FileNameDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MusicPlaylistDataV29 {
				qword category;
				qword name;
				qword primaryPlaylistId;
				qword secondaryPlaylistId;
				helpers::Array<FileNameDataV29> fileNames;
				float fadeInTime;
				float fadeOutTime;
				dword flags;
				RangeDataV29 initialSilence;
				RangeDataV29 intervalSilence;
				RangeDataV29 maxPlayLength;
				DynamicParamDataV29 volume;
				byte fileIterateMode;
			public:
				MusicPlaylistDataV29( );
				MusicPlaylistDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MusicPlaylistDataV29( const MusicPlaylistDataV29& p_other );
				MusicPlaylistDataV29& operator=( const MusicPlaylistDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PropertyDataV29 {
				qword name;
				qword tokenValue;
				float floatValue;
			public:
				PropertyDataV29( );
				PropertyDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PropertyDataV29( const PropertyDataV29& p_other );
				PropertyDataV29& operator=( const PropertyDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ReverbDataV29 {
				qword name;
				dword flags;
				float room;
				float roomHF;
				float roomLF;
				float decayTime;
				float decayHFRatio;
				float reflections;
				float reflectionsDelay;
				float reverb;
				float reverbDelay;
				float referenceHF;
				float referenceLF;
				float diffusion;
				float density;
				float echoDelay;
				float echoDecayRatio;
				float echoWetMix;
				float echoDryMix;
			public:
				ReverbDataV29( );
				ReverbDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ReverbDataV29( const ReverbDataV29& p_other );
				ReverbDataV29& operator=( const ReverbDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ScriptRefDataV29 {
				qword name;
				helpers::FileName fileName;
			public:
				ScriptRefDataV29( );
				ScriptRefDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ScriptRefDataV29( const ScriptRefDataV29& p_other );
				ScriptRefDataV29& operator=( const ScriptRefDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct SnapshotDataV29 {
				qword name;
				float blendInTime;
				float blendOutTime;
				dword flags;
				helpers::Array<BussDynamicDataV29> busses;
				helpers::Array<CategoryDynamicDataV29> categories;
				byte priority;
			public:
				SnapshotDataV29( );
				SnapshotDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				SnapshotDataV29( const SnapshotDataV29& p_other );
				SnapshotDataV29& operator=( const SnapshotDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MusicExternalDataV29 {
				qword name;
				helpers::WString externalPlaylist;
			public:
				MusicExternalDataV29( );
				MusicExternalDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MusicExternalDataV29( const MusicExternalDataV29& p_other );
				MusicExternalDataV29& operator=( const MusicExternalDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct AudioSettingsDataV29 {
				qword defaultSnapshot;
				qword effectsBuss;
				float distanceScale;
				float dopplerScale;
				float echoLevel;
				float focusTransition;
				float memoryPool;
				float reverbLevel;
				dword minChannelsLQ;
				dword maxChannelsLQ;
				helpers::Array<BussDataV29> busses;
				helpers::Array<CategoryDataV29> categories;
				helpers::Array<MaterialDataV29> material;
				helpers::Array<MusicConditionDataV29> musicConditions;
				helpers::Array<MusicPlaylistDataV29> musicPlaylists;
				helpers::Array<PropertyDataV29> property;
				helpers::Array<ReverbDataV29> reverbs;
				helpers::Array<ScriptRefDataV29> scriptRef;
				helpers::Array<SnapshotDataV29> snapshots;
				helpers::FileName bankIndexFileName;
				helpers::FileName bankScriptFileName;
				helpers::FileName musicScriptFileName;
				helpers::Array<MusicExternalDataV29> musicExternal;
			public:
				AudioSettingsDataV29( );
				AudioSettingsDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				AudioSettingsDataV29( const AudioSettingsDataV29& p_other );
				AudioSettingsDataV29& operator=( const AudioSettingsDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct HandlerDataV29 {
				qword name;
				dword flags;
				helpers::Array<byte> byteCode;
			public:
				HandlerDataV29( );
				HandlerDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				HandlerDataV29( const HandlerDataV29& p_other );
				HandlerDataV29& operator=( const HandlerDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MetaSoundDataV29 {
				qword category;
				qword endCue;
				qword name;
				qword offsetBone;
				qword playlistId;
				helpers::Array<DspDataV29> dsp;
				helpers::Ptr<AttenuationDataV29> attenuation;
				helpers::Array<FileNameDataV29> fileNames;
				float channelFadeIn;
				float channelFadeOut;
				float endCueOffset;
				float fadeInTime;
				float fadeOutTime;
				float3 positionOffset;
				dword channelMax;
				dword flags;
				dword loopCount;
				DynamicParamDataV29 depth;
				DynamicParamDataV29 pan;
				DynamicParamDataV29 pitch;
				DynamicParamDataV29 pitchMS;
				DynamicParamDataV29 volume;
				DynamicParamDataV29 volumeMS;
				RangeDataV29 initialDelay;
				RangeDataV29 playLength;
				RangeDataV29 positionOffsetAngle;
				RangeDataV29 positionRange;
				RangeDataV29 repeatCount;
				RangeDataV29 repeatTime;
				RangeDataV29 replayDelay;
				RangeDataV29 startTimeOffset;
				byte channelMode;
				byte channelPriority;
				byte fileIterateMode;
				byte loopMode;
				byte musicPriority;
				byte playbackMode;
				byte positionMode;
				byte repeatTimeFrom;
			public:
				MetaSoundDataV29( );
				MetaSoundDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MetaSoundDataV29( const MetaSoundDataV29& p_other );
				MetaSoundDataV29& operator=( const MetaSoundDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct TriggerMarkerDataV29 {
				qword cue;
				qword end;
				float time;
				byte type;
			public:
				TriggerMarkerDataV29( );
				TriggerMarkerDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				TriggerMarkerDataV29( const TriggerMarkerDataV29& p_other );
				TriggerMarkerDataV29& operator=( const TriggerMarkerDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct TriggerKeyDataV29 {
				qword name;
				helpers::Array<TriggerMarkerDataV29> triggerMarkers;
			public:
				TriggerKeyDataV29( );
				TriggerKeyDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				TriggerKeyDataV29( const TriggerKeyDataV29& p_other );
				TriggerKeyDataV29& operator=( const TriggerKeyDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ScriptFileDataV29 {
				qword musicCue;
				qword reverbOverride;
				qword snapshot;
				helpers::Ptr<AudioSettingsDataV29> audioSettings;
				helpers::Array<HandlerDataV29> handlers;
				helpers::Array<MetaSoundDataV29> metaSounds;
				helpers::Array<ScriptRefDataV29> scriptRefs;
				helpers::Array<TriggerKeyDataV29> triggerKeys;
				helpers::Array<PropertyDataV29> property;
				dword flags;
				dword soundPoolCount;
				float fadeInTime;
				float soundPoolDelay;
				float volume;
				byte musicCuePriority;
				byte musicMutePriority;
				byte soundPoolMode;
			public:
				ScriptFileDataV29( );
				ScriptFileDataV29( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ScriptFileDataV29( const ScriptFileDataV29& p_other );
				ScriptFileDataV29& operator=( const ScriptFileDataV29& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef ScriptFileDataV29 ScriptFileData;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::AMSP, fcc::AMSP> { typedef chunks::ScriptFileData Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_AMSP_SCRIPTFILEDATA_H_INCLUDED
