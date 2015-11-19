#pragma once
#include "stdafx.h"
#include "Restklasse.h"

namespace kg
{
	class AlphabetConverter
	{
		typedef std::vector<Restklasse> RestklassenVec;

		static const std::string ALPHABET_RAW;
		static const std::vector<char> ALPHABET;
		static const unsigned int ALPHABET_SIZE;

	public:
		RestklassenVec TextToRestklassenArray( const std::string& str )const;

		std::string RestklassenArrayToString( const RestklassenVec& vec )const;
	};
}