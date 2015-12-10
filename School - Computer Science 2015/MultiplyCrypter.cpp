#include "MultiplyCrypter.h"
using namespace std;
using namespace sf;
using namespace tgui;

namespace kg
{
	Restklasse MultiplyCrypter::getInverseKey( const Restklasse& key ) const
	{
		auto euclid_result = get<0>( extended_euclidean_algorithm<int>( key.getSmallestIntegerRepresentation(), key.getModulo() ) );

		return Restklasse( euclid_result, key.getModulo() );
	}

	std::vector<Restklasse> MultiplyCrypter::encrypt( const Restklasse& key, const std::vector<Restklasse>& input )
	{
		if( !isKeyUnambiguous( key ) )
			throw exception( "key is ambiguous" );

		std::vector<Restklasse> retVal;

		for( const auto& el : input )
			retVal.push_back( el*key );

		return retVal;
	}

	std::vector<Restklasse> MultiplyCrypter::decrypt( const Restklasse& key, const std::vector<Restklasse>& input )
	{
		auto inverseKey = getInverseKey( key );

		return encrypt( inverseKey, input );
	}

	bool MultiplyCrypter::isKeyUnambiguous( const Restklasse& key )
	{
		return euclidean_algorithm( key.getSmallestIntegerRepresentation(), key.getModulo() ) == 1;
	}
}