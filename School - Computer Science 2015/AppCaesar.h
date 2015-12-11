/**
 * @file AppCaesar.h
 *
 * Declares the application caesar class.
 */

#pragma once
#include "Application.h"
#include "CaesarCrypter.h"
#include "AlphabetConverter.h"

namespace kg
{
	/**
	 * The caesar encryption application.
	 *
	 * @author Kay
	 * @date 11.12.2015
	 */

	class AppCaesar : public Application
	{
		/** The alphabet converter. */
		std::unique_ptr<AlphabetConverter> m_alphabetConverter = std::make_unique<StandartAlphabetConverter>();

		/** The caesar crypter. */
		CaesarCrypter m_caesarCrypter;

		/** The caesar label. */
		tgui::Label::Ptr m_caesarLabel;

		/** The caesar input. */
		tgui::TextBox::Ptr m_caesarInput;

		/** The caesar output. */
		tgui::TextBox::Ptr m_caesarOutput;

		/**
		 * Callback if any input changed.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 */

		void m_inputChanged();

	public:

		/**
		 * Initializes this Application.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 */

		virtual void init() override;
	};
}