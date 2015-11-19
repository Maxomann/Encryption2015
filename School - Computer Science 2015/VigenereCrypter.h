#pragma once
#include "stdafx.h"
#include "SymmetricCrypter.h"

namespace kg
{
	class VigenereCrypter : public SymmetricCrypter<std::vector<Restklasse>>
	{
	public:
		VigenereCrypter( const std::shared_ptr<AlphabetConverter>& alphabetConverter );

		virtual std::vector<Restklasse> getInverseKey( const std::vector<Restklasse>& key ) const override;

		virtual std::vector<Restklasse> encrypt( const std::vector<Restklasse>& key, const std::vector<Restklasse>& input ) override;

		virtual std::vector<Restklasse> decrypt( const std::vector<Restklasse>& key, const std::vector<Restklasse>& input ) override;
	};
}