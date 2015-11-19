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

const kg::Restklasse::Val& kg::Restklasse::getModulo() const
{
	return m_mod;
}

kg::Restklasse kg::Restklasse::operator+( const Restklasse& rhs )const
{
	if( m_mod != rhs.m_mod )
		throw std::exception( "Cannot apply math to two Restklassen of different modulo" );

	return Restklasse( m_smallestIntegerRepresentation + rhs.m_smallestIntegerRepresentation, m_mod );
}

kg::Restklasse kg::Restklasse::operator-( const Restklasse& rhs )const
{
	if( m_mod != rhs.m_mod )
		throw std::exception( "Cannot apply math to two Restklassen of different modulo" );

	return Restklasse( m_smallestIntegerRepresentation - rhs.m_smallestIntegerRepresentation, m_mod );
}

kg::Restklasse kg::Restklasse::operator*( const Restklasse& rhs )const
{
	if( m_mod != rhs.m_mod )
		throw std::exception( "Cannot apply math to two Restklassen of different modulo" );

	return Restklasse( m_smallestIntegerRepresentation * rhs.m_smallestIntegerRepresentation, m_mod );
}

kg::Restklasse kg::Restklasse::operator*( const int& integer ) const
{
	return Restklasse( m_smallestIntegerRepresentation * integer, m_mod );
}

void kg::Restklasse::m_calculateSmallestIntegerRepresentation()
{
	while( m_smallestIntegerRepresentation < 0 )
		m_smallestIntegerRepresentation += m_mod;

	m_smallestIntegerRepresentation = m_smallestIntegerRepresentation%m_mod;
}