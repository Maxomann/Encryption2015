#include "CaesarCrypter.h"
using namespace std;
using namespace sf;
using namespace tgui;

namespace kg
{
	std::vector<Restklasse> CaesarCrypter::encrypt( const std::vector<Restklasse>& input )
	{
		vector<Restklasse> retVal;

		for( const auto& el : input )
			retVal.push_back( el + KEY );

		return retVal;
	}

	std::vector<Restklasse> CaesarCrypter::decrypt( const std::vector<Restklasse>& input )
	{
		vector<Restklasse> retVal;

		for( const auto& el : input )
			retVal.push_back( el - KEY );

		return retVal;
	}
}