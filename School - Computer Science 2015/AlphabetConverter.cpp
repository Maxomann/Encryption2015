#include "AlphabetConverter.h"
using namespace std;
using namespace sf;
using namespace kg;

kg::AlphabetConverter::RestklassenVec kg::AlphabetConverter::TextToRestklassenArray( const std::string& str ) const
{
	std::vector<Restklasse> retVal;

	for( const auto& ch : str )
		retVal.push_back( Restklasse( ALPHABET_RAW.find( ch ), ALPHABET_SIZE ) );

	return retVal;
}

std::string kg::AlphabetConverter::RestklassenArrayToString( const RestklassenVec& vec ) const
{
	std::string retVal;

	for( const auto& el : vec )
		retVal.push_back( ALPHABET_RAW.at( el.getSmallestIntegerRepresentation() ) );

	return retVal;
}
