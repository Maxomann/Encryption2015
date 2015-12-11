/**
 * @file MultiplyCrypter.h
 *
 * Declares the multiply crypter class.
 */

#pragma once
#include "stdafx.h"
#include "Algorithm.h"
#include "SymmetricCrypter.h"

namespace kg
{
	/**
	 * A multiply crypter.
	 *
	 * @author Kay
	 * @date 11.12.2015
	 */

	class MultiplyCrypter : public SymmetricCrypter<Restklasse>
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

		virtual Restklasse getInverseKey( const Restklasse& key ) const override;

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

		virtual std::vector<Restklasse> encrypt( const Restklasse& key, const std::vector<Restklasse>& input ) override;

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

		virtual std::vector<Restklasse> decrypt( const Restklasse& key, const std::vector<Restklasse>& input ) override;

		/**
		 * return true if gcd of key and modulo is 1.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @param key The key.
		 *
		 * @return true if key unambiguous, false if not.
		 */

		bool isKeyUnambiguous( const Restklasse& key );
	};
}