#pragma once
#include "stdafx.h"

namespace kg
{
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

	};
}