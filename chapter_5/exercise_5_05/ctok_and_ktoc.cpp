#include <iostream>

double ctok(double c)
{
    double k = c + 273.15;

    if (c <= -273.15) { std::cout << "\nError please try again." << std::endl; }
    else { std::cout << "\nKelvin value: " << k << std::endl; }
     
    return k;
}

double ktoc(double k)
{
    double c = k - 273.15;
    
    std::cout << "Celsius value: " << c << std::endl;
    
    return c;
}

int main()
{
    double c = 0, k = 0;

    char userChoice = ' ';

    while (userChoice != 'n' && userChoice != 'N')
    {
        //std::cout << "Input celsius value: ";
        //std::cin >> c;
        
        std::cout << "Input kelvin value: ";
        std::cin >> k;

        //ctok(c);
        ktoc(k);

        std::cout << "\nWould you like to continue (y/n): ";
        std::cin >> userChoice;
        std::cout << "\n";
    }

    return 0;
}
