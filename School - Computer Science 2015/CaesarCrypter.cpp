#include "CaesarCrypter.h"
using namespace std;
using namespace sf;
using namespace tgui;

namespace kg
{
	CaesarCrypter::CaesarCrypter( const std::shared_ptr<AlphabetConverter>& alphabetConverter )
		:SymmetricCrypter<void>( alphabetConverter ),
		m_vigenereCrypter( m_vigenereCrypter ),
		m_key( 3, alphabetConverter->getAlphabetSize() )
	{ }

	std::vector<Restklasse> CaesarCrypter::encrypt( const std::vector<Restklasse>& input )
	{
		vector<Restklasse> retVal;

		for( const auto& el : input )
			retVal.push_back( el + m_key );

		return retVal;
	}

	std::vector<Restklasse> CaesarCrypter::decrypt( const std::vector<Restklasse>& input )
	{
		vector<Restklasse> retVal;

		for( const auto& el : input )
			retVal.push_back( el - m_key );

		return retVal;
	}
}