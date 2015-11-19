#pragma once
#include "Application.h"
#include "CaesarCrypter.h"
#include "AlphabetConverter.h"

namespace kg
{
	class AppCaesar : public Application
	{
		tgui::Label::Ptr m_caesarLabel;
		tgui::TextBox::Ptr m_caesarInput;
		tgui::Label::Ptr m_caesarOutput;

		std::unique_ptr<AlphabetConverter> m_alphabetConverter = std::make_unique<StandartAlphabetConverter>();
		CaesarCrypter m_caesarCrypter;

		void m_inputChanged();

	public:
		virtual void init() override;
	};
}