// File: pf/chunks/AMSP/ScriptFileData.cpp

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

#include <gw2formats/pf/chunks/AMSP/ScriptFileData.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      DspDataV30
			//============================================================================/

			DspDataV30::DspDataV30( )
				: type( 0 )
				, flags( 0 ) {
			}

			DspDataV30::DspDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			DspDataV30::DspDataV30( const DspDataV30& p_other )
				: type( p_other.type )
				, flags( p_other.flags )
				, properties( p_other.properties ) {
			}

			DspDataV30& DspDataV30::operator=( const DspDataV30& p_other ) {
				type = p_other.type;
				flags = p_other.flags;
				properties = p_other.properties;
				return *this;
			}

			const byte* DspDataV30::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, type );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, properties );
				return p_data;
			}

			//============================================================================/
			//      BussDynamicDataV30
			//============================================================================/

			BussDynamicDataV30::BussDynamicDataV30( )
				: name( 0 )
				, flags( 0 )
				, volume( 0 ) {
			}

			BussDynamicDataV30::BussDynamicDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			BussDynamicDataV30::BussDynamicDataV30( const BussDynamicDataV30& p_other )
				: name( p_other.name )
				, flags( p_other.flags )
				, volume( p_other.volume )
				, dsp( p_other.dsp ) {
			}

			BussDynamicDataV30& BussDynamicDataV30::operator=( const BussDynamicDataV30& p_other ) {
				name = p_other.name;
				flags = p_other.flags;
				volume = p_other.volume;
				dsp = p_other.dsp;
				return *this;
			}

			const byte* BussDynamicDataV30::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, volume );
				p_data = helpers::read( p_data, p_size, dsp );
				return p_data;
			}

			//============================================================================/
			//      BussDataV30
			//============================================================================/

			BussDataV30::BussDataV30( )
				: name( 0 )
				, output( 0 )
				, flags( 0 )
				, normalizeFadeTime( 0 )
				, normalizeThreshold( 0 )
				, normalizeMaxAmp( 0 )
				, compressorThreshold( 0 )
				, compressorAttack( 0 )
				, compressorRelease( 0 )
				, compressorGainMakeup( 0 ) {
			}

			BussDataV30::BussDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			BussDataV30::BussDataV30( const BussDataV30& p_other )
				: name( p_other.name )
				, output( p_other.output )
				, flags( p_other.flags )
				, normalizeFadeTime( p_other.normalizeFadeTime )
				, normalizeThreshold( p_other.normalizeThreshold )
				, normalizeMaxAmp( p_other.normalizeMaxAmp )
				, compressorThreshold( p_other.compressorThreshold )
				, compressorAttack( p_other.compressorAttack )
				, compressorRelease( p_other.compressorRelease )
				, compressorGainMakeup( p_other.compressorGainMakeup )
				, dynamicData( p_other.dynamicData ) {
			}

			BussDataV30& BussDataV30::operator=( const BussDataV30& p_other ) {
				name = p_other.name;
				output = p_other.output;
				flags = p_other.flags;
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

			const byte* BussDataV30::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, output );
				p_data = helpers::read(p_data, p_size, flags);
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
			//      EnvelopePointDataV30
			//============================================================================/

			EnvelopePointDataV30::EnvelopePointDataV30( )
				: offset( 0 )
				, value( 0 ) {
			}

			EnvelopePointDataV30::EnvelopePointDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			EnvelopePointDataV30::EnvelopePointDataV30( const EnvelopePointDataV30& p_other )
				: offset( p_other.offset )
				, value( p_other.value ) {
			}

			EnvelopePointDataV30& EnvelopePointDataV30::operator=( const EnvelopePointDataV30& p_other ) {
				offset = p_other.offset;
				value = p_other.value;
				return *this;
			}

			const byte* EnvelopePointDataV30::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, offset );
				p_data = helpers::read( p_data, p_size, value );
				return p_data;
			}

			//============================================================================/
			//      EnvelopeDataV30
			//============================================================================/

			EnvelopeDataV30::EnvelopeDataV30( )
				: inputOffset(0)
				, inputOffsetProperty(0)
				, inputParameter(0)
				, inputScale(0)
				, inputScaleProperty(0)
				, inputType(0)
				, outputOffset(0)
				, outputOffsetProperty(0)
				, outputScale(0)
				, outputScaleProperty(0) {
			}

			EnvelopeDataV30::EnvelopeDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			EnvelopeDataV30::EnvelopeDataV30( const EnvelopeDataV30& p_other )
				: inputOffset(p_other.inputOffset)
				, inputOffsetProperty(p_other.inputOffsetProperty)
				, inputParameter(p_other.inputParameter)
				, inputScale(p_other.inputScale)
				, inputScaleProperty(p_other.inputScaleProperty)
				, inputType(p_other.inputType)
				, outputOffset(p_other.outputOffset)
				, outputOffsetProperty(p_other.outputOffsetProperty)
				, outputScale(p_other.outputScale)
				, outputScaleProperty(p_other.outputScaleProperty)
				, envelopePoint(p_other.envelopePoint) {
			}

			EnvelopeDataV30& EnvelopeDataV30::operator=( const EnvelopeDataV30& p_other ) {
				inputOffset = p_other.inputOffset;
				inputOffsetProperty = p_other.inputOffsetProperty;
				inputParameter = p_other.inputParameter;
				inputScale = p_other.inputScale;
				inputScaleProperty = p_other.inputScaleProperty;
				inputType = p_other.inputType;
				outputOffset = p_other.outputOffset;
				outputOffsetProperty = p_other.outputOffsetProperty;
				outputScale = p_other.outputScale;
				outputScaleProperty = p_other.outputScaleProperty;
				envelopePoint = p_other.envelopePoint;
				return *this;
			}

			const byte* EnvelopeDataV30::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read(p_data, p_size, inputOffset);
				p_data = helpers::read(p_data, p_size, inputOffsetProperty);
				p_data = helpers::read(p_data, p_size, inputParameter);
				p_data = helpers::read(p_data, p_size, inputScale);
				p_data = helpers::read(p_data, p_size, inputScaleProperty);
				p_data = helpers::read(p_data, p_size, inputType);
				p_data = helpers::read(p_data, p_size, outputOffset);
				p_data = helpers::read(p_data, p_size, outputOffsetProperty);
				p_data = helpers::read(p_data, p_size, outputScale);
				p_data = helpers::read(p_data, p_size, outputScaleProperty);
				p_data = helpers::read(p_data, p_size, envelopePoint);
				return p_data;
			}

			//============================================================================/
			//      RangeDataV30
			//============================================================================/

			RangeDataV30::RangeDataV30( )
				: max( 0 )
				, minFloat( 0 )
				, minByte( 0 ) {
			}

			RangeDataV30::RangeDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			RangeDataV30::RangeDataV30( const RangeDataV30& p_other )
				: max( p_other.max )
				, minFloat( p_other.minFloat )
				, minByte( p_other.minByte ) {
			}

			RangeDataV30& RangeDataV30::operator=( const RangeDataV30& p_other ) {
				max = p_other.max;
				minFloat = p_other.minFloat;
				minByte = p_other.minByte;
				return *this;
			}

			const byte* RangeDataV30::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, max );
				p_data = helpers::read( p_data, p_size, minFloat );
				p_data = helpers::read( p_data, p_size, minByte );
				return p_data;
			}

			//============================================================================/
			//      RandomParamDataV30
			//============================================================================/

			RandomParamDataV30::RandomParamDataV30( ) {
			}

			RandomParamDataV30::RandomParamDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			RandomParamDataV30::RandomParamDataV30( const RandomParamDataV30& p_other )
				: time( p_other.time )
				, value( p_other.value ) {
			}

			RandomParamDataV30& RandomParamDataV30::operator=( const RandomParamDataV30& p_other ) {
				time = p_other.time;
				value = p_other.value;
				return *this;
			}

			const byte* RandomParamDataV30::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, time );
				p_data = helpers::read( p_data, p_size, value );
				return p_data;
			}

			//============================================================================/
			//      DynamicParamDataV30
			//============================================================================/

			DynamicParamDataV30::DynamicParamDataV30( )
				: value( 0 )
				, type( 0 ) {
			}

			DynamicParamDataV30::DynamicParamDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			DynamicParamDataV30::DynamicParamDataV30( const DynamicParamDataV30& p_other )
				: envelopeData( p_other.envelopeData )
				, randomParamData( p_other.randomParamData )
				, value( p_other.value )
				, type( p_other.type ) {
			}

			DynamicParamDataV30& DynamicParamDataV30::operator=( const DynamicParamDataV30& p_other ) {
				envelopeData = p_other.envelopeData;
				randomParamData = p_other.randomParamData;
				value = p_other.value;
				type = p_other.type;
				return *this;
			}

			const byte* DynamicParamDataV30::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, envelopeData );
				p_data = helpers::read( p_data, p_size, randomParamData );
				p_data = helpers::read( p_data, p_size, value );
				p_data = helpers::read( p_data, p_size, type );
				return p_data;
			}

			//============================================================================/
			//      AttenuationDataV30
			//============================================================================/

			AttenuationDataV30::AttenuationDataV30( )
				: doppler( 0 ) {
			}

			AttenuationDataV30::AttenuationDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			AttenuationDataV30::AttenuationDataV30( const AttenuationDataV30& p_other )
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

			AttenuationDataV30& AttenuationDataV30::operator=( const AttenuationDataV30& p_other ) {
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

			const byte* AttenuationDataV30::assign( const byte* p_data, size_t p_size ) {
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
			//      CategoryDynamicDataV30
			//============================================================================/

			CategoryDynamicDataV30::CategoryDynamicDataV30( )
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

			CategoryDynamicDataV30::CategoryDynamicDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			CategoryDynamicDataV30::CategoryDynamicDataV30( const CategoryDynamicDataV30& p_other )
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

			CategoryDynamicDataV30& CategoryDynamicDataV30::operator=( const CategoryDynamicDataV30& p_other ) {
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

			const byte* CategoryDynamicDataV30::assign( const byte* p_data, size_t p_size ) {
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
			//      CategoryDataV30
			//============================================================================/

			CategoryDataV30::CategoryDataV30( )
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

			CategoryDataV30::CategoryDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			CategoryDataV30::CategoryDataV30( const CategoryDataV30& p_other )
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

			CategoryDataV30& CategoryDataV30::operator=( const CategoryDataV30& p_other ) {
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

			const byte* CategoryDataV30::assign( const byte* p_data, size_t p_size ) {
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
			//      MaterialDataV30
			//============================================================================/

			MaterialDataV30::MaterialDataV30( )
				: name( 0 )
				, flags( 0 )
				, absorptionLF( 0 )
				, absorptionMF( 0 )
				, absorptionHF( 0 )
				, occlusion( 0 ) {
			}

			MaterialDataV30::MaterialDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MaterialDataV30::MaterialDataV30( const MaterialDataV30& p_other )
				: name( p_other.name )
				, flags( p_other.flags )
				, absorptionLF( p_other.absorptionLF )
				, absorptionMF( p_other.absorptionMF )
				, absorptionHF( p_other.absorptionHF )
				, occlusion( p_other.occlusion ) {
			}

			MaterialDataV30& MaterialDataV30::operator=( const MaterialDataV30& p_other ) {
				name = p_other.name;
				flags = p_other.flags;
				absorptionLF = p_other.absorptionLF;
				absorptionMF = p_other.absorptionMF;
				absorptionHF = p_other.absorptionHF;
				occlusion = p_other.occlusion;
				return *this;
			}

			const byte* MaterialDataV30::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, absorptionLF );
				p_data = helpers::read( p_data, p_size, absorptionMF );
				p_data = helpers::read( p_data, p_size, absorptionHF );
				p_data = helpers::read( p_data, p_size, occlusion );
				return p_data;
			}

			//============================================================================/
			//      MusicConditionDataV30
			//============================================================================/

			MusicConditionDataV30::MusicConditionDataV30( )
				: name( 0 )
				, flags( 0 ) {
			}

			MusicConditionDataV30::MusicConditionDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MusicConditionDataV30::MusicConditionDataV30( const MusicConditionDataV30& p_other )
				: name( p_other.name )
				, flags( p_other.flags )
				, byteCode( p_other.byteCode ) {
			}

			MusicConditionDataV30& MusicConditionDataV30::operator=( const MusicConditionDataV30& p_other ) {
				name = p_other.name;
				flags = p_other.flags;
				byteCode = p_other.byteCode;
				return *this;
			}

			const byte* MusicConditionDataV30::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, byteCode );
				return p_data;
			}

			//============================================================================/
			//      FileNameDataV30
			//============================================================================/

			FileNameDataV30::FileNameDataV30( )
				: condition( 0 )
				, language( 0 )
				, volume( 0 )
				, weight( 0 )
				, audioType( 0 )
				, noteBase( 0 )
				, noteMin( 0 )
				, noteMax( 0 ) {
			}

			FileNameDataV30::FileNameDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			FileNameDataV30::FileNameDataV30( const FileNameDataV30& p_other )
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

			FileNameDataV30& FileNameDataV30::operator=( const FileNameDataV30& p_other ) {
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

			const byte* FileNameDataV30::assign( const byte* p_data, size_t p_size ) {
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
			//      MusicPlaylistDataV30
			//============================================================================/

			MusicPlaylistDataV30::MusicPlaylistDataV30( )
				: category( 0 )
				, name( 0 )
				, primaryPlaylistId( 0 )
				, secondaryPlaylistId( 0 )
				, fadeInTime( 0 )
				, fadeOutTime( 0 )
				, flags( 0 )
				, fileIterateMode( 0 ) {
			}

			MusicPlaylistDataV30::MusicPlaylistDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MusicPlaylistDataV30::MusicPlaylistDataV30( const MusicPlaylistDataV30& p_other )
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

			MusicPlaylistDataV30& MusicPlaylistDataV30::operator=( const MusicPlaylistDataV30& p_other ) {
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

			const byte* MusicPlaylistDataV30::assign( const byte* p_data, size_t p_size ) {
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
			//      PropertyDataV30
			//============================================================================/

			PropertyDataV30::PropertyDataV30( )
				: name( 0 )
				, tokenValue( 0 )
				, floatValue( 0 ) {
			}

			PropertyDataV30::PropertyDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PropertyDataV30::PropertyDataV30( const PropertyDataV30& p_other )
				: name( p_other.name )
				, tokenValue( p_other.tokenValue )
				, floatValue( p_other.floatValue ) {
			}

			PropertyDataV30& PropertyDataV30::operator=( const PropertyDataV30& p_other ) {
				name = p_other.name;
				tokenValue = p_other.tokenValue;
				floatValue = p_other.floatValue;
				return *this;
			}

			const byte* PropertyDataV30::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, tokenValue );
				p_data = helpers::read( p_data, p_size, floatValue );
				return p_data;
			}

			//============================================================================/
			//      ReverbDataV30
			//============================================================================/

			ReverbDataV30::ReverbDataV30( )
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

			ReverbDataV30::ReverbDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ReverbDataV30::ReverbDataV30( const ReverbDataV30& p_other )
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

			ReverbDataV30& ReverbDataV30::operator=( const ReverbDataV30& p_other ) {
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

			const byte* ReverbDataV30::assign( const byte* p_data, size_t p_size ) {
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
			//      ScriptRefDataV30
			//============================================================================/

			ScriptRefDataV30::ScriptRefDataV30( )
				: name( 0 ) {
			}

			ScriptRefDataV30::ScriptRefDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ScriptRefDataV30::ScriptRefDataV30( const ScriptRefDataV30& p_other )
				: name( p_other.name )
				, fileName( p_other.fileName ) {
			}

			ScriptRefDataV30& ScriptRefDataV30::operator=( const ScriptRefDataV30& p_other ) {
				name = p_other.name;
				fileName = p_other.fileName;
				return *this;
			}

			const byte* ScriptRefDataV30::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, fileName );
				return p_data;
			}

			//============================================================================/
			//      SnapshotDataV30
			//============================================================================/

			SnapshotDataV30::SnapshotDataV30( )
				: name( 0 )
				, blendInTime( 0 )
				, blendOutTime( 0 )
				, flags( 0 )
				, priority( 0 ) {
			}

			SnapshotDataV30::SnapshotDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			SnapshotDataV30::SnapshotDataV30( const SnapshotDataV30& p_other )
				: name( p_other.name )
				, blendInTime( p_other.blendInTime )
				, blendOutTime( p_other.blendOutTime )
				, flags( p_other.flags )
				, busses( p_other.busses )
				, categories( p_other.categories )
				, priority( p_other.priority ) {
			}

			SnapshotDataV30& SnapshotDataV30::operator=( const SnapshotDataV30& p_other ) {
				name = p_other.name;
				blendInTime = p_other.blendInTime;
				blendOutTime = p_other.blendOutTime;
				flags = p_other.flags;
				busses = p_other.busses;
				categories = p_other.categories;
				priority = p_other.priority;
				return *this;
			}

			const byte* SnapshotDataV30::assign( const byte* p_data, size_t p_size ) {
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
			//      MusicExternalDataV30
			//============================================================================/

			MusicExternalDataV30::MusicExternalDataV30( ) {
			}

			MusicExternalDataV30::MusicExternalDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MusicExternalDataV30::MusicExternalDataV30( const MusicExternalDataV30& p_other )
				: name( p_other.name )
				, externalPlaylist( p_other.externalPlaylist ) {
			}

			MusicExternalDataV30& MusicExternalDataV30::operator=( const MusicExternalDataV30& p_other ) {
				name = p_other.name;
				externalPlaylist = p_other.externalPlaylist;
				return *this;
			}

			const byte* MusicExternalDataV30::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, externalPlaylist );
				return p_data;
			}

			//============================================================================/
			//      AudioSettingsDataV30
			//============================================================================/

			AudioSettingsDataV30::AudioSettingsDataV30( )
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

			AudioSettingsDataV30::AudioSettingsDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			AudioSettingsDataV30::AudioSettingsDataV30( const AudioSettingsDataV30& p_other )
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

			AudioSettingsDataV30& AudioSettingsDataV30::operator=( const AudioSettingsDataV30& p_other ) {
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

			const byte* AudioSettingsDataV30::assign( const byte* p_data, size_t p_size ) {
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
			//      HandlerDataV30
			//============================================================================/

			HandlerDataV30::HandlerDataV30( )
				: name( 0 )
				, flags( 0 ) {
			}

			HandlerDataV30::HandlerDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			HandlerDataV30::HandlerDataV30( const HandlerDataV30& p_other )
				: name( p_other.name )
				, flags( p_other.flags )
				, byteCode( p_other.byteCode ) {
			}

			HandlerDataV30& HandlerDataV30::operator=( const HandlerDataV30& p_other ) {
				name = p_other.name;
				flags = p_other.flags;
				byteCode = p_other.byteCode;
				return *this;
			}

			const byte* HandlerDataV30::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, byteCode );
				return p_data;
			}

			//============================================================================/
			//      MetaSoundDataV30
			//============================================================================/

			MetaSoundDataV30::MetaSoundDataV30( )
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

			MetaSoundDataV30::MetaSoundDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			MetaSoundDataV30::MetaSoundDataV30( const MetaSoundDataV30& p_other )
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

			MetaSoundDataV30& MetaSoundDataV30::operator=( const MetaSoundDataV30& p_other ) {
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

			const byte* MetaSoundDataV30::assign( const byte* p_data, size_t p_size ) {
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
			//      TriggerMarkerDataV30
			//============================================================================/

			TriggerMarkerDataV30::TriggerMarkerDataV30( )
				: cue( 0 )
				, end( 0 )
				, time( 0 )
				, type( 0 ) {
			}

			TriggerMarkerDataV30::TriggerMarkerDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			TriggerMarkerDataV30::TriggerMarkerDataV30( const TriggerMarkerDataV30& p_other )
				: cue( p_other.cue )
				, end( p_other.end )
				, time( p_other.time )
				, type( p_other.type ) {
			}

			TriggerMarkerDataV30& TriggerMarkerDataV30::operator=( const TriggerMarkerDataV30& p_other ) {
				cue = p_other.cue;
				end = p_other.end;
				time = p_other.time;
				type = p_other.type;
				return *this;
			}

			const byte* TriggerMarkerDataV30::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, cue );
				p_data = helpers::read( p_data, p_size, end );
				p_data = helpers::read( p_data, p_size, time );
				p_data = helpers::read( p_data, p_size, type );
				return p_data;
			}

			//============================================================================/
			//     TriggerKeyDataV30
			//============================================================================/

			TriggerKeyDataV30::TriggerKeyDataV30( )
				: name( 0 ) {
			}

			TriggerKeyDataV30::TriggerKeyDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			TriggerKeyDataV30::TriggerKeyDataV30( const TriggerKeyDataV30& p_other )
				: name( p_other.name )
				, triggerMarkers( p_other.triggerMarkers ) {
			}

			TriggerKeyDataV30& TriggerKeyDataV30::operator=( const TriggerKeyDataV30& p_other ) {
				name = p_other.name;
				triggerMarkers = p_other.triggerMarkers;
				return *this;
			}

			const byte* TriggerKeyDataV30::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, triggerMarkers );
				return p_data;
			}

			//============================================================================/
			//      ScriptFileDataV30
			//============================================================================/

			ScriptFileDataV30::ScriptFileDataV30( )
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

			ScriptFileDataV30::ScriptFileDataV30( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ScriptFileDataV30::ScriptFileDataV30( const ScriptFileDataV30& p_other )
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

			ScriptFileDataV30& ScriptFileDataV30::operator=( const ScriptFileDataV30& p_other ) {
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

			const byte* ScriptFileDataV30::assign( const byte* p_data, size_t p_size ) {
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
