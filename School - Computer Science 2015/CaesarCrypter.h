#pragma once
#include "stdafx.h"
#include "VigenereCrypter.h"

namespace kg
{
	class CaesarCrypter : public SymmetricCrypter<void>
	{
	public:
		static const unsigned int KEY = 3;

	private:
		VigenereCrypter m_vigenereCrypter;

	public:

		virtual std::vector<Restklasse> encrypt( const std::vector<Restklasse>& input ) override;
		virtual std::vector<Restklasse> decrypt( const std::vector<Restklasse>& input ) override;
	};
}