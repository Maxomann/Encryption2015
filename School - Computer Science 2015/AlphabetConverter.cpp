#include "AlphabetConverter.h"
using namespace std;
using namespace sf;
using namespace kg;

const std::string kg::StandartAlphabetConverter::ALPHABET_RAW = "0123456789 ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz.,+-*/";
const std::vector<char> kg::StandartAlphabetConverter::ALPHABET = vector<char>( ALPHABET_RAW.begin(), ALPHABET_RAW.end() );
const unsigned int kg::StandartAlphabetConverter::ALPHABET_SIZE = ALPHABET.size();

unsigned int kg::StandartAlphabetConverter::getAlphabetSize() const
{
	return ALPHABET_SIZE;
}

std::vector<Restklasse> kg::StandartAlphabetConverter::TextToRestklassenArray( const std::string& str ) const
{
	std::vector<Restklasse> retVal;

	for( const auto& ch : str )
	{
		int index = ALPHABET_RAW.find( ch );
		if( index == string::npos )
			throw exception( "Character input does not exist in ALPHABET" );
		retVal.push_back( Restklasse( ALPHABET_RAW.find( ch ), ALPHABET_SIZE ) );
	}

	return retVal;
}

std::string kg::StandartAlphabetConverter::RestklassenArrayToString( const std::vector<Restklasse>& vec ) const
{
	std::string retVal;

	for( const auto& el : vec )
	{
		if( el.getModulo() != getAlphabetSize() )
			throw exception( "Restklasse cannot be converted: Modulo!=ALPHABET_SIZE" );

		try
		{
			retVal.push_back( ALPHABET_RAW.at( el.getSmallestIntegerRepresentation() ) );
		}
		catch( const std::exception& )
		{
			throw exception( "Restklasse.getSmallestIntegerRepresentation() does not exist in ALPHABET" );
		}
	}

	return retVal;
}