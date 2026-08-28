#include <iostream>

double ctok(double c)
{
    double k = c + 273.15;
    
    return k;
}

int main()
{
    double c = 0;
    double k = 0;

    std::cout << "Input celsius value: ";
    std::cin >> c;

    k = ctok(c);

    std::cout << "Kelvin value: " << k << std::endl;

    return 0;
}
