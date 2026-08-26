#include <iostream>

int main()
{
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int half_dollars = 0;
    int dollars = 0;
    
    double total = 0;
    
    std::cout << "How many pennies do you have?: ";
    std::cin >> pennies;
    
    std::cout << "How many nickels do you have?: ";
    std::cin >> nickels;
    
    std::cout << "How many dimes do you have?: ";
    std::cin >> dimes;
    
    std::cout << "How many quarters do you have?: ";
    std::cin >> quarters;
    
    std::cout << "How many half-dollars do you have?: ";
    std::cin >> half_dollars;
    
    std::cout << "How many dollars do you have?: ";
    std::cin >> dollars;
    
    total = (dollars * 1.00) + (half_dollars * 0.50) + (quarters * 0.25) + (dimes * 0.10) + (nickels * 0.05) + (pennies * 0.01);
    
    std::cout << "\n";
    
    // Pennies
    if (pennies == 1)
    {
        std::cout << "You have 1 penny" << std::endl;
    }
    
    else
    {
        std::cout << "You have " << pennies << " pennies." << std::endl;
    }
    
    // Nickels
    if (nickels == 1)
    {
        std::cout << "You have 1 nickel" << std::endl;
    }
    
    else
    {
        std::cout << "You have " << nickels << " nickels." << std::endl;
    }
    
    // Dimes
    if (dimes == 1)
    {
        std::cout << "You have 1 dime" << std::endl;
    }
    
    else
    {
        std::cout << "You have " << dimes << " dimes." << std::endl;
    }
    
    // Quarters
    if (quarters == 1)
    {
        std::cout << "You have 1 quarter" << std::endl;
    }
    
    else
    {
        std::cout << "You have " << quarters << " quarters." << std::endl;
    }
    
    // Half-Dollars
    if (half_dollars == 1)
    {
        std::cout << "You have 1 half-dollar" << std::endl;
    }
    
    else
    {
        std::cout << "You have " << half_dollars << " half-dollars." << std::endl;
    }
    
    // Dollars
    if (dollars == 1)
    {
        std::cout << "You have 1 dollar" << std::endl;
    }
    
    else
    {
        std::cout << "You have " << dollars << " dollars." << std::endl;
    }
    
    std::cout << "\nYou have a total of $" << total;
    
    return 0;
}






