// StdException.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <exception> // for std::exception
#include <limits>
#include <cstddef> // for std::size_t

int main()
{
	try
	{
		std::string s;
		s.resize(std::numeric_limits<std::size_t>::max());// will trigger a std::length_error or allocation exception
	}
	catch(const std::exception& exception)
	{
		std::cerr << "Standard exception : " << exception.what() << '\n';
	}
	return 0;
}

