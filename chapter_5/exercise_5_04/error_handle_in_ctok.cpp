#include <iostream>

double ctok(double c)
{
    double k = c + 273.15;

    if (c <= -273.15) 
    {  
        std::cout << "\nError please try again." << std::endl;
    }

    else
    {
        std::cout << "\nKelvin value: " << k << std::endl;
    }
        
    return k;
}

int main()
{
    double c = 0, k = 0;

    char userChoice = ' ';

    while (userChoice != 'n' && userChoice != 'N')
    {
        std::cout << "Input celsius value: ";
        std::cin >> c;

        ctok(c);

        std::cout << "\nWould you like to continue (y/n): ";
        std::cin >> userChoice;
        std::cout << "\n";
    }

    return 0;
}
