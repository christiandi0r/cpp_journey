#include <iostream>

int main()
{
    std::string userVal = " ";
    
    std::cout << "Type out a number between 0-4 (e.g. three): ";
    std::cin >> userVal;
    
    if (userVal == "zero" || userVal == "Zero" || userVal == "ZERO")
    {
        std::cout << "0";
    }
    
    else if (userVal == "one" || userVal == "One" || userVal == "ONE")
    {
        std::cout << "1";
    }
    
    else if (userVal == "two" || userVal == "Two" || userVal == "TWO")
    {
        std::cout << "2";
    }
    
    else if (userVal == "three" || userVal == "Three" || userVal == "THREE")
    {
        std::cout << "3";
    }
    
    else if (userVal == "four" || userVal == "Four" || userVal == "FOUR")
    {
        std::cout << "4";
    }
    
    else
    {
        std::cout << "I don't recognize that number.";
    }
    
    return 0;
}
