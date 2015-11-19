#include "AppCaesar.h"
using namespace std;
using namespace sf;
using namespace tgui;

void kg::AppCaesar::m_inputChanged( const std::string& val )
{ }

void kg::AppCaesar::init()
{
	m_caesarLabel = make_shared<Label>();
	m_caesarInput = make_shared<TextBox>();
	m_caesarOutput = make_shared<Label>();

	m_caesarLabel->setText( "Caesar Encryption" );

	m_caesarInput->setPosition( 0, 50 );

	m_caesarOutput->setText( "###" );
	m_caesarOutput->setPosition( 0, 300 );

	m_gui.add( m_caesarLabel );
	m_gui.add( m_caesarInput );
	m_gui.add( m_caesarOutput );
}