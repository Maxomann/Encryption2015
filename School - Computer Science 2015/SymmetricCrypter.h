#pragma once
#include "stdafx.h"
#include "Crypter.h"

namespace kg
{
	template<class KeyType>
	class SymmetricCrypter : public Crypter<KeyType, KeyType>
	{
	public:
		virtual KeyType getInverseKey( const KeyType& key )const = 0;

		//apply key
		virtual std::vector<Restklasse> encrypt( const KeyType& key, const std::vector<Restklasse>& input ) override = 0;

		//apply inverse key
		//decrypt(Key) = encrypt(getInverseKey(Key))
		virtual std::vector<Restklasse> decrypt( const KeyType& key, const std::vector<Restklasse>& input ) override = 0;
	};

	template<>
	class SymmetricCrypter<void> : public Crypter<void, void>
	{
	public:
		virtual std::vector<Restklasse> encrypt( const std::vector<Restklasse>& input ) override = 0;

		virtual std::vector<Restklasse> decrypt( const std::vector<Restklasse>& input ) override = 0;
	};
}