/**
 * @file CaesarCrypter.h
 *
 * Declares the caesar crypter class.
 */

#pragma once
#include "stdafx.h"
#include "SymmetricCrypter.h"

namespace kg
{
	/**
	 * A caesar crypter.
	 *
	 * @author Kay
	 * @date 11.12.2015
	 */

	class CaesarCrypter : public SymmetricCrypter<void>
	{
	public:
		/** The standard key for caesar. */
		static const unsigned int KEY = 3;

	public:

		/**
		 * Encrypts the given input.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @param input The input.
		 *
		 * @return the encrypted input;
		 */

		virtual std::vector<Restklasse> encrypt( const std::vector<Restklasse>& input ) override;

		/**
		 * Decrypts the given input.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @param input The input.
		 *
		 * @return the decrypted input;
		 */

		virtual std::vector<Restklasse> decrypt( const std::vector<Restklasse>& input ) override;
	};
}