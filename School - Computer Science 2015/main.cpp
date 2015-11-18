#include "stdafx.h"
using namespace std;
using namespace sf;
using namespace tgui;

int main()
{
	RenderWindow window( VideoMode( 800, 600 ), "Informatik Projekt" );
	Gui gui( window );

	gui.setFont( "Data/DejaVuSans.ttf" );

	try
	{
		//application
		while( window.isOpen() )
		{
			sf::Event event;
			while( window.pollEvent( event ) )
			{
				if( event.type == sf::Event::Closed )
					window.close();

				// Pass the event to all the widgets
				gui.handleEvent( event );
			}

			window.clear();

			// Draw all created widgets
			gui.draw();

			window.display();
		}
	}
	catch( const std::exception& e )
	{
		//error
		cout << e.what() << endl;
		system( "pause" );
		return -1;
	}

	return 0;
}