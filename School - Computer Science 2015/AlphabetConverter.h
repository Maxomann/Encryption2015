/**
 * @file AlphabetConverter.h
 *
 * Declares the alphabet converter class.
 */

#pragma once
#include "stdafx.h"
#include "Restklasse.h"

namespace kg
{
	/**
	 * An abstract alphabet converter.
	 *
	 * @author Kay
	 * @date 11.12.2015
	 */

	class AlphabetConverter
	{
	public:

		/**
		 * Gets alphabet size.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @return The alphabet size.
		 */

		virtual unsigned int getAlphabetSize()const = 0;

		/**
		 * Text to Restklassen array.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @param str The string.
		 *
		 * @return A Restklassen representation of the chars in the string in a vector;
		 */

		virtual std::vector<Restklasse> TextToRestklassenArray( const std::string& str )const = 0;

		/**
		 * Restklassen array to string.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @param vec The vector of Restklassen.
		 *
		 * @return A std::string.
		 */

		virtual std::string RestklassenArrayToString( const std::vector<Restklasse>& vec )const = 0;
	};

	/**
	 * An implementation of an AlphabetConverter.
	 *
	 * @author Kay
	 * @date 11.12.2015
	 */

	class StandartAlphabetConverter : public AlphabetConverter
	{
		/** The alphabet as a string. */
		static const std::string ALPHABET_RAW;
		/** The alphabet as a vector of chars. */
		static const std::vector<char> ALPHABET;
		/** Size of the alphabet. */
		static const unsigned int ALPHABET_SIZE;

	public:

		/**
		 * Gets alphabet size.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @return The alphabet size.
		 */

		virtual unsigned int getAlphabetSize() const override;

		/**
		* Text to Restklassen array.
		*
		* @author Kay
		* @date 11.12.2015
		*
		* @param str The string.
		*
		* @return A Restklassen representation of the chars in the string in a vector;
		*/

		virtual std::vector<Restklasse> TextToRestklassenArray( const std::string& str )const override;

		/**
		* Restklassen array to string.
		*
		* @author Kay
		* @date 11.12.2015
		*
		* @param vec The vector of Restklassen.
		*
		* @return A std::string.
		*/

		virtual std::string RestklassenArrayToString( const std::vector<Restklasse>& vec )const override;
	};
}