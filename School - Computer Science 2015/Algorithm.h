#pragma once
#include "stdafx.h"

namespace kg
{
	template<class T>
	T euclidean_algorithm( T a, T b )
	{
		while( a != b )
		{
			if( a > b )
				a = a - b;
			else
				b = b - a;
		}
		return a;
	}

	template<class T>
	std::tuple<T, T, T> extended_euclidean_algorithm( const T& a, const T& b )
	{

	}
}