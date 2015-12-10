#pragma once
#include "stdafx.h"
#include "Algorithm.h"
#include "SymmetricCrypter.h"

namespace kg
{
	class MultiplyCrypter : public SymmetricCrypter<Restklasse>
	{
	public:

		virtual Restklasse getInverseKey( const Restklasse& key ) const override;

		virtual std::vector<Restklasse> encrypt( const Restklasse& key, const std::vector<Restklasse>& input ) override;

		virtual std::vector<Restklasse> decrypt( const Restklasse& key, const std::vector<Restklasse>& input ) override;

		//return true if gcd of key and modulo is 1
		bool isKeyUnambiguous( const Restklasse& key );
	};
}