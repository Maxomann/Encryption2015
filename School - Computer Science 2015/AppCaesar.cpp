#include "AppCaesar.h"
using namespace std;
using namespace sf;
using namespace tgui;

void kg::AppCaesar::m_inputChanged()
{
	auto val = m_caesarInput->getText();

	//TODO: catch wrong input
	auto inputConverted = m_alphabetConverter->TextToRestklassenArray( val );

	auto encrypted = m_caesarCrypter.encrypt( inputConverted );
	auto decrypted = m_caesarCrypter.decrypt( encrypted );

	auto encryptedAsText = m_alphabetConverter->RestklassenArrayToString( encrypted );
	auto decryptedAsText = m_alphabetConverter->RestklassenArrayToString( decrypted );

	m_caesarOutput->setText( encryptedAsText + " ::: " + decryptedAsText );
}

void kg::AppCaesar::init()
{
	m_caesarLabel = make_shared<Label>();
	m_caesarInput = make_shared<TextBox>();
	m_caesarOutput = make_shared<TextBox>();

	m_caesarLabel->setText( "Caesar Encryption" );

	m_caesarInput->setPosition( 0, 50 );
	m_caesarInput->setText( "Input" );
	m_caesarInput->connect( "TextChanged", &AppCaesar::m_inputChanged, this );

	m_caesarOutput->setReadOnly( true );
	m_caesarOutput->setPosition( 0, 300 );

	m_gui.add( m_caesarLabel );
	m_gui.add( m_caesarInput );
	m_gui.add( m_caesarOutput );
}