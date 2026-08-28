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

    int userChoice = 0;
    
    std::cout << "Choose an option below:" << std::endl;
    std::cout << "1. Covert celsus to kelvin" << std::endl;
    std::cout << "2. Convert kelvin to celius" << std::endl;
    std::cout << "3. Quit program" << std::endl;

    while (userChoice != 3)
    {
        if (userChoice == 1)
        {
            std::cout << "Input celsius value: ";
            std::cin >> c;
            
            ctok(c);
        }
        
        else if (userChoice == 2)
        {
            std::cout << "Input kelvin value: ";
            std::cin >> k;
            
            ktoc(k);
        }
        
        std::cout << "\nChoose option: ";
        std::cin >> userChoice;
        std::cout << "\n";
    }

    return 0;
}
