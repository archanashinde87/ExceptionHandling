// ExceptionsAndInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Base 
{
public:
    Base() {}
};

class Derived : public Base
{
public:
    Derived() {}
};
int main()
{
    try
    {
        throw Derived();
    }
    catch (const Derived& derived)
    {
        std::cerr << "Caught Derived\n";
    }
    catch (const Base& base)
    {
        std::cerr << "Caught Base\n";
    }

    return 0;
}

