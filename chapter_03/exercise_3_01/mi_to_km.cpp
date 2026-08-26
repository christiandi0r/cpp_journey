#include <iostream>

double miles_to_km(double mi)
{
    double kilometers = 0;
    
    kilometers = mi * 1.609344;
    
    return kilometers;
}

int main()
{
    double miles = 0;
    
    std::cout << "Enter miles: ";
    std::cin >> miles;
    
    std::cout << "Kilometers: " << miles_to_km(miles);

    return 0;
}
