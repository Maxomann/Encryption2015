/**
 * @file VigenereCrypter.h
 *
 * Declares the Vigenere crypter class.
 */

#pragma once
#include "stdafx.h"
#include "SymmetricCrypter.h"

namespace kg
{
	/**
	 * A Vigenere crypter.
	 *
	 * @author Kay
	 * @date 11.12.2015
	 */

	class VigenereCrypter : public SymmetricCrypter<std::vector<Restklasse>>
	{
	public:

		/**
		 * Gets inverse key.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @param key The key.
		 *
		 * @return The inverse key.
		 */

		virtual std::vector<Restklasse> getInverseKey( const std::vector<Restklasse>& key ) const override;

		/**
		 * Encrypts.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @param key   The key.
		 * @param input The input.
		 *
		 * @return the encrypted input;
		 */

		virtual std::vector<Restklasse> encrypt( const std::vector<Restklasse>& key, const std::vector<Restklasse>& input ) override;

		/**
		 * Decrypts.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @param key   The key.
		 * @param input The input.
		 *
		 * @return the decrypted input;
		 */

		virtual std::vector<Restklasse> decrypt( const std::vector<Restklasse>& key, const std::vector<Restklasse>& input ) override;
	};
}