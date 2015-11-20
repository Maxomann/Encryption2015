#pragma once
#include "stdafx.h"

namespace kg
{
	/*
		TODO: Use Restklassen Template for modulo.
		So Restklasse<7> would be modulo 7
	*/
	class Restklasse
	{
	public:
		typedef int Val;

	private:
		Val m_smallestIntegerRepresentation;
		const Val m_mod;

		void m_calculateSmallestIntegerRepresentation();

	public:
		Restklasse( Val value, Val mod );

		const Val& getSmallestIntegerRepresentation()const;
		const Val& getModulo()const;

		// Math operators
		Restklasse operator+( const Restklasse& rhs )const;
		Restklasse operator+( const int& integer )const;//integer will be converted to Restklasse( integer, this->m_mod )
		Restklasse operator-( const Restklasse& rhs )const;
		Restklasse operator-( const int& integer )const;//integer will be converted to Restklasse( integer, this->m_mod )
		Restklasse operator*( const Restklasse& rhs )const;
		Restklasse operator*( const int& integer )const;//integer will be converted to Restklasse( integer, this->m_mod )
	};
}