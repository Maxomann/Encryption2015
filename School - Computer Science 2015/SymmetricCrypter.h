/**
 * @file SymmetricCrypter.h
 *
 * Declares the symmetric crypter class.
 */

#pragma once
#include "stdafx.h"
#include "Crypter.h"

namespace kg
{
	/**
	 * A symmetric crypter.
	 * A special case of a crypter where the type of the key for en- and decrytion is equal
	 *
	 * @author Kay
	 * @date 11.12.2015
	 *
	 * @tparam KeyType Type of the key used for encryption and decryption.
	 */

	template<class KeyType>
	class SymmetricCrypter : public Crypter<KeyType, KeyType>
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

		virtual KeyType getInverseKey( const KeyType& key )const = 0;

		/**
		 * apply key.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @param key   The key.
		 * @param input The input.
		 *
		 * @return the encrypted input;
		 */

		virtual std::vector<Restklasse> encrypt( const KeyType& key, const std::vector<Restklasse>& input ) override = 0;

		/**
		 * apply inverse key decrypt(Key) = encrypt(getInverseKey(Key))
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @param key   The key.
		 * @param input The input.
		 *
		 * @return the decrypted input;
		 */

		virtual std::vector<Restklasse> decrypt( const KeyType& key, const std::vector<Restklasse>& input ) override = 0;
	};

	/**
	 * Specialization of the SymmetricCrypter template in case an encryption does not need a key for encryption and decryption.
	 * Caesar for example.
	 *
	 * @author Kay
	 * @date 11.12.2015
	 */

	template<>
	class SymmetricCrypter<void> : public Crypter<void, void>
	{
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

		virtual std::vector<Restklasse> encrypt( const std::vector<Restklasse>& input ) override = 0;

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

		virtual std::vector<Restklasse> decrypt( const std::vector<Restklasse>& input ) override = 0;
	};
}