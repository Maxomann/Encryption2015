#pragma once
#pragma once
#include "Application.h"
#include "MultiplyCrypter.h"
#include "AlphabetConverter.h"

namespace kg
{
	class AppMultiply : public Application
	{
		std::unique_ptr<AlphabetConverter> m_alphabetConverter = std::make_unique<StandartAlphabetConverter>();
		MultiplyCrypter m_multiplyCrypter;

		tgui::Label::Ptr m_multiplyLabel;
		tgui::TextBox::Ptr m_multiplyInput;
		tgui::TextBox::Ptr m_multiplyKeyInput;
		tgui::TextBox::Ptr m_multiplyOutput;

		void m_inputChanged();

	public:
		virtual void init() override;
	};
}