#pragma once
#include "stdafx.h"
#include "Restklasse.h"
#include "AlphabetConverter.h"

namespace kg
{
	template<class EncryptKeyType, class DecryptKeyType>
	class Crypter
	{
	protected:
		std::shared_ptr<AlphabetConverter> m_alpahbetConverter;

	public:
		Crypter( const std::shared_ptr<AlphabetConverter>& alphabetConverter )
			:m_alpahbetConverter( alphabetConverter )
		{ };

		virtual std::vector<Restklasse> encrypt( const EncryptKeyType& key, const std::vector<Restklasse>& input ) = 0;

		virtual std::vector<Restklasse> decrypt( const DecryptKeyType& key, const std::vector<Restklasse>& input ) = 0;
	};

	template<>
	class Crypter<void, void>
	{
	protected:
		std::shared_ptr<AlphabetConverter> m_alpahbetConverter;

	public:
		Crypter( const std::shared_ptr<AlphabetConverter>& alphabetConverter )
			:m_alpahbetConverter( alphabetConverter )
		{ };

		virtual std::vector<Restklasse> encrypt( const std::vector<Restklasse>& input ) = 0;

		virtual std::vector<Restklasse> decrypt( const std::vector<Restklasse>& input ) = 0;
	};
}