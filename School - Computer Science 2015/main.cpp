#include "stdafx.h"
#include "Restklasse.h"
#include "Algorithm.h"
#include "Application.h"
#include "AppCaesar.h"
#include "Crypter.h"
#include "AppVigenere.h"

using namespace std;
using namespace sf;
using namespace tgui;
using namespace kg;

int main()
{
#ifndef _DEBUG
	try
	{
#endif
		shared_ptr<Application> app = make_shared<AppVigenere>();
		app->init();

		app->run();
#ifndef _DEBUG
	}
	catch( const std::exception& e )
	{
		//error
		cout << e.what() << endl;
		system( "pause" );
		return -1;
	}
#endif

	return 0;
}