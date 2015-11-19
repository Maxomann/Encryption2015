#pragma once
#include "stdafx.h"
#include "Restklasse.h"

namespace kg
{
	class AlphabetConverter
	{
	public:
		virtual unsigned int getAlphabetSize()const = 0;

		virtual std::vector<Restklasse> TextToRestklassenArray( const std::string& str )const = 0;

		virtual std::string RestklassenArrayToString( const std::vector<Restklasse>& vec )const = 0;
	};

	class StandartAlphabetConverter : public AlphabetConverter
	{
		static const std::string ALPHABET_RAW;
		static const std::vector<char> ALPHABET;
		static const unsigned int ALPHABET_SIZE;

	public:
		virtual unsigned int getAlphabetSize() const override;

		virtual std::vector<Restklasse> TextToRestklassenArray( const std::string& str )const override;

		virtual std::string RestklassenArrayToString( const std::vector<Restklasse>& vec )const override;
	};
}