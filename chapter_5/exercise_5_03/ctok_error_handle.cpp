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

    while (c >= -273.15)
    {
        std::cout << "Input celsius value: ";
        std::cin >> c;

        if (c <= -273.15) { std::cout << "Error please try again." << std::endl; }
        
        else 
        { 
            k = ctok(c);

            std::cout << "Kelvin value: " << k << std::endl;
        }
        
    }


    return 0;
}
