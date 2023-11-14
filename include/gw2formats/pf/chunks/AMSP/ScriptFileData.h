// File: gw2formats/pf/chunks/AMSP/ScriptFileData.h

/*  Copyright (C) 2014-2023 Khralkatorrix <https://github.com/kytulendu>
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

			GW2FORMATS_API struct DspDataV30 {
				dword type;
				dword flags;
				helpers::Array<float> properties;
			public:
				DspDataV30( );
				DspDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				DspDataV30( const DspDataV30& p_other );
				DspDataV30& operator=( const DspDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct BussDynamicDataV30 {
				qword name;
				dword flags;
				float volume;
				helpers::Array<DspDataV30> dsp;
			public:
				BussDynamicDataV30( );
				BussDynamicDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				BussDynamicDataV30( const BussDynamicDataV30& p_other );
				BussDynamicDataV30& operator=( const BussDynamicDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct BussDataV30 {
				qword name;
				qword output;
				dword flags;
				float normalizeFadeTime;
				float normalizeThreshold;
				float normalizeMaxAmp;
				float compressorThreshold;
				float compressorAttack;
				float compressorRelease;
				float compressorGainMakeup;
				helpers::Ptr<BussDynamicDataV30> dynamicData;
			public:
				BussDataV30( );
				BussDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				BussDataV30( const BussDataV30& p_other );
				BussDataV30& operator=( const BussDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct EnvelopePointDataV30 {
				float offset;
				float value;
			public:
				EnvelopePointDataV30( );
				EnvelopePointDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				EnvelopePointDataV30( const EnvelopePointDataV30& p_other );
				EnvelopePointDataV30& operator=( const EnvelopePointDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct EnvelopeDataV30 {
				float inputOffset;
				qword inputOffsetProperty;
				qword inputParameter;
				float inputScale;
				qword inputScaleProperty;
				byte inputType;
				float outputOffset;
				qword outputOffsetProperty;
				float outputScale;
				qword outputScaleProperty;
				helpers::Array<EnvelopePointDataV30> envelopePoint;
			public:
				EnvelopeDataV30( );
				EnvelopeDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				EnvelopeDataV30( const EnvelopeDataV30& p_other );
				EnvelopeDataV30& operator=( const EnvelopeDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct RangeDataV30 {
				float max;
				float minFloat;
				byte minByte;
			public:
				RangeDataV30( );
				RangeDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				RangeDataV30( const RangeDataV30& p_other );
				RangeDataV30& operator=( const RangeDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct RandomParamDataV30 {
				RangeDataV30 time;
				RangeDataV30 value;
			public:
				RandomParamDataV30( );
				RandomParamDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				RandomParamDataV30( const RandomParamDataV30& p_other );
				RandomParamDataV30& operator=( const RandomParamDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct DynamicParamDataV30 {
				helpers::Ptr<EnvelopeDataV30> envelopeData;
				helpers::Ptr<RandomParamDataV30> randomParamData;
				float value;
				byte type;
			public:
				DynamicParamDataV30( );
				DynamicParamDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				DynamicParamDataV30( const DynamicParamDataV30& p_other );
				DynamicParamDataV30& operator=( const DynamicParamDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct AttenuationDataV30 {
				float doppler;
				DynamicParamDataV30 lowPass;
				DynamicParamDataV30 highPass;
				DynamicParamDataV30 pan3D;
				DynamicParamDataV30 reverb;
				DynamicParamDataV30 spread3D;
				DynamicParamDataV30 volumeA;
				DynamicParamDataV30 volumeB;
				DynamicParamDataV30 lfe;
			public:
				AttenuationDataV30( );
				AttenuationDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				AttenuationDataV30( const AttenuationDataV30& p_other );
				AttenuationDataV30& operator=( const AttenuationDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct CategoryDynamicDataV30 {
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
				CategoryDynamicDataV30( );
				CategoryDynamicDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				CategoryDynamicDataV30( const CategoryDynamicDataV30& p_other );
				CategoryDynamicDataV30& operator=( const CategoryDynamicDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct CategoryDataV30 {
				qword name;
				qword volumeGroupName;
				qword outputBussName;
				helpers::Ptr<AttenuationDataV30> attenuation;
				helpers::Ptr<CategoryDynamicDataV30> dynamicData;
				float focusReserve;
				float muteFadeTime;
				dword flags;
				dword maxAudible;
				byte maxAudibleBehavior;
				byte priority;
			public:
				CategoryDataV30( );
				CategoryDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				CategoryDataV30( const CategoryDataV30& p_other );
				CategoryDataV30& operator=( const CategoryDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MaterialDataV30 {
				qword name;
				dword flags;
				float absorptionLF;
				float absorptionMF;
				float absorptionHF;
				float occlusion;
			public:
				MaterialDataV30( );
				MaterialDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MaterialDataV30( const MaterialDataV30& p_other );
				MaterialDataV30& operator=( const MaterialDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MusicConditionDataV30 {
				qword name;
				dword flags;
				helpers::Array<byte> byteCode;
			public:
				MusicConditionDataV30( );
				MusicConditionDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MusicConditionDataV30( const MusicConditionDataV30& p_other );
				MusicConditionDataV30& operator=( const MusicConditionDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct FileNameDataV30 {
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
				FileNameDataV30( );
				FileNameDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				FileNameDataV30( const FileNameDataV30& p_other );
				FileNameDataV30& operator=( const FileNameDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MusicPlaylistDataV30 {
				qword category;
				qword name;
				qword primaryPlaylistId;
				qword secondaryPlaylistId;
				helpers::Array<FileNameDataV30> fileNames;
				float fadeInTime;
				float fadeOutTime;
				dword flags;
				RangeDataV30 initialSilence;
				RangeDataV30 intervalSilence;
				RangeDataV30 maxPlayLength;
				DynamicParamDataV30 volume;
				byte fileIterateMode;
			public:
				MusicPlaylistDataV30( );
				MusicPlaylistDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MusicPlaylistDataV30( const MusicPlaylistDataV30& p_other );
				MusicPlaylistDataV30& operator=( const MusicPlaylistDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct PropertyDataV30 {
				qword name;
				qword tokenValue;
				float floatValue;
			public:
				PropertyDataV30( );
				PropertyDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				PropertyDataV30( const PropertyDataV30& p_other );
				PropertyDataV30& operator=( const PropertyDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ReverbDataV30 {
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
				ReverbDataV30( );
				ReverbDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ReverbDataV30( const ReverbDataV30& p_other );
				ReverbDataV30& operator=( const ReverbDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ScriptRefDataV30 {
				qword name;
				helpers::FileName fileName;
			public:
				ScriptRefDataV30( );
				ScriptRefDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ScriptRefDataV30( const ScriptRefDataV30& p_other );
				ScriptRefDataV30& operator=( const ScriptRefDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct SnapshotDataV30 {
				qword name;
				float blendInTime;
				float blendOutTime;
				dword flags;
				helpers::Array<BussDynamicDataV30> busses;
				helpers::Array<CategoryDynamicDataV30> categories;
				byte priority;
			public:
				SnapshotDataV30( );
				SnapshotDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				SnapshotDataV30( const SnapshotDataV30& p_other );
				SnapshotDataV30& operator=( const SnapshotDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MusicExternalDataV30 {
				qword name;
				helpers::WString externalPlaylist;
			public:
				MusicExternalDataV30( );
				MusicExternalDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MusicExternalDataV30( const MusicExternalDataV30& p_other );
				MusicExternalDataV30& operator=( const MusicExternalDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct AudioSettingsDataV30 {
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
				helpers::Array<BussDataV30> busses;
				helpers::Array<CategoryDataV30> categories;
				helpers::Array<MaterialDataV30> material;
				helpers::Array<MusicConditionDataV30> musicConditions;
				helpers::Array<MusicPlaylistDataV30> musicPlaylists;
				helpers::Array<PropertyDataV30> property;
				helpers::Array<ReverbDataV30> reverbs;
				helpers::Array<ScriptRefDataV30> scriptRef;
				helpers::Array<SnapshotDataV30> snapshots;
				helpers::FileName bankIndexFileName;
				helpers::FileName bankScriptFileName;
				helpers::FileName musicScriptFileName;
				helpers::Array<MusicExternalDataV30> musicExternal;
			public:
				AudioSettingsDataV30( );
				AudioSettingsDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				AudioSettingsDataV30( const AudioSettingsDataV30& p_other );
				AudioSettingsDataV30& operator=( const AudioSettingsDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct HandlerDataV30 {
				qword name;
				dword flags;
				helpers::Array<byte> byteCode;
			public:
				HandlerDataV30( );
				HandlerDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				HandlerDataV30( const HandlerDataV30& p_other );
				HandlerDataV30& operator=( const HandlerDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct MetaSoundDataV30 {
				qword category;
				qword endCue;
				qword name;
				qword offsetBone;
				qword playlistId;
				helpers::Array<DspDataV30> dsp;
				helpers::Ptr<AttenuationDataV30> attenuation;
				helpers::Array<FileNameDataV30> fileNames;
				float channelFadeIn;
				float channelFadeOut;
				float endCueOffset;
				float fadeInTime;
				float fadeOutTime;
				float3 positionOffset;
				dword channelMax;
				dword flags;
				dword loopCount;
				DynamicParamDataV30 depth;
				DynamicParamDataV30 pan;
				DynamicParamDataV30 pitch;
				DynamicParamDataV30 pitchMS;
				DynamicParamDataV30 volume;
				DynamicParamDataV30 volumeMS;
				RangeDataV30 initialDelay;
				RangeDataV30 playLength;
				RangeDataV30 positionOffsetAngle;
				RangeDataV30 positionRange;
				RangeDataV30 repeatCount;
				RangeDataV30 repeatTime;
				RangeDataV30 replayDelay;
				RangeDataV30 startTimeOffset;
				byte channelMode;
				byte channelPriority;
				byte fileIterateMode;
				byte loopMode;
				byte musicPriority;
				byte playbackMode;
				byte positionMode;
				byte repeatTimeFrom;
			public:
				MetaSoundDataV30( );
				MetaSoundDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				MetaSoundDataV30( const MetaSoundDataV30& p_other );
				MetaSoundDataV30& operator=( const MetaSoundDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct TriggerMarkerDataV30 {
				qword cue;
				qword end;
				float time;
				byte type;
			public:
				TriggerMarkerDataV30( );
				TriggerMarkerDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				TriggerMarkerDataV30( const TriggerMarkerDataV30& p_other );
				TriggerMarkerDataV30& operator=( const TriggerMarkerDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct TriggerKeyDataV30 {
				qword name;
				helpers::Array<TriggerMarkerDataV30> triggerMarkers;
			public:
				TriggerKeyDataV30( );
				TriggerKeyDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				TriggerKeyDataV30( const TriggerKeyDataV30& p_other );
				TriggerKeyDataV30& operator=( const TriggerKeyDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			GW2FORMATS_API struct ScriptFileDataV30 {
				qword musicCue;
				qword reverbOverride;
				qword snapshot;
				helpers::Ptr<AudioSettingsDataV30> audioSettings;
				helpers::Array<HandlerDataV30> handlers;
				helpers::Array<MetaSoundDataV30> metaSounds;
				helpers::Array<ScriptRefDataV30> scriptRefs;
				helpers::Array<TriggerKeyDataV30> triggerKeys;
				helpers::Array<PropertyDataV30> property;
				dword flags;
				dword soundPoolCount;
				float fadeInTime;
				float soundPoolDelay;
				float volume;
				byte musicCuePriority;
				byte musicMutePriority;
				byte soundPoolMode;
			public:
				ScriptFileDataV30( );
				ScriptFileDataV30( const byte* p_data, size_t p_size, const byte** po_pointer = nullptr );
				ScriptFileDataV30( const ScriptFileDataV30& p_other );
				ScriptFileDataV30& operator=( const ScriptFileDataV30& p_other );
				const byte* assign( const byte* p_data, size_t p_size );
			};

			typedef ScriptFileDataV30 ScriptFileData;

		}; // namespace chunks

		template<> struct ChunkFactory<fcc::AMSP, fcc::AMSP> { typedef chunks::ScriptFileData Type; };

	}; // namespace pf
}; // namespace gw2f

#endif // GW2FORMATS_PF_CHUNKS_AMSP_SCRIPTFILEDATA_H_INCLUDED
