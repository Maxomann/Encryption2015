/**
 * @file AppVigenere.h
 *
 * Declares the Vigenere Application class.
 */

#pragma once
#include "Application.h"
#include "VigenereCrypter.h"
#include "AlphabetConverter.h"

namespace kg
{
	/**
	 * The Vigenere encryption application.
	 *
	 * @author Kay
	 * @date 11.12.2015
	 */

	class AppVigenere : public Application
	{
		/** The alphabet converter. */
		std::unique_ptr<AlphabetConverter> m_alphabetConverter = std::make_unique<StandartAlphabetConverter>();
		/** The vigenere crypter. */
		VigenereCrypter m_vigenereCrypter;

		/** The vigenere label. */
		tgui::Label::Ptr m_vigenereLabel;
		/** The vigenere input. */
		tgui::TextBox::Ptr m_vigenereInput;
		/** The vigenere key input. */
		tgui::TextBox::Ptr m_vigenereKeyInput;
		/** The vigenere output. */
		tgui::TextBox::Ptr m_vigenereOutput;

		/**
		 * Input changed callback.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 */

		void m_inputChanged();

	public:

		/**
		 * Initializes this object.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 */

		virtual void init() override;
	};
}