#pragma once
#include "Application.h"
#include "VigenereCrypter.h"
#include "AlphabetConverter.h"

namespace kg
{
	class AppVigenere : public Application
	{
		std::unique_ptr<AlphabetConverter> m_alphabetConverter = std::make_unique<StandartAlphabetConverter>();
		VigenereCrypter m_vigenereCrypter;

		tgui::Label::Ptr m_vigenereLabel;
		tgui::TextBox::Ptr m_vigenereInput;
		tgui::TextBox::Ptr m_vigenereKeyInput;
		tgui::TextBox::Ptr m_vigenereOutput;

		void m_inputChanged();

	public:
		virtual void init() override;
	};
}