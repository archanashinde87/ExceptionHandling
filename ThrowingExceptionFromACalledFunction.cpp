// ThrowingExceptionFromACalledFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>

double mySqrt(double x)
{
    if (x < 0.0)
        throw "Can not take sqrt of negative number";
    return std::sqrt(x);
}
int main()
{
    std::cout << "Enter a number: ";
    double x{};
    std::cin >> x;

    try 
    {
        double d = mySqrt(x);
        std::cout << "The sqrt of " << x << " is " << d << '\n';
    }
    catch(const char* exception)
    {
        std::cout << "Error: " << exception << '\n';
    }

    return 0;
}

