/**
 * @file Restklasse.h
 *
 * Declares the Restklasse class.
 */

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
		/** Defines the type of the contained value. */
		typedef int Val;

	private:
		/** The smallest integer representation. */
		Val m_smallestIntegerRepresentation;
		/** The modulo. */
		const Val m_mod;

		/**
		 * Calculates the smallest integer representation.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 */

		void m_calculateSmallestIntegerRepresentation();

	public:

		/**
		 * Constructor.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @param value The value.
		 * @param mod   The modifier.
		 */

		Restklasse( Val value, Val mod );

		/**
		 * Gets smallest integer representation.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @return The smallest integer representation.
		 */

		const Val& getSmallestIntegerRepresentation()const;

		/**
		 * Gets the modulo.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @return The modulo.
		 */

		const Val& getModulo()const;

		/////////////////////////////////////////////////////////// MATH OPERATORS

		/**
		 * Addition operator.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @param rhs The right hand side.
		 *
		 * @return The result of the operation.
		 */

		Restklasse operator+( const Restklasse& rhs )const;

		/**
		 * Addition operator.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @param integer The integer. Is internally converted to Restklasse( integer, this->m_mod ).
		 *
		 * @return The result of the operation.
		 */

		Restklasse operator+( const int& integer )const;

		/**
		 * Subtraction operator.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @param rhs The right hand side.
		 *
		 * @return The result of the operation.
		 */

		Restklasse operator-( const Restklasse& rhs )const;

		/**
		 * Subtraction operator.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @param integer The integer. Is internally converted to Restklasse( integer, this->m_mod ).
		 *
		 * @return The result of the operation.
		 */

		Restklasse operator-( const int& integer )const;

		/**
		 * Multiplication operator.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @param rhs The right hand side.
		 *
		 * @return The result of the operation.
		 */

		Restklasse operator*( const Restklasse& rhs )const;

		/**
		 * Multiplication operator.
		 *
		 * @author Kay
		 * @date 11.12.2015
		 *
		 * @param integer The integer. Is internally converted to Restklasse( integer, this->m_mod ).
		 *
		 * @return The result of the operation.
		 */

		Restklasse operator*( const int& integer )const;
	};
}