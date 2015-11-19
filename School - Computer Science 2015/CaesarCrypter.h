#pragma once
#include "stdafx.h"
#include "VigenereCrypter.h"

namespace kg
{
	class CaesarCrypter : public SymmetricCrypter<void>
	{
		const Restklasse m_key;

		VigenereCrypter m_vigenereCrypter;

	public:
		CaesarCrypter( const std::shared_ptr<AlphabetConverter>& alphabetConverter );

		virtual std::vector<Restklasse> encrypt( const std::vector<Restklasse>& input ) override;
		virtual std::vector<Restklasse> decrypt( const std::vector<Restklasse>& input ) override;
	};
}