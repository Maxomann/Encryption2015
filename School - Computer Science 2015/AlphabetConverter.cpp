#include "AlphabetConverter.h"
using namespace std;
using namespace sf;
using namespace kg;

const std::string kg::StandartAlphabetConverter::ALPHABET_RAW = " ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
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
		retVal.push_back( Restklasse( ALPHABET_RAW.find( ch ), ALPHABET_SIZE ) );

	return retVal;
}

std::string kg::StandartAlphabetConverter::RestklassenArrayToString( const std::vector<Restklasse>& vec ) const
{
	std::string retVal;

	for( const auto& el : vec )
		retVal.push_back( ALPHABET_RAW.at( el.getSmallestIntegerRepresentation() ) );

	return retVal;
}