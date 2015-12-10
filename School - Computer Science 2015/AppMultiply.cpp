#include "AppMultiply.h"
using namespace std;
using namespace sf;
using namespace tgui;

namespace kg
{
	void AppMultiply::m_inputChanged()
	{
		auto val = m_multiplyInput->getText();
		auto key = m_multiplyKeyInput->getText();

		auto inputConverted = m_alphabetConverter->TextToRestklassenArray( val );
		int keyConverted = atoi( key.toAnsiString().c_str() );

		if( keyConverted < 0 )
		{
			keyConverted = 1;
			cout << "ERROR: Key must be bigger than 0" << endl;
		}

		Restklasse keyAsRestklasse( keyConverted, m_alphabetConverter->getAlphabetSize() );
		if( m_multiplyCrypter.isKeyUnambiguous( keyAsRestklasse ) )
		{
			auto encrypted = m_multiplyCrypter.encrypt( keyAsRestklasse, inputConverted );
			auto decrypted = m_multiplyCrypter.decrypt( keyAsRestklasse, encrypted );

			auto encryptedAsText = m_alphabetConverter->RestklassenArrayToString( encrypted );
			auto decryptedAsText = m_alphabetConverter->RestklassenArrayToString( decrypted );

			m_multiplyOutput->setText( encryptedAsText + " ::: " + decryptedAsText );
		}
		else
		{
			cout << "ERROR: gcd of key and AlphabetSize(" + to_string( m_alphabetConverter->getAlphabetSize() ) + ") must be 1" << endl;
		}
	}

	void AppMultiply::init()
	{
		m_multiplyLabel = make_shared<Label>();
		m_multiplyInput = make_shared<TextBox>();
		m_multiplyKeyInput = make_shared<TextBox>();
		m_multiplyOutput = make_shared<TextBox>();

		m_multiplyLabel->setText( "Multiply Encryption" );

		m_multiplyInput->setPosition( 0, 50 );
		m_multiplyInput->setText( "Input" );
		m_multiplyInput->connect( "TextChanged", &AppMultiply::m_inputChanged, this );

		m_multiplyKeyInput->setPosition( 400, 50 );
		m_multiplyKeyInput->setText( "Key (Number)" );
		m_multiplyKeyInput->connect( "TextChanged", &AppMultiply::m_inputChanged, this );

		m_multiplyOutput->setReadOnly( true );
		m_multiplyOutput->setPosition( 0, 300 );

		m_gui.add( m_multiplyLabel );
		m_gui.add( m_multiplyInput );
		m_gui.add( m_multiplyKeyInput );
		m_gui.add( m_multiplyOutput );
	}
}