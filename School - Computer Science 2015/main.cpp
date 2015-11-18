#include "stdafx.h"
using namespace std;

int main()
{
	try
	{
		//application
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