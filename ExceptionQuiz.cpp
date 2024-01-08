// ExceptionQuiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdexcept>
#include <exception>

class Fraction
{
    int m_numerator{0};
    int m_denominator{1};

public:
    Fraction(int numerator=0, int denominator=1)
        :m_numerator{ numerator }, m_denominator{ denominator }
    {
        if (denominator == 0)
            throw std::runtime_error("Invalid denominator");
    }

    friend std::ostream& operator<<(std::ostream& out, const Fraction& f)
    {
        out << f.m_numerator << '/' << f.m_denominator;
        return out;
    }
};
int main()
{
    std::cout << "Enter the numerator : ";
    int num{};
    std::cin >> num;

    std::cout << "Enter the denominator : ";
    int den{};
    std::cin >> den;

    try
    {
        Fraction f{ num,den };
        std::cout << f << '\n';
        
    }
    catch (std::exception& exception)
    {
        std::cout << exception.what() << '\n';
    }

    return 0;
}

