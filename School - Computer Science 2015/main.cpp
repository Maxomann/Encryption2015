#include "stdafx.h"
#include "Restklasse.h"
#include "Algorithm.h"
#include "Application.h"
#include "AppCaesar.h"
#include "Crypter.h"

using namespace std;
using namespace sf;
using namespace tgui;
using namespace kg;

int main()
{
	std::shared_ptr<Application> app = make_shared<AppCaesar>();
	app->init();

	try
	{
		app->run();
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