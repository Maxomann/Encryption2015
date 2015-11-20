#include "Application.h"
using namespace std;
using namespace sf;

namespace kg
{
	Application::Application()
		: m_window( VideoMode( 800, 600 ), "Informatik Projekt" ),
		m_gui( m_window )
	{
		m_gui.setFont( "Data/DejaVuSans.ttf" );
	}

	void Application::run()
	{
		//application
		while( m_window.isOpen() )
		{
			sf::Event event;
			while( m_window.pollEvent( event ) )
			{
				if( event.type == sf::Event::Closed )
					m_window.close();
				if( Keyboard::isKeyPressed( Keyboard::Escape ) )
					m_window.close();

				// Pass the event to all the widgets
				m_gui.handleEvent( event );
			}

			m_window.clear( Color::Green );

			// Draw all created widgets
			m_gui.draw();

			m_window.display();
		}
	}
}