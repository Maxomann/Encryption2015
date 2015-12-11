/**
 * @file Crypter.h
 *
 * Declares the crypter class.
 */

#pragma once
#include "stdafx.h"
#include "Restklasse.h"
#include "AlphabetConverter.h"

namespace kg
{
	/**
	 * A crypter.
	 *
	 * @author Kay
	 * @date 11.12.2015
	 *
	 * An abstract crypter from which other crypter can inherit
	 *
	 * @tparam EncryptKeyType Type of the key used for encryption.
	 * @tparam DecryptKeyType Type of the key used for decryption.
	 */

	template<class EncryptKeyType, class DecryptKeyType>
	class Crypter
	{
	public:

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

		virtual std::vector<Restklasse> encrypt( const EncryptKeyType& key, const std::vector<Restklasse>& input ) = 0;

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

		virtual std::vector<Restklasse> decrypt( const DecryptKeyType& key, const std::vector<Restklasse>& input ) = 0;
	};

	/**
	 * Specialization of the crypter template in case an encryption does not need a key for encryption and decryption.
	 * Caesar for example.
	 *
	 * @author Kay
	 * @date 11.12.2015
	 */

	template<>
	class Crypter<void, void>
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

		virtual std::vector<Restklasse> encrypt( const std::vector<Restklasse>& input ) = 0;

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

		virtual std::vector<Restklasse> decrypt( const std::vector<Restklasse>& input ) = 0;
	};
}