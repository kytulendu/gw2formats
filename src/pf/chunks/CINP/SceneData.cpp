// File: pf/chunks/CINP/SceneData.cpp

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

#include <gw2formats/pf/chunks/CINP/SceneData.h>

namespace gw2f {
	namespace pf {
		namespace chunks {

			//============================================================================/
			//      PropertyDataV36
			//============================================================================/

			PropertyDataV36::PropertyDataV36( )
				: value( 0 )
				, type( 0 ) {
			}

			PropertyDataV36::PropertyDataV36( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			PropertyDataV36::PropertyDataV36( const PropertyDataV36& p_other )
				: value( p_other.value )
				, pathVal( p_other.pathVal )
				, type( p_other.type ) {
			}

			PropertyDataV36& PropertyDataV36::operator=( const PropertyDataV36& p_other ) {
				value = p_other.value;
				pathVal = p_other.pathVal;
				type = p_other.type;
				return *this;
			}

			const byte* PropertyDataV36::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, value );
				p_data = helpers::read( p_data, p_size, pathVal );
				p_data = helpers::read( p_data, p_size, type );
				return p_data;
			}

			//============================================================================/
			//      CurveKeyDataV36
			//============================================================================/

			CurveKeyDataV36::CurveKeyDataV36( )
				: time( 0 )
				, value( 0 )
				, inTangent( 0 )
				, outTangent( 0 ) {
			}

			CurveKeyDataV36::CurveKeyDataV36( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			CurveKeyDataV36::CurveKeyDataV36( const CurveKeyDataV36& p_other )
				: time( p_other.time )
				, value( p_other.value )
				, inTangent( p_other.inTangent )
				, outTangent( p_other.outTangent ) {
			}

			CurveKeyDataV36& CurveKeyDataV36::operator=( const CurveKeyDataV36& p_other ) {
				time = p_other.time;
				value = p_other.value;
				inTangent = p_other.inTangent;
				outTangent = p_other.outTangent;
				return *this;
			}

			const byte* CurveKeyDataV36::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, time );
				p_data = helpers::read( p_data, p_size, value );
				p_data = helpers::read( p_data, p_size, inTangent );
				p_data = helpers::read( p_data, p_size, outTangent );
				return p_data;
			}

			//============================================================================/
			//      FlagKeyDataV36
			//============================================================================/

			FlagKeyDataV36::FlagKeyDataV36( )
				: time( 0 )
				, value( 0 ) {
			}

			FlagKeyDataV36::FlagKeyDataV36( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			FlagKeyDataV36::FlagKeyDataV36( const FlagKeyDataV36& p_other )
				: time( p_other.time )
				, value( p_other.value ) {
			}

			FlagKeyDataV36& FlagKeyDataV36::operator=( const FlagKeyDataV36& p_other ) {
				time = p_other.time;
				value = p_other.value;
				return *this;
			}

			const byte* FlagKeyDataV36::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, time );
				p_data = helpers::read( p_data, p_size, value );
				return p_data;
			}

			//============================================================================/
			//      TriggerKeyDataV36
			//============================================================================/

			TriggerKeyDataV36::TriggerKeyDataV36( )
				: time( 0 )
				, flags1( 0 )
				, flags2( 0 )
				, flags3( 0 )
				, flags4( 0 )
				, token1( 0 )
				, token2( 0 )
				, value1( 0 )
				, value2( 0 )
				, value3( 0 )
				, value4( 0 ) {
			}

			TriggerKeyDataV36::TriggerKeyDataV36( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			TriggerKeyDataV36::TriggerKeyDataV36( const TriggerKeyDataV36& p_other )
				: time( p_other.time )
				, flags1( p_other.flags1 )
				, flags2( p_other.flags2 )
				, flags3( p_other.flags3 )
				, flags4( p_other.flags4 )
				, token1( p_other.token1 )
				, token2( p_other.token2 )
				, value1( p_other.value1 )
				, value2( p_other.value2 )
				, value3( p_other.value3 )
				, value4( p_other.value4 ) {
			}

			TriggerKeyDataV36& TriggerKeyDataV36::operator=( const TriggerKeyDataV36& p_other ) {
				time = p_other.time;
				flags1 = p_other.flags1;
				flags2 = p_other.flags2;
				flags3 = p_other.flags3;
				flags4 = p_other.flags4;
				token1 = p_other.token1;
				token2 = p_other.token2;
				value1 = p_other.value1;
				value2 = p_other.value2;
				value3 = p_other.value3;
				value4 = p_other.value4;
				return *this;
			}

			const byte* TriggerKeyDataV36::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, time );
				p_data = helpers::read( p_data, p_size, flags1 );
				p_data = helpers::read( p_data, p_size, flags2 );
				p_data = helpers::read( p_data, p_size, flags3 );
				p_data = helpers::read( p_data, p_size, flags4 );
				p_data = helpers::read( p_data, p_size, token1 );
				p_data = helpers::read( p_data, p_size, token2 );
				p_data = helpers::read( p_data, p_size, value1 );
				p_data = helpers::read( p_data, p_size, value2 );
				p_data = helpers::read( p_data, p_size, value3 );
				p_data = helpers::read( p_data, p_size, value4 );
				return p_data;
			}

			//============================================================================/
			//      TrackDataV36
			//============================================================================/

			TrackDataV36::TrackDataV36( )
				: name( 0 )
				, type( 0 ) {
			}

			TrackDataV36::TrackDataV36( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			TrackDataV36::TrackDataV36( const TrackDataV36& p_other )
				: name( p_other.name )
				, curveKeys( p_other.curveKeys )
				, flagKeys( p_other.flagKeys )
				, triggerKeys( p_other.triggerKeys )
				, type( p_other.type ) {
			}

			TrackDataV36& TrackDataV36::operator=( const TrackDataV36& p_other ) {
				name = p_other.name;
				curveKeys = p_other.curveKeys;
				flagKeys = p_other.flagKeys;
				triggerKeys = p_other.triggerKeys;
				type = p_other.type;
				return *this;
			}

			const byte* TrackDataV36::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, curveKeys );
				p_data = helpers::read( p_data, p_size, flagKeys );
				p_data = helpers::read( p_data, p_size, triggerKeys );
				p_data = helpers::read( p_data, p_size, type );
				return p_data;
			}

			//============================================================================/
			//      TrackGroupDataV36
			//============================================================================/

			TrackGroupDataV36::TrackGroupDataV36( )
				: name( 0 )
				, flags( 0 )
				, type( 0 ) {
			}

			TrackGroupDataV36::TrackGroupDataV36( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			TrackGroupDataV36::TrackGroupDataV36( const TrackGroupDataV36& p_other )
				: name( p_other.name )
				, flags( p_other.flags )
				, props( p_other.props )
				, tracks( p_other.tracks )
				, type( p_other.type ) {
			}

			TrackGroupDataV36& TrackGroupDataV36::operator=( const TrackGroupDataV36& p_other ) {
				name = p_other.name;
				flags = p_other.flags;
				props = p_other.props;
				tracks = p_other.tracks;
				type = p_other.type;
				return *this;
			}

			const byte* TrackGroupDataV36::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, props );
				p_data = helpers::read( p_data, p_size, tracks );
				p_data = helpers::read( p_data, p_size, type );
				return p_data;
			}

			//============================================================================/
			//      SequenceDataV36
			//============================================================================/

			SequenceDataV36::SequenceDataV36( )
				: name( 0 )
				, playScript( 0 )
				, updateScript( 0 )
				, length( 0 )
				, flags( 0 ) {
			}

			SequenceDataV36::SequenceDataV36( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			SequenceDataV36::SequenceDataV36( const SequenceDataV36& p_other )
				: name( p_other.name )
				, playScript( p_other.playScript )
				, updateScript( p_other.updateScript )
				, environmentMap( p_other.environmentMap )
				, map( p_other.map )
				, clientMap( p_other.clientMap )
				, length( p_other.length )
				, flags( p_other.flags )
				, trackGroups( p_other.trackGroups ) {
			}

			SequenceDataV36& SequenceDataV36::operator=( const SequenceDataV36& p_other ) {
				name = p_other.name;
				playScript = p_other.playScript;
				updateScript = p_other.updateScript;
				environmentMap = p_other.environmentMap;
				map = p_other.map;
				clientMap = p_other.clientMap;
				length = p_other.length;
				flags = p_other.flags;
				trackGroups = p_other.trackGroups;
				return *this;
			}

			const byte* SequenceDataV36::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, playScript );
				p_data = helpers::read( p_data, p_size, updateScript );
				p_data = helpers::read( p_data, p_size, environmentMap );
				p_data = helpers::read( p_data, p_size, map );
				p_data = helpers::read( p_data, p_size, clientMap );
				p_data = helpers::read( p_data, p_size, length );
				p_data = helpers::read( p_data, p_size, flags );
				p_data = helpers::read( p_data, p_size, trackGroups );
				return p_data;
			}

			//============================================================================/
			//      ColorDefDataV36
			//============================================================================/

			ColorDefDataV36::ColorDefDataV36( )
				: intensity( 0 ) {
			}

			ColorDefDataV36::ColorDefDataV36( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ColorDefDataV36::ColorDefDataV36( const ColorDefDataV36& p_other )
				: intensity( p_other.intensity )
				, color( p_other.color ) {
			}

			ColorDefDataV36& ColorDefDataV36::operator=( const ColorDefDataV36& p_other ) {
				intensity = p_other.intensity;
				color = p_other.color;
				return *this;
			}

			const byte* ColorDefDataV36::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, intensity );
				p_data = helpers::read( p_data, p_size, color );
				return p_data;
			}

			//============================================================================/
			//      AmbientLightDataV36
			//============================================================================/

			AmbientLightDataV36::AmbientLightDataV36( )
				: name( 0 ) {
			}

			AmbientLightDataV36::AmbientLightDataV36( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			AmbientLightDataV36::AmbientLightDataV36( const AmbientLightDataV36& p_other )
				: ambientGroundColor( p_other.ambientGroundColor )
				, ambientSkyColor( p_other.ambientSkyColor )
				, fillColor( p_other.fillColor )
				, hemisphericalColor( p_other.hemisphericalColor )
				, name( p_other.name ) {
			}

			AmbientLightDataV36& AmbientLightDataV36::operator=( const AmbientLightDataV36& p_other ) {
				ambientGroundColor = p_other.ambientGroundColor;
				ambientSkyColor = p_other.ambientSkyColor;
				fillColor = p_other.fillColor;
				hemisphericalColor = p_other.hemisphericalColor;
				name = p_other.name;
				return *this;
			}

			const byte* AmbientLightDataV36::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, ambientGroundColor );
				p_data = helpers::read( p_data, p_size, ambientSkyColor );
				p_data = helpers::read( p_data, p_size, fillColor );
				p_data = helpers::read( p_data, p_size, hemisphericalColor );
				p_data = helpers::read( p_data, p_size, name );
				return p_data;
			}

			//============================================================================/
			//      FileNameRefDataV36
			//============================================================================/

			FileNameRefDataV36::FileNameRefDataV36( )
				: name( 0 ) {
			}

			FileNameRefDataV36::FileNameRefDataV36( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			FileNameRefDataV36::FileNameRefDataV36( const FileNameRefDataV36& p_other )
				: name( p_other.name )
				, fileName( p_other.fileName ) {
			}

			FileNameRefDataV36& FileNameRefDataV36::operator=( const FileNameRefDataV36& p_other ) {
				name = p_other.name;
				fileName = p_other.fileName;
				return *this;
			}

			const byte* FileNameRefDataV36::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, fileName );
				return p_data;
			}

			//============================================================================/
			//      ScriptDataV36
			//============================================================================/

			ScriptDataV36::ScriptDataV36( )
				: name( 0 ) {
			}

			ScriptDataV36::ScriptDataV36( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ScriptDataV36::ScriptDataV36( const ScriptDataV36& p_other )
				: name( p_other.name )
				, byteCode( p_other.byteCode ) {
			}

			ScriptDataV36& ScriptDataV36::operator=( const ScriptDataV36& p_other ) {
				name = p_other.name;
				byteCode = p_other.byteCode;
				return *this;
			}

			const byte* ScriptDataV36::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, byteCode );
				return p_data;
			}

			//============================================================================/
			//      TextEntryDataV36
			//============================================================================/

			TextEntryDataV36::TextEntryDataV36( )
				: language( 0 ) {
			}

			TextEntryDataV36::TextEntryDataV36( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			TextEntryDataV36::TextEntryDataV36( const TextEntryDataV36& p_other )
				: text( p_other.text )
				, language( p_other.language ) {
			}

			TextEntryDataV36& TextEntryDataV36::operator=( const TextEntryDataV36& p_other ) {
				text = p_other.text;
				language = p_other.language;
				return *this;
			}

			const byte* TextEntryDataV36::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, text );
				p_data = helpers::read( p_data, p_size, language );
				return p_data;
			}

			//============================================================================/
			//      TextResourceDataV36
			//============================================================================/

			TextResourceDataV36::TextResourceDataV36( )
				: name( 0 )
				, index( 0 )
				, voiceId( 0 ) {
			}

			TextResourceDataV36::TextResourceDataV36( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			TextResourceDataV36::TextResourceDataV36( const TextResourceDataV36& p_other )
				: name( p_other.name )
				, index( p_other.index )
				, voiceId( p_other.voiceId )
				, textEntries( p_other.textEntries ) {
			}

			TextResourceDataV36& TextResourceDataV36::operator=( const TextResourceDataV36& p_other ) {
				name = p_other.name;
				index = p_other.index;
				voiceId = p_other.voiceId;
				textEntries = p_other.textEntries;
				return *this;
			}

			const byte* TextResourceDataV36::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, index );
				p_data = helpers::read( p_data, p_size, voiceId );
				p_data = helpers::read( p_data, p_size, textEntries );
				return p_data;
			}

			//============================================================================/
			//      SpeciesResourceDataV36
			//============================================================================/

			SpeciesResourceDataV36::SpeciesResourceDataV36( ) {
			}

			SpeciesResourceDataV36::SpeciesResourceDataV36( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			SpeciesResourceDataV36::SpeciesResourceDataV36( const SpeciesResourceDataV36& p_other )
				: speciesId( p_other.speciesId )
				, name( p_other.name )
				, modelId( p_other.modelId )
				, modelVariant( p_other.modelVariant ) {
			}

			SpeciesResourceDataV36& SpeciesResourceDataV36::operator=( const SpeciesResourceDataV36& p_other ) {
				speciesId = p_other.speciesId;
				name = p_other.name;
				modelId = p_other.modelId;
				modelVariant = p_other.modelVariant;
				return *this;
			}

			const byte* SpeciesResourceDataV36::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, speciesId );
				p_data = helpers::read( p_data, p_size, name );
				p_data = helpers::read( p_data, p_size, modelId );
				p_data = helpers::read( p_data, p_size, modelVariant );
				return p_data;
			}

			//============================================================================/
			//      ResourceDataV36
			//============================================================================/

			ResourceDataV36::ResourceDataV36( ) {
			}

			ResourceDataV36::ResourceDataV36( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			ResourceDataV36::ResourceDataV36( const ResourceDataV36& p_other )
				: ambientLightResources( p_other.ambientLightResources )
				, fileNameRefs( p_other.fileNameRefs )
				, scripts( p_other.scripts )
				, textResources( p_other.textResources )
				, speciesResource( p_other.speciesResource ) {
			}

			ResourceDataV36& ResourceDataV36::operator=( const ResourceDataV36& p_other ) {
				ambientLightResources = p_other.ambientLightResources;
				fileNameRefs = p_other.fileNameRefs;
				scripts = p_other.scripts;
				textResources = p_other.textResources;
				speciesResource = p_other.speciesResource;
				return *this;
			}

			const byte* ResourceDataV36::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, ambientLightResources );
				p_data = helpers::read( p_data, p_size, fileNameRefs );
				p_data = helpers::read( p_data, p_size, scripts );
				p_data = helpers::read( p_data, p_size, textResources );
				p_data = helpers::read( p_data, p_size, speciesResource );
				return p_data;
			}

			//============================================================================/
			//      SceneDataV36
			//============================================================================/

			SceneDataV36::SceneDataV36( )
				: startingSequence( 0 ) {
			}

			SceneDataV36::SceneDataV36( const byte* p_data, size_t p_size, const byte** po_pointer ) {
				auto pointer = assign( p_data, p_size );
				if ( po_pointer ) { *po_pointer = pointer; }
			}

			SceneDataV36::SceneDataV36( const SceneDataV36& p_other )
				: startingSequence( p_other.startingSequence )
				, sequences( p_other.sequences )
				, resources( p_other.resources )
				, trackGroups( p_other.trackGroups ) {
			}

			SceneDataV36& SceneDataV36::operator=( const SceneDataV36& p_other ) {
				startingSequence = p_other.startingSequence;
				sequences = p_other.sequences;
				resources = p_other.resources;
				trackGroups = p_other.trackGroups;
				return *this;
			}

			const byte* SceneDataV36::assign( const byte* p_data, size_t p_size ) {
				p_data = helpers::read( p_data, p_size, startingSequence );
				p_data = helpers::read( p_data, p_size, sequences );
				p_data = helpers::read( p_data, p_size, resources );
				p_data = helpers::read( p_data, p_size, trackGroups );
				return p_data;
			}

		}; // namespace chunks
	}; // namespace pf
}; // namespace gw2f
