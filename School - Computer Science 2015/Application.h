/**
 * @file Application.h
 *
 * Declares the Application class.
 */

#pragma once
#include "stdafx.h"

namespace kg
{
	/**
	 * An abstract application.
	 * Contains objects and methods every application uses
	 *
	 * @author Kay
	 * @date 11.12.2015
	 */

	class Application
	{
	protected:
		/** The window. */
		sf::RenderWindow m_window;
		/** The graphical user interface. */
		tgui::Gui m_gui;

	public:

		/**
		 * Default constructor.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 */

		Application();

		/**
		 * Initializes the application.
		 * Abstract function.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 */

		virtual void init() = 0;

		/**
		 * Runs this Application.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 */

		void run();
	};
}