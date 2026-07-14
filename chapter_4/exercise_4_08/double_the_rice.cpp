#include <iostream>

int main()
{
    int rice = 1;
    
    int thousand_rice = 0;
    int million_rice = 0;
    int billion_rice = 0;
    
    for (int i = 1; i < 65; i++)
    {
        if (i == 1) { std::cout << "Grains of rice [Square: " << i << "]: " << rice << std::endl; }
        
        else { std::cout << "Grains of rice [Square: " << i << "]: " << (rice *= 2) << std::endl; }
        
        if (rice >= 1000 && rice < 1050) { thousand_rice = i; }
       
        if (rice >= 1000000 && rice < 1050000) { million_rice = i; }
        
        if (rice >= 1000000000 && rice < 2000000000) { billion_rice = i; }
    }
    
    std::cout << "\nYou need at least " << thousand_rice << " squares to hold a thousand rice." << std::endl;
    std::cout << "\nYou need at least " << million_rice << " squares to hold a million rice." << std::endl;
    std::cout << "\nYou need at least " << billion_rice << " squares to hold a million rice." << std::endl;

    return 0;
}
