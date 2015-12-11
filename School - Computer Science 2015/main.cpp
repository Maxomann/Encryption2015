#include "stdafx.h"
#include "Restklasse.h"
#include "Algorithm.h"
#include "Application.h"
#include "AppCaesar.h"
#include "Crypter.h"
#include "AppVigenere.h"
#include "AppMultiply.h"

using namespace std;
using namespace sf;
using namespace tgui;
using namespace kg;

//TODO make encryption mode selectable

int main()
{
	while( true )
	{
		cout << "Select encryption mode:\n0=Caesar\n1=Vigenere\n2=Multiply\nOther=Quit" << endl;
		int mode;
		cin >> mode;

		shared_ptr<Application> app;

		switch( mode )
		{
		case 0:
			app = make_shared<AppCaesar>();
			break;
		case 1:
			app = make_shared<AppVigenere>();
			break;
		case 2:
			app = make_shared<AppMultiply>();
			break;
		default:
			return 0;
		}

#ifndef _DEBUG
		try
		{
#endif
			app->init();

			app->run();
#ifndef _DEBUG
		}
		catch( const std::exception& e )
		{
			//error
			cout << "-----------" << endl << "CRITICAL ERROR:" << endl << e.what() << endl << "-----------" << endl;
		}
#endif
	}

	return 0;
}