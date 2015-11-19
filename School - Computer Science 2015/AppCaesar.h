#pragma once
#include "Application.h"

namespace kg
{
	class AppCaesar : public Application
	{
		tgui::Label::Ptr m_caesarLabel;
		tgui::TextBox::Ptr m_caesarInput;
		tgui::Label::Ptr m_caesarOutput;

		void m_inputChanged( const std::string& val );

	public:
		virtual void init() override;

	};
}