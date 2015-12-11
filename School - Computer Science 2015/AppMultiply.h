/**
 * @file AppMultiply.h
 *
 * Declares the multiply Application class.
 */

#pragma once
#include "Application.h"
#include "MultiplyCrypter.h"
#include "AlphabetConverter.h"

namespace kg
{
	/**
	 * The multiply encryption application.
	 *
	 * @author Kay
	 * @date 11.12.2015
	 */

	class AppMultiply : public Application
	{
		/** The alphabet converter. */
		std::unique_ptr<AlphabetConverter> m_alphabetConverter = std::make_unique<StandartAlphabetConverter>();
		/** The multiply crypter. */
		MultiplyCrypter m_multiplyCrypter;

		/** The multiply label. */
		tgui::Label::Ptr m_multiplyLabel;
		/** The multiply input. */
		tgui::TextBox::Ptr m_multiplyInput;
		/** The multiply key input. */
		tgui::TextBox::Ptr m_multiplyKeyInput;
		/** The multiply output. */
		tgui::TextBox::Ptr m_multiplyOutput;

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