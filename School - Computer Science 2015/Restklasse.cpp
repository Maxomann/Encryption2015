#include "Restklasse.h"
using namespace kg;


kg::Restklasse::Restklasse( Val value, Val mod )
	:m_smallestIntegerRepresentation( value ),
	m_mod( mod )
{
	m_calculateSmallestIntegerRepresentation();
}

const kg::Restklasse::Val& kg::Restklasse::getSmallestIntegerRepresentation() const
{
	return m_smallestIntegerRepresentation;
}

void kg::Restklasse::m_calculateSmallestIntegerRepresentation()
{
	while( m_smallestIntegerRepresentation < 0 )
		m_smallestIntegerRepresentation += m_mod;

	m_smallestIntegerRepresentation = m_smallestIntegerRepresentation%m_mod;

}
