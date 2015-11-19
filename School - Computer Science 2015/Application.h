#pragma once
#include "stdafx.h"

namespace kg
{
	class Application
	{
	protected:
		sf::RenderWindow m_window;
		tgui::Gui m_gui;

	public:
		Application();

		virtual void init() = 0;
		void run();
	};
}