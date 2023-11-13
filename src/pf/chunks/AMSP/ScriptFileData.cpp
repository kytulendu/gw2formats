// File: pf/chunks/AMSP/ScriptFileData.cpp

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

#include <gw2formats/pf/chunks/AMSP/ScriptFileData.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      DspDataV29
			//============================================================================/

			DspDataV29::DspDataV29( )
				: type( 0 )
				, flags( 0 ) {
			}

			DspDataV29::DspDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			DspDataV29::DspDataV29( const DspDataV29& p_other )
				: type( p_other.type )
				, flags( p_other.flags )
				, properties( p_other.properties ) {
			}

			DspDataV29& DspDataV29::operator=( const DspDataV29& p_other ) {
				type = p_other.type;
				flags = p_other.flags;
				properties = p_other.properties;
				return *this;
			}

			const byte* DspDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, type );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, properties );
				return p_data;
			}

			//============================================================================/
			//      BussDynamicDataV29
			//============================================================================/

			BussDynamicDataV29::BussDynamicDataV29( )
				: name( 0 )
				, flags( 0 )
				, volume( 0 ) {
			}

			BussDynamicDataV29::BussDynamicDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			BussDynamicDataV29::BussDynamicDataV29( const BussDynamicDataV29& p_other )
				: name( p_other.name )
				, flags( p_other.flags )
				, volume( p_other.volume )
				, dsp( p_other.dsp ) {
			}

			BussDynamicDataV29& BussDynamicDataV29::operator=( const BussDynamicDataV29& p_other ) {
				name = p_other.name;
				flags = p_other.flags;
				volume = p_other.volume;
				dsp = p_other.dsp;
				return *this;
			}

			const byte* BussDynamicDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, volume );
				p_data = helpers::read( p_data, p_size, dsp );
				return p_data;
			}

			//============================================================================/
			//      BussDataV29
			//============================================================================/

			BussDataV29::BussDataV29( )
				: name( 0 )
				, flags( 0 )
				, output( 0 )
				, normalizeFadeTime( 0 )
				, normalizeThreshold( 0 )
				, normalizeMaxAmp( 0 )
				, compressorThreshold( 0 )
				, compressorAttack( 0 )
				, compressorRelease( 0 )
				, compressorGainMakeup( 0 ) {
			}

			BussDataV29::BussDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			BussDataV29::BussDataV29( const BussDataV29& p_other )
				: name( p_other.name )
				, flags( p_other.flags )
				, output( p_other.output )
				, normalizeFadeTime( p_other.normalizeFadeTime )
				, normalizeThreshold( p_other.normalizeThreshold )
				, normalizeMaxAmp( p_other.normalizeMaxAmp )
				, compressorThreshold( p_other.compressorThreshold )
				, compressorAttack( p_other.compressorAttack )
				, compressorRelease( p_other.compressorRelease )
				, compressorGainMakeup( p_other.compressorGainMakeup )
				, dynamicData( p_other.dynamicData ) {
			}

			BussDataV29& BussDataV29::operator=( const BussDataV29& p_other ) {
				name = p_other.name;
				flags = p_other.flags;
				output = p_other.output;
				normalizeFadeTime = p_other.normalizeFadeTime;
				normalizeThreshold = p_other.normalizeThreshold;
				normalizeMaxAmp = p_other.normalizeMaxAmp;
				compressorThreshold = p_other.compressorThreshold;
				compressorAttack = p_other.compressorAttack;
				compressorRelease = p_other.compressorRelease;
				compressorGainMakeup = p_other.compressorGainMakeup;
				dynamicData = p_other.dynamicData;
				return *this;
			}

			const byte* BussDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, output );
				p_data = helpers::read( p_data, p_size, normalizeFadeTime );
				p_data = helpers::read( p_data, p_size, normalizeThreshold );
				p_data = helpers::read( p_data, p_size, normalizeMaxAmp );
				p_data = helpers::read( p_data, p_size, compressorThreshold );
				p_data = helpers::read( p_data, p_size, compressorAttack );
				p_data = helpers::read( p_data, p_size, compressorRelease );
				p_data = helpers::read( p_data, p_size, compressorGainMakeup );
				p_data = helpers::read( p_data, p_size, dynamicData );
				return p_data;
			}

			//============================================================================/
			//      EnvelopePointDataV29
			//============================================================================/

			EnvelopePointDataV29::EnvelopePointDataV29( )
				: offset( 0 )
				, value( 0 ) {
			}

			EnvelopePointDataV29::EnvelopePointDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			EnvelopePointDataV29::EnvelopePointDataV29( const EnvelopePointDataV29& p_other )
				: offset( p_other.offset )
				, value( p_other.value ) {
			}

			EnvelopePointDataV29& EnvelopePointDataV29::operator=( const EnvelopePointDataV29& p_other ) {
				offset = p_other.offset;
				value = p_other.value;
				return *this;
			}

			const byte* EnvelopePointDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, offset );
				p_data = helpers::read( p_data, p_size, value );
				return p_data;
			}

			//============================================================================/
			//      EnvelopeDataV29
			//============================================================================/

			EnvelopeDataV29::EnvelopeDataV29( )
				: offsetParameter( 0 )
				, offsetType( 0 ) {
			}

			EnvelopeDataV29::EnvelopeDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			EnvelopeDataV29::EnvelopeDataV29( const EnvelopeDataV29& p_other )
				: offsetParameter( p_other.offsetParameter )
				, envelopePoints( p_other.envelopePoints )
				, offsetType( p_other.offsetType ) {
			}

			EnvelopeDataV29& EnvelopeDataV29::operator=( const EnvelopeDataV29& p_other ) {
				offsetParameter = p_other.offsetParameter;
				envelopePoints = p_other.envelopePoints;
				offsetType = p_other.offsetType;
				return *this;
			}

			const byte* EnvelopeDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, offsetParameter );
				p_data = helpers::read( p_data, p_size, envelopePoints );
				p_data = helpers::read( p_data, p_size, offsetType );
				return p_data;
			}

			//============================================================================/
			//      RangeDataV29
			//============================================================================/

			RangeDataV29::RangeDataV29( )
				: max( 0 )
				, minFloat( 0 )
				, minByte( 0 ) {
			}

			RangeDataV29::RangeDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			RangeDataV29::RangeDataV29( const RangeDataV29& p_other )
				: max( p_other.max )
				, minFloat( p_other.minFloat )
				, minByte( p_other.minByte ) {
			}

			RangeDataV29& RangeDataV29::operator=( const RangeDataV29& p_other ) {
				max = p_other.max;
				minFloat = p_other.minFloat;
				minByte = p_other.minByte;
				return *this;
			}

			const byte* RangeDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, max );
				p_data = helpers::read( p_data, p_size, minFloat );
				p_data = helpers::read( p_data, p_size, minByte );
				return p_data;
			}

			//============================================================================/
			//      RandomParamDataV29
			//============================================================================/

			RandomParamDataV29::RandomParamDataV29( ) {
			}

			RandomParamDataV29::RandomParamDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			RandomParamDataV29::RandomParamDataV29( const RandomParamDataV29& p_other )
				: time( p_other.time )
				, value( p_other.value ) {
			}

			RandomParamDataV29& RandomParamDataV29::operator=( const RandomParamDataV29& p_other ) {
				time = p_other.time;
				value = p_other.value;
				return *this;
			}

			const byte* RandomParamDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, time );
				p_data = helpers::read( p_data, p_size, value );
				return p_data;
			}

			//============================================================================/
			//      DynamicParamDataV29
			//============================================================================/

			DynamicParamDataV29::DynamicParamDataV29( )
				: value( 0 )
				, type( 0 ) {
			}

			DynamicParamDataV29::DynamicParamDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			DynamicParamDataV29::DynamicParamDataV29( const DynamicParamDataV29& p_other )
				: envelopeData( p_other.envelopeData )
				, randomParamData( p_other.randomParamData )
				, value( p_other.value )
				, type( p_other.type ) {
			}

			DynamicParamDataV29& DynamicParamDataV29::operator=( const DynamicParamDataV29& p_other ) {
				envelopeData = p_other.envelopeData;
				randomParamData = p_other.randomParamData;
				value = p_other.value;
				type = p_other.type;
				return *this;
			}

			const byte* DynamicParamDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, envelopeData );
				p_data = helpers::read( p_data, p_size, randomParamData );
				p_data = helpers::read( p_data, p_size, value );
				p_data = helpers::read( p_data, p_size, type );
				return p_data;
			}

			//============================================================================/
			//      AttenuationDataV29
			//============================================================================/

			AttenuationDataV29::AttenuationDataV29( )
				: doppler( 0 ) {
			}

			AttenuationDataV29::AttenuationDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			AttenuationDataV29::AttenuationDataV29( const AttenuationDataV29& p_other )
				: doppler( p_other.doppler )
				, lowPass( p_other.lowPass )
				, highPass( p_other.highPass )
				, pan3D( p_other.pan3D )
				, reverb( p_other.reverb )
				, spread3D( p_other.spread3D )
				, volumeA( p_other.volumeA )
				, volumeB( p_other.volumeB )
				, lfe( p_other.lfe ) {
			}

			AttenuationDataV29& AttenuationDataV29::operator=( const AttenuationDataV29& p_other ) {
				doppler = p_other.doppler;
				lowPass = p_other.lowPass;
				highPass = p_other.highPass;
				pan3D = p_other.pan3D;
				reverb = p_other.reverb;
				spread3D = p_other.spread3D;
				volumeA = p_other.volumeA;
				volumeB = p_other.volumeB;
				lfe = p_other.lfe;
				return *this;
			}

			const byte* AttenuationDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, doppler );
				p_data = helpers::read( p_data, p_size, lowPass );
				p_data = helpers::read( p_data, p_size, highPass );
				p_data = helpers::read( p_data, p_size, pan3D );
				p_data = helpers::read( p_data, p_size, reverb );
				p_data = helpers::read( p_data, p_size, spread3D );
				p_data = helpers::read( p_data, p_size, volumeA );
				p_data = helpers::read( p_data, p_size, volumeB );
				p_data = helpers::read( p_data, p_size, lfe );
				return p_data;
			}

			//============================================================================/
			//      CategoryDynamicDataV29
			//============================================================================/

			CategoryDynamicDataV29::CategoryDynamicDataV29( )
				: name( 0 )
				, volume( 0 )
				, nonFocusGain( 0 )
				, lowPass( 0 )
				, highPass( 0 )
				, reverbDirect( 0 )
				, reverbRoom( 0 )
				, flags( 0 )
				, minAudible( 0 )
				, maxAudibleLQ( 0 )
				, maxAudibleHG( 0 ) {
			}

			CategoryDynamicDataV29::CategoryDynamicDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			CategoryDynamicDataV29::CategoryDynamicDataV29( const CategoryDynamicDataV29& p_other )
				: name( p_other.name )
				, volume( p_other.volume )
				, nonFocusGain( p_other.nonFocusGain )
				, lowPass( p_other.lowPass )
				, highPass( p_other.highPass )
				, reverbDirect( p_other.reverbDirect )
				, reverbRoom( p_other.reverbRoom )
				, flags( p_other.flags )
				, minAudible( p_other.minAudible )
				, maxAudibleLQ( p_other.maxAudibleLQ )
				, maxAudibleHG( p_other.maxAudibleHG ) {
			}

			CategoryDynamicDataV29& CategoryDynamicDataV29::operator=( const CategoryDynamicDataV29& p_other ) {
				name = p_other.name;
				volume = p_other.volume;
				nonFocusGain = p_other.nonFocusGain;
				lowPass = p_other.lowPass;
				highPass = p_other.highPass;
				reverbDirect = p_other.reverbDirect;
				reverbRoom = p_other.reverbRoom;
				flags = p_other.flags;
				minAudible = p_other.minAudible;
				maxAudibleLQ = p_other.maxAudibleLQ;
				maxAudibleHG = p_other.maxAudibleHG;
				return *this;
			}

			const byte* CategoryDynamicDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, volume );
				p_data = helpers::read( p_data, p_size, nonFocusGain );
				p_data = helpers::read( p_data, p_size, lowPass );
				p_data = helpers::read( p_data, p_size, highPass );
				p_data = helpers::read( p_data, p_size, reverbDirect );
				p_data = helpers::read( p_data, p_size, reverbRoom );
				p_data = helpers::read( p_data, p_size, flags );
				return p_data;
			}

			//============================================================================/
			//      CategoryDataV29
			//============================================================================/

			CategoryDataV29::CategoryDataV29( )
				: name( 0 )
				, volumeGroupName( 0 )
				, outputBussName( 0 )
				, focusReserve( 0 )
				, muteFadeTime( 0 )
				, flags( 0 )
				, maxAudible( 0 )
				, maxAudibleBehavior( 0 )
				, priority( 0 ) {
			}

			CategoryDataV29::CategoryDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			CategoryDataV29::CategoryDataV29( const CategoryDataV29& p_other )
				: name( p_other.name )
				, volumeGroupName( p_other.volumeGroupName )
				, outputBussName( p_other.outputBussName )
				, attenuation( p_other.attenuation )
				, dynamicData( p_other.dynamicData )
				, focusReserve( p_other.focusReserve )
				, muteFadeTime( p_other.muteFadeTime )
				, flags( p_other.flags )
				, maxAudible( p_other.maxAudible )
				, maxAudibleBehavior( p_other.maxAudibleBehavior )
				, priority( p_other.priority ) {
			}

			CategoryDataV29& CategoryDataV29::operator=( const CategoryDataV29& p_other ) {
				name = p_other.name;
				volumeGroupName = p_other.volumeGroupName;
				outputBussName = p_other.outputBussName;
				attenuation = p_other.attenuation;
				dynamicData = p_other.dynamicData;
				focusReserve = p_other.focusReserve;
				muteFadeTime = p_other.muteFadeTime;
				flags = p_other.flags;
				maxAudible = p_other.maxAudible;
				maxAudibleBehavior = p_other.maxAudibleBehavior;
				priority = p_other.priority;
				return *this;
			}

			const byte* CategoryDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, volumeGroupName );
				p_data = helpers::read( p_data, p_size, outputBussName );
				p_data = helpers::read( p_data, p_size, attenuation );
				p_data = helpers::read( p_data, p_size, dynamicData );
				p_data = helpers::read( p_data, p_size, focusReserve );
				p_data = helpers::read( p_data, p_size, muteFadeTime );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, maxAudible );
				p_data = helpers::read( p_data, p_size, maxAudibleBehavior );
				p_data = helpers::read( p_data, p_size, priority );
				return p_data;
			}

			//============================================================================/
			//      MaterialDataV29
			//============================================================================/

			MaterialDataV29::MaterialDataV29( )
				: name( 0 )
				, flags( 0 )
				, absorptionLF( 0 )
				, absorptionMF( 0 )
				, absorptionHF( 0 )
				, occlusion( 0 ) {
			}

			MaterialDataV29::MaterialDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MaterialDataV29::MaterialDataV29( const MaterialDataV29& p_other )
				: name( p_other.name )
				, flags( p_other.flags )
				, absorptionLF( p_other.absorptionLF )
				, absorptionMF( p_other.absorptionMF )
				, absorptionHF( p_other.absorptionHF )
				, occlusion( p_other.occlusion ) {
			}

			MaterialDataV29& MaterialDataV29::operator=( const MaterialDataV29& p_other ) {
				name = p_other.name;
				flags = p_other.flags;
				absorptionLF = p_other.absorptionLF;
				absorptionMF = p_other.absorptionMF;
				absorptionHF = p_other.absorptionHF;
				occlusion = p_other.occlusion;
				return *this;
			}

			const byte* MaterialDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, absorptionLF );
				p_data = helpers::read( p_data, p_size, absorptionMF );
				p_data = helpers::read( p_data, p_size, absorptionHF );
				p_data = helpers::read( p_data, p_size, occlusion );
				return p_data;
			}

			//============================================================================/
			//      MusicConditionDataV29
			//============================================================================/

			MusicConditionDataV29::MusicConditionDataV29( )
				: name( 0 )
				, flags( 0 ) {
			}

			MusicConditionDataV29::MusicConditionDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MusicConditionDataV29::MusicConditionDataV29( const MusicConditionDataV29& p_other )
				: name( p_other.name )
				, flags( p_other.flags )
				, byteCode( p_other.byteCode ) {
			}

			MusicConditionDataV29& MusicConditionDataV29::operator=( const MusicConditionDataV29& p_other ) {
				name = p_other.name;
				flags = p_other.flags;
				byteCode = p_other.byteCode;
				return *this;
			}

			const byte* MusicConditionDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, byteCode );
				return p_data;
			}

			//============================================================================/
			//      FileNameDataV29
			//============================================================================/

			FileNameDataV29::FileNameDataV29( )
				: condition( 0 )
				, language( 0 )
				, volume( 0 )
				, weight( 0 )
				, audioType( 0 )
				, noteBase( 0 )
				, noteMin( 0 )
				, noteMax( 0 ) {
			}

			FileNameDataV29::FileNameDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			FileNameDataV29::FileNameDataV29( const FileNameDataV29& p_other )
				: condition( p_other.condition )
				, language( p_other.language )
				, volume( p_other.volume )
				, weight( p_other.weight )
				, fileName( p_other.fileName )
				, audioType( p_other.audioType )
				, noteBase( p_other.noteBase )
				, noteMin( p_other.noteMin )
				, noteMax( p_other.noteMax ) {
			}

			FileNameDataV29& FileNameDataV29::operator=( const FileNameDataV29& p_other ) {
				condition = p_other.condition;
				language = p_other.language;
				volume = p_other.volume;
				weight = p_other.weight;
				fileName = p_other.fileName;
				audioType = p_other.audioType;
				noteBase = p_other.noteBase;
				noteMin = p_other.noteMin;
				noteMax = p_other.noteMax;
				return *this;
			}

			const byte* FileNameDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, condition );
				p_data = helpers::read( p_data, p_size, language );
				p_data = helpers::read( p_data, p_size, volume );
				p_data = helpers::read( p_data, p_size, weight );
				p_data = helpers::read( p_data, p_size, fileName );
				p_data = helpers::read( p_data, p_size, audioType );
				p_data = helpers::read( p_data, p_size, noteBase );
				p_data = helpers::read( p_data, p_size, noteMin );
				p_data = helpers::read( p_data, p_size, noteMax );
				return p_data;
			}

			//============================================================================/
			//      MusicPlaylistDataV29
			//============================================================================/

			MusicPlaylistDataV29::MusicPlaylistDataV29( )
				: category( 0 )
				, name( 0 )
				, primaryPlaylistId( 0 )
				, secondaryPlaylistId( 0 )
				, fadeInTime( 0 )
				, fadeOutTime( 0 )
				, flags( 0 )
				, fileIterateMode( 0 ) {
			}

			MusicPlaylistDataV29::MusicPlaylistDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MusicPlaylistDataV29::MusicPlaylistDataV29( const MusicPlaylistDataV29& p_other )
				: category( p_other.category )
				, name( p_other.name )
				, primaryPlaylistId( p_other.primaryPlaylistId )
				, secondaryPlaylistId( p_other.secondaryPlaylistId )
				, fileNames( p_other.fileNames )
				, fadeInTime( p_other.fadeInTime )
				, fadeOutTime( p_other.fadeOutTime )
				, flags( p_other.flags )
				, initialSilence( p_other.initialSilence )
				, intervalSilence( p_other.intervalSilence )
				, maxPlayLength( p_other.maxPlayLength )
				, volume( p_other.volume )
				, fileIterateMode( p_other.fileIterateMode ) {
			}

			MusicPlaylistDataV29& MusicPlaylistDataV29::operator=( const MusicPlaylistDataV29& p_other ) {
				category = p_other.category;
				name = p_other.name;
				primaryPlaylistId = p_other.primaryPlaylistId;
				secondaryPlaylistId = p_other.secondaryPlaylistId;
				fileNames = p_other.fileNames;
				fadeInTime = p_other.fadeInTime;
				fadeOutTime = p_other.fadeOutTime;
				flags = p_other.flags;
				initialSilence = p_other.initialSilence;
				intervalSilence = p_other.intervalSilence;
				maxPlayLength = p_other.maxPlayLength;
				volume = p_other.volume;
				fileIterateMode = p_other.fileIterateMode;
				return *this;
			}

			const byte* MusicPlaylistDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, category );
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, primaryPlaylistId );
				p_data = helpers::read( p_data, p_size, secondaryPlaylistId );
				p_data = helpers::read( p_data, p_size, fileNames );
				p_data = helpers::read( p_data, p_size, fadeInTime );
				p_data = helpers::read( p_data, p_size, fadeOutTime );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, initialSilence );
				p_data = helpers::read( p_data, p_size, intervalSilence );
				p_data = helpers::read( p_data, p_size, maxPlayLength );
				p_data = helpers::read( p_data, p_size, volume );
				p_data = helpers::read( p_data, p_size, fileIterateMode );
				return p_data;
			}

			//============================================================================/
			//      PropertyDataV29
			//============================================================================/

			PropertyDataV29::PropertyDataV29( )
				: name( 0 )
				, tokenValue( 0 )
				, floatValue( 0 ) {
			}

			PropertyDataV29::PropertyDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PropertyDataV29::PropertyDataV29( const PropertyDataV29& p_other )
				: name( p_other.name )
				, tokenValue( p_other.tokenValue )
				, floatValue( p_other.floatValue ) {
			}

			PropertyDataV29& PropertyDataV29::operator=( const PropertyDataV29& p_other ) {
				name = p_other.name;
				tokenValue = p_other.tokenValue;
				floatValue = p_other.floatValue;
				return *this;
			}

			const byte* PropertyDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, tokenValue );
				p_data = helpers::read( p_data, p_size, floatValue );
				return p_data;
			}

			//============================================================================/
			//      ReverbDataV29
			//============================================================================/

			ReverbDataV29::ReverbDataV29( )
				: name( 0 )
				, flags( 0 )
				, room( 0 )
				, roomHF( 0 )
				, roomLF( 0 )
				, decayTime( 0 )
				, decayHFRatio( 0 )
				, reflections( 0 )
				, reflectionsDelay( 0 )
				, reverb( 0 )
				, reverbDelay( 0 )
				, referenceHF( 0 )
				, referenceLF( 0 )
				, diffusion( 0 )
				, density( 0 )
				, echoDelay( 0 )
				, echoDecayRatio( 0 )
				, echoWetMix( 0 )
				, echoDryMix( 0 ) {
			}

			ReverbDataV29::ReverbDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ReverbDataV29::ReverbDataV29( const ReverbDataV29& p_other )
				: name( p_other.name )
				, flags( p_other.flags )
				, room( p_other.room )
				, roomHF( p_other.roomHF )
				, roomLF( p_other.roomLF )
				, decayTime( p_other.decayTime )
				, decayHFRatio( p_other.decayHFRatio )
				, reflections( p_other.reflections )
				, reflectionsDelay( p_other.reflectionsDelay )
				, reverb( p_other.reverb )
				, reverbDelay( p_other.reverbDelay )
				, referenceHF( p_other.referenceHF )
				, referenceLF( p_other.referenceLF )
				, diffusion( p_other.diffusion )
				, density( p_other.density )
				, echoDelay( p_other.echoDelay )
				, echoDecayRatio( p_other.echoDecayRatio )
				, echoWetMix( p_other.echoWetMix )
				, echoDryMix( p_other.echoDryMix ) {
			}

			ReverbDataV29& ReverbDataV29::operator=( const ReverbDataV29& p_other ) {
				name = p_other.name;
				flags = p_other.flags;
				room = p_other.room;
				roomHF = p_other.roomHF;
				roomLF = p_other.roomLF;
				decayTime = p_other.decayTime;
				decayHFRatio = p_other.decayHFRatio;
				reflections = p_other.reflections;
				reflectionsDelay = p_other.reflectionsDelay;
				reverb = p_other.reverb;
				reverbDelay = p_other.reverbDelay;
				referenceHF = p_other.referenceHF;
				referenceLF = p_other.referenceLF;
				diffusion = p_other.diffusion;
				density = p_other.density;
				echoDelay = p_other.echoDelay;
				echoDecayRatio = p_other.echoDecayRatio;
				echoWetMix = p_other.echoWetMix;
				echoDryMix = p_other.echoDryMix;
				return *this;
			}

			const byte* ReverbDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, room );
				p_data = helpers::read( p_data, p_size, roomHF );
				p_data = helpers::read( p_data, p_size, roomLF );
				p_data = helpers::read( p_data, p_size, decayTime );
				p_data = helpers::read( p_data, p_size, decayHFRatio );
				p_data = helpers::read( p_data, p_size, reflections );
				p_data = helpers::read( p_data, p_size, reflectionsDelay );
				p_data = helpers::read( p_data, p_size, reverb );
				p_data = helpers::read( p_data, p_size, reverbDelay );
				p_data = helpers::read( p_data, p_size, referenceHF );
				p_data = helpers::read( p_data, p_size, referenceLF );
				p_data = helpers::read( p_data, p_size, diffusion );
				p_data = helpers::read( p_data, p_size, density );
				p_data = helpers::read( p_data, p_size, echoDelay );
				p_data = helpers::read( p_data, p_size, echoDecayRatio );
				p_data = helpers::read( p_data, p_size, echoWetMix );
				p_data = helpers::read( p_data, p_size, echoDryMix );
				return p_data;
			}

			//============================================================================/
			//      ScriptRefDataV29
			//============================================================================/

			ScriptRefDataV29::ScriptRefDataV29( )
				: name( 0 ) {
			}

			ScriptRefDataV29::ScriptRefDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ScriptRefDataV29::ScriptRefDataV29( const ScriptRefDataV29& p_other )
				: name( p_other.name )
				, fileName( p_other.fileName ) {
			}

			ScriptRefDataV29& ScriptRefDataV29::operator=( const ScriptRefDataV29& p_other ) {
				name = p_other.name;
				fileName = p_other.fileName;
				return *this;
			}

			const byte* ScriptRefDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, fileName );
				return p_data;
			}

			//============================================================================/
			//      SnapshotDataV29
			//============================================================================/

			SnapshotDataV29::SnapshotDataV29( )
				: name( 0 )
				, blendInTime( 0 )
				, blendOutTime( 0 )
				, flags( 0 )
				, priority( 0 ) {
			}

			SnapshotDataV29::SnapshotDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			SnapshotDataV29::SnapshotDataV29( const SnapshotDataV29& p_other )
				: name( p_other.name )
				, blendInTime( p_other.blendInTime )
				, blendOutTime( p_other.blendOutTime )
				, flags( p_other.flags )
				, busses( p_other.busses )
				, categories( p_other.categories )
				, priority( p_other.priority ) {
			}

			SnapshotDataV29& SnapshotDataV29::operator=( const SnapshotDataV29& p_other ) {
				name = p_other.name;
				blendInTime = p_other.blendInTime;
				blendOutTime = p_other.blendOutTime;
				flags = p_other.flags;
				busses = p_other.busses;
				categories = p_other.categories;
				priority = p_other.priority;
				return *this;
			}

			const byte* SnapshotDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, blendInTime );
				p_data = helpers::read( p_data, p_size, blendOutTime );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, busses );
				p_data = helpers::read( p_data, p_size, categories );
				p_data = helpers::read( p_data, p_size, priority );
				return p_data;
			}

			//============================================================================/
			//      MusicExternalDataV29
			//============================================================================/

			MusicExternalDataV29::MusicExternalDataV29( ) {
			}

			MusicExternalDataV29::MusicExternalDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MusicExternalDataV29::MusicExternalDataV29( const MusicExternalDataV29& p_other )
				: name( p_other.name )
				, externalPlaylist( p_other.externalPlaylist ) {
			}

			MusicExternalDataV29& MusicExternalDataV29::operator=( const MusicExternalDataV29& p_other ) {
				name = p_other.name;
				externalPlaylist = p_other.externalPlaylist;
				return *this;
			}

			const byte* MusicExternalDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, externalPlaylist );
				return p_data;
			}

			//============================================================================/
			//      AudioSettingsDataV29
			//============================================================================/

			AudioSettingsDataV29::AudioSettingsDataV29( )
				: defaultSnapshot( 0 )
				, effectsBuss( 0 )
				, distanceScale( 0 )
				, dopplerScale( 0 )
				, echoLevel( 0 )
				, focusTransition( 0 )
				, memoryPool( 0 )
				, reverbLevel( 0 )
				, minChannelsLQ( 0 )
				, maxChannelsLQ( 0 ) {
			}

			AudioSettingsDataV29::AudioSettingsDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			AudioSettingsDataV29::AudioSettingsDataV29( const AudioSettingsDataV29& p_other )
				: defaultSnapshot( p_other.defaultSnapshot )
				, effectsBuss( p_other.effectsBuss )
				, distanceScale( p_other.distanceScale )
				, dopplerScale( p_other.dopplerScale )
				, echoLevel( p_other.echoLevel )
				, focusTransition( p_other.focusTransition )
				, memoryPool( p_other.memoryPool )
				, reverbLevel( p_other.reverbLevel )
				, minChannelsLQ( p_other.minChannelsLQ )
				, maxChannelsLQ( p_other.maxChannelsLQ )
				, busses( p_other.busses )
				, categories( p_other.categories )
				, material( p_other.material )
				, musicConditions( p_other.musicConditions )
				, musicPlaylists( p_other.musicPlaylists )
				, property( p_other.property )
				, reverbs( p_other.reverbs )
				, scriptRef( p_other.scriptRef )
				, snapshots( p_other.snapshots )
				, bankIndexFileName( p_other.bankIndexFileName )
				, bankScriptFileName( p_other.bankScriptFileName )
				, musicScriptFileName( p_other.musicScriptFileName )
				, musicExternal( p_other.musicExternal ) {
			}

			AudioSettingsDataV29& AudioSettingsDataV29::operator=( const AudioSettingsDataV29& p_other ) {
				defaultSnapshot = p_other.defaultSnapshot;
				effectsBuss = p_other.effectsBuss;
				distanceScale = p_other.distanceScale;
				dopplerScale = p_other.dopplerScale;
				echoLevel = p_other.echoLevel;
				focusTransition = p_other.focusTransition;
				memoryPool = p_other.memoryPool;
				reverbLevel = p_other.reverbLevel;
				minChannelsLQ = p_other.minChannelsLQ;
				maxChannelsLQ = p_other.maxChannelsLQ;
				busses = p_other.busses;
				categories = p_other.categories;
				material = p_other.material;
				musicConditions = p_other.musicConditions;
				musicPlaylists = p_other.musicPlaylists;
				property = p_other.property;
				reverbs = p_other.reverbs;
				scriptRef = p_other.scriptRef;
				snapshots = p_other.snapshots;
				bankIndexFileName = p_other.bankIndexFileName;
				bankScriptFileName = p_other.bankScriptFileName;
				musicScriptFileName = p_other.musicScriptFileName;
				musicExternal = p_other.musicExternal;
				return *this;
			}

			const byte* AudioSettingsDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, defaultSnapshot );
				p_data = helpers::read( p_data, p_size, effectsBuss );
				p_data = helpers::read( p_data, p_size, distanceScale );
				p_data = helpers::read( p_data, p_size, dopplerScale );
				p_data = helpers::read( p_data, p_size, echoLevel );
				p_data = helpers::read( p_data, p_size, focusTransition );
				p_data = helpers::read( p_data, p_size, memoryPool );
				p_data = helpers::read( p_data, p_size, reverbLevel );
				p_data = helpers::read( p_data, p_size, minChannelsLQ );
				p_data = helpers::read( p_data, p_size, maxChannelsLQ );
				p_data = helpers::read( p_data, p_size, busses );
				p_data = helpers::read( p_data, p_size, categories );
				p_data = helpers::read( p_data, p_size, material );
				p_data = helpers::read( p_data, p_size, musicConditions );
				p_data = helpers::read( p_data, p_size, musicPlaylists );
				p_data = helpers::read( p_data, p_size, property );
				p_data = helpers::read( p_data, p_size, reverbs );
				p_data = helpers::read( p_data, p_size, scriptRef );
				p_data = helpers::read( p_data, p_size, snapshots );
				p_data = helpers::read( p_data, p_size, bankIndexFileName );
				p_data = helpers::read( p_data, p_size, bankScriptFileName );
				p_data = helpers::read( p_data, p_size, musicScriptFileName );
				p_data = helpers::read( p_data, p_size, musicExternal );
				return p_data;
			}

			//============================================================================/
			//      HandlerDataV29
			//============================================================================/

			HandlerDataV29::HandlerDataV29( )
				: name( 0 )
				, flags( 0 ) {
			}

			HandlerDataV29::HandlerDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			HandlerDataV29::HandlerDataV29( const HandlerDataV29& p_other )
				: name( p_other.name )
				, flags( p_other.flags )
				, byteCode( p_other.byteCode ) {
			}

			HandlerDataV29& HandlerDataV29::operator=( const HandlerDataV29& p_other ) {
				name = p_other.name;
				flags = p_other.flags;
				byteCode = p_other.byteCode;
				return *this;
			}

			const byte* HandlerDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, byteCode );
				return p_data;
			}

			//============================================================================/
			//      MetaSoundDataV29
			//============================================================================/

			MetaSoundDataV29::MetaSoundDataV29( )
				: category( 0 )
				, endCue( 0 )
				, name( 0 )
				, offsetBone( 0 )
				, playlistId( 0 )
				, channelFadeIn( 0 )
				, channelFadeOut( 0 )
				, endCueOffset( 0 )
				, fadeInTime( 0 )
				, fadeOutTime( 0 )
				, channelMax( 0 )
				, flags( 0 )
				, loopCount( 0 )
				, channelMode( 0 )
				, channelPriority( 0 )
				, fileIterateMode( 0 )
				, loopMode( 0 )
				, musicPriority( 0 )
				, playbackMode( 0 )
				, positionMode( 0 )
				, repeatTimeFrom( 0 ) {
			}

			MetaSoundDataV29::MetaSoundDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MetaSoundDataV29::MetaSoundDataV29( const MetaSoundDataV29& p_other )
				: category( p_other.category )
				, endCue( p_other.endCue )
				, name( p_other.name )
				, offsetBone( p_other.offsetBone )
				, playlistId( p_other.playlistId )
				, dsp( p_other.dsp )
				, attenuation( p_other.attenuation )
				, fileNames( p_other.fileNames )
				, channelFadeIn( p_other.channelFadeIn )
				, channelFadeOut( p_other.channelFadeOut )
				, endCueOffset( p_other.endCueOffset )
				, fadeInTime( p_other.fadeInTime )
				, fadeOutTime( p_other.fadeOutTime )
				, positionOffset( p_other.positionOffset )
				, channelMax( p_other.channelMax )
				, flags( p_other.flags )
				, loopCount( p_other.loopCount )
				, depth( p_other.depth )
				, pan( p_other.pan )
				, pitch( p_other.pitch )
				, pitchMS( p_other.pitchMS )
				, volume( p_other.volume )
				, volumeMS( p_other.volumeMS )
				, initialDelay( p_other.initialDelay )
				, playLength( p_other.playLength )
				, positionOffsetAngle( p_other.positionOffsetAngle )
				, positionRange( p_other.positionRange )
				, repeatCount( p_other.repeatCount )
				, repeatTime( p_other.repeatTime )
				, replayDelay( p_other.replayDelay )
				, startTimeOffset( p_other.startTimeOffset )
				, channelMode( p_other.channelMode )
				, channelPriority( p_other.channelPriority )
				, fileIterateMode( p_other.fileIterateMode )
				, loopMode( p_other.loopMode )
				, musicPriority( p_other.musicPriority )
				, playbackMode( p_other.playbackMode )
				, positionMode( p_other.positionMode )
				, repeatTimeFrom( p_other.repeatTimeFrom ) {
			}

			MetaSoundDataV29& MetaSoundDataV29::operator=( const MetaSoundDataV29& p_other ) {
				category = p_other.category;
				endCue = p_other.endCue;
				name = p_other.name;
				offsetBone = p_other.offsetBone;
				playlistId = p_other.playlistId;
				dsp = p_other.dsp;
				attenuation = p_other.attenuation;
				fileNames = p_other.fileNames;
				channelFadeIn = p_other.channelFadeIn;
				channelFadeOut = p_other.channelFadeOut;
				endCueOffset = p_other.endCueOffset;
				fadeInTime = p_other.fadeInTime;
				fadeOutTime = p_other.fadeOutTime;
				positionOffset = p_other.positionOffset;
				channelMax = p_other.channelMax;
				flags = p_other.flags;
				loopCount = p_other.loopCount;
				depth = p_other.depth;
				pan = p_other.pan;
				pitch = p_other.pitch;
				pitchMS = p_other.pitchMS;
				volume = p_other.volume;
				volumeMS = p_other.volumeMS;
				initialDelay = p_other.initialDelay;
				playLength = p_other.playLength;
				positionOffsetAngle = p_other.positionOffsetAngle;
				positionRange = p_other.positionRange;
				repeatCount = p_other.repeatCount;
				repeatTime = p_other.repeatTime;
				replayDelay = p_other.replayDelay;
				startTimeOffset = p_other.startTimeOffset;
				channelMode = p_other.channelMode;
				channelPriority = p_other.channelPriority;
				fileIterateMode = p_other.fileIterateMode;
				loopMode = p_other.loopMode;
				musicPriority = p_other.musicPriority;
				playbackMode = p_other.playbackMode;
				positionMode = p_other.positionMode;
				repeatTimeFrom = p_other.repeatTimeFrom;
				return *this;
			}

			const byte* MetaSoundDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, category );
				p_data = helpers::read( p_data, p_size, endCue );
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, offsetBone );
				p_data = helpers::read( p_data, p_size, playlistId );
				p_data = helpers::read( p_data, p_size, dsp );
				p_data = helpers::read( p_data, p_size, attenuation );
				p_data = helpers::read( p_data, p_size, fileNames );
				p_data = helpers::read( p_data, p_size, channelFadeIn );
				p_data = helpers::read( p_data, p_size, channelFadeOut );
				p_data = helpers::read( p_data, p_size, endCueOffset );
				p_data = helpers::read( p_data, p_size, fadeInTime );
				p_data = helpers::read( p_data, p_size, fadeOutTime );
				p_data = helpers::read( p_data, p_size, positionOffset );
				p_data = helpers::read( p_data, p_size, channelMax );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, loopCount );
				p_data = helpers::read( p_data, p_size, depth );
				p_data = helpers::read( p_data, p_size, pan );
				p_data = helpers::read( p_data, p_size, pitch );
				p_data = helpers::read( p_data, p_size, pitchMS );
				p_data = helpers::read( p_data, p_size, volume );
				p_data = helpers::read( p_data, p_size, volumeMS );
				p_data = helpers::read( p_data, p_size, initialDelay );
				p_data = helpers::read( p_data, p_size, playLength );
				p_data = helpers::read( p_data, p_size, positionOffsetAngle );
				p_data = helpers::read( p_data, p_size, positionRange );
				p_data = helpers::read( p_data, p_size, repeatCount );
				p_data = helpers::read( p_data, p_size, repeatTime );
				p_data = helpers::read( p_data, p_size, replayDelay );
				p_data = helpers::read( p_data, p_size, startTimeOffset );
				p_data = helpers::read( p_data, p_size, channelMode );
				p_data = helpers::read( p_data, p_size, channelPriority );
				p_data = helpers::read( p_data, p_size, fileIterateMode );
				p_data = helpers::read( p_data, p_size, loopMode );
				p_data = helpers::read( p_data, p_size, musicPriority );
				p_data = helpers::read( p_data, p_size, playbackMode );
				p_data = helpers::read( p_data, p_size, positionMode );
				p_data = helpers::read( p_data, p_size, repeatTimeFrom );
				return p_data;
			}

			//============================================================================/
			//      TriggerMarkerDataV29
			//============================================================================/

			TriggerMarkerDataV29::TriggerMarkerDataV29( )
				: cue( 0 )
				, end( 0 )
				, time( 0 )
				, type( 0 ) {
			}

			TriggerMarkerDataV29::TriggerMarkerDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			TriggerMarkerDataV29::TriggerMarkerDataV29( const TriggerMarkerDataV29& p_other )
				: cue( p_other.cue )
				, end( p_other.end )
				, time( p_other.time )
				, type( p_other.type ) {
			}

			TriggerMarkerDataV29& TriggerMarkerDataV29::operator=( const TriggerMarkerDataV29& p_other ) {
				cue = p_other.cue;
				end = p_other.end;
				time = p_other.time;
				type = p_other.type;
				return *this;
			}

			const byte* TriggerMarkerDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, cue );
				p_data = helpers::read( p_data, p_size, end );
				p_data = helpers::read( p_data, p_size, time );
				p_data = helpers::read( p_data, p_size, type );
				return p_data;
			}

			//============================================================================/
			//     TriggerKeyDataV29
			//============================================================================/

			TriggerKeyDataV29::TriggerKeyDataV29( )
				: name( 0 ) {
			}

			TriggerKeyDataV29::TriggerKeyDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			TriggerKeyDataV29::TriggerKeyDataV29( const TriggerKeyDataV29& p_other )
				: name( p_other.name )
				, triggerMarkers( p_other.triggerMarkers ) {
			}

			TriggerKeyDataV29& TriggerKeyDataV29::operator=( const TriggerKeyDataV29& p_other ) {
				name = p_other.name;
				triggerMarkers = p_other.triggerMarkers;
				return *this;
			}

			const byte* TriggerKeyDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, triggerMarkers );
				return p_data;
			}

			//============================================================================/
			//      ScriptFileDataV29
			//============================================================================/

			ScriptFileDataV29::ScriptFileDataV29( )
				: musicCue( 0 )
				, reverbOverride( 0 )
				, snapshot( 0 )
				, flags( 0 )
				, soundPoolCount( 0 )
				, fadeInTime( 0 )
				, soundPoolDelay( 0 )
				, volume( 0 )
				, musicCuePriority( 0 )
				, musicMutePriority( 0 )
				, soundPoolMode( 0 ) {
			}

			ScriptFileDataV29::ScriptFileDataV29( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ScriptFileDataV29::ScriptFileDataV29( const ScriptFileDataV29& p_other )
				: musicCue( p_other.musicCue )
				, reverbOverride( p_other.reverbOverride )
				, snapshot( p_other.snapshot )
				, audioSettings( p_other.audioSettings )
				, handlers( p_other.handlers )
				, metaSounds( p_other.metaSounds )
				, scriptRefs( p_other.scriptRefs )
				, triggerKeys( p_other.triggerKeys )
				, property( p_other.property )
				, flags( p_other.flags )
				, soundPoolCount( p_other.soundPoolCount )
				, fadeInTime( p_other.fadeInTime )
				, soundPoolDelay( p_other.soundPoolDelay )
				, volume( p_other.volume )
				, musicCuePriority( p_other.musicCuePriority )
				, musicMutePriority( p_other.musicMutePriority )
				, soundPoolMode( p_other.soundPoolMode ) {
			}

			ScriptFileDataV29& ScriptFileDataV29::operator=( const ScriptFileDataV29& p_other ) {
				musicCue = p_other.musicCue;
				reverbOverride = p_other.reverbOverride;
				snapshot = p_other.snapshot;
				audioSettings = p_other.audioSettings;
				handlers = p_other.handlers;
				metaSounds = p_other.metaSounds;
				scriptRefs = p_other.scriptRefs;
				triggerKeys = p_other.triggerKeys;
				property = p_other.property;
				flags = p_other.flags;
				soundPoolCount = p_other.soundPoolCount;
				fadeInTime = p_other.fadeInTime;
				soundPoolDelay = p_other.soundPoolDelay;
				volume = p_other.volume;
				musicCuePriority = p_other.musicCuePriority;
				musicMutePriority = p_other.musicMutePriority;
				soundPoolMode = p_other.soundPoolMode;
				return *this;
			}

			const byte* ScriptFileDataV29::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, musicCue );
				p_data = helpers::read( p_data, p_size, reverbOverride );
				p_data = helpers::read( p_data, p_size, snapshot );
				p_data = helpers::read( p_data, p_size, audioSettings );
				p_data = helpers::read( p_data, p_size, handlers );
				p_data = helpers::read( p_data, p_size, metaSounds );
				p_data = helpers::read( p_data, p_size, scriptRefs );
				p_data = helpers::read( p_data, p_size, triggerKeys );
				p_data = helpers::read( p_data, p_size, property );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, soundPoolCount );
				p_data = helpers::read( p_data, p_size, fadeInTime );
				p_data = helpers::read( p_data, p_size, soundPoolDelay );
				p_data = helpers::read( p_data, p_size, volume );
				p_data = helpers::read( p_data, p_size, musicCuePriority );
				p_data = helpers::read( p_data, p_size, musicMutePriority );
				p_data = helpers::read( p_data, p_size, soundPoolMode );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
