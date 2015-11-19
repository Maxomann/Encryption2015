#pragma once
#include "stdafx.h"
#include "Crypter.h"

namespace kg
{
	template<class KeyType>
	class SymmetricCrypter : public Crypter
	{
	protected:
		virtual KeyType getInverseKey( const KeyType& key )const = 0;
	};
}