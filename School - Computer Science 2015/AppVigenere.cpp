#include "AppVigenere.h"
using namespace std;
using namespace sf;
using namespace tgui;

namespace kg
{
	void AppVigenere::m_inputChanged()
	{
		auto val = m_vigenereInput->getText();
		auto key = m_vigenereKeyInput->getText();

		auto inputConverted = m_alphabetConverter->TextToRestklassenArray( val );
		auto keyConverted = m_alphabetConverter->TextToRestklassenArray( key );

		if( keyConverted.size() == 0 )
			return;

		auto encrypted = m_vigenereCrypter.encrypt( keyConverted, inputConverted );
		auto decrypted = m_vigenereCrypter.decrypt( keyConverted, encrypted );

		auto encryptedAsText = m_alphabetConverter->RestklassenArrayToString( encrypted );
		auto decryptedAsText = m_alphabetConverter->RestklassenArrayToString( decrypted );

		m_vigenereOutput->setText( encryptedAsText + " ::: " + decryptedAsText );
	}

	void AppVigenere::init()
	{
		m_vigenereLabel = make_shared<Label>();
		m_vigenereInput = make_shared<TextBox>();
		m_vigenereKeyInput = make_shared<TextBox>();
		m_vigenereOutput = make_shared<TextBox>();

		m_vigenereLabel->setText( "Vigenere Encryption" );

		m_vigenereInput->setPosition( 0, 50 );
		m_vigenereInput->setText( "Input" );
		m_vigenereInput->connect( "TextChanged", &AppVigenere::m_inputChanged, this );

		m_vigenereKeyInput->setPosition( 400, 50 );
		m_vigenereKeyInput->setText( "Key" );
		m_vigenereKeyInput->connect( "TextChanged", &AppVigenere::m_inputChanged, this );

		m_vigenereOutput->setReadOnly( true );
		m_vigenereOutput->setPosition( 0, 300 );

		m_gui.add( m_vigenereLabel );
		m_gui.add( m_vigenereInput );
		m_gui.add( m_vigenereKeyInput );
		m_gui.add( m_vigenereOutput );
	}
}