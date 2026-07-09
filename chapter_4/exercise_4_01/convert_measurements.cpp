#include <iostream>
#include <string>

int main()
{
    char userInput = ' ';
    
    double num = 0;
    double smallest = 0;
    double largest = 0;
    
    std::string unit = " ";

    std::cout << "Enter a number with unit: ";
    std::cin >> num >> unit;
    
    std::cout << "\nYou entered " << num << "." << std::endl;
    
    smallest = num;
    largest = num;
    
    std::cout << "\nPress any key to continue or '|' to terminate program: ";
    std::cin >> userInput;
    
    while (userInput != '|')
    {
        std::cout << "\nEnter a number with unit: ";
        std::cin >> num >> unit;
    
        std::cout << "\nYou entered " << num << "." << std::endl;
        
        if (num < smallest)
        {
            smallest = num;
        }
        
        else if (num > largest)
        {
            largest = num;
        }
        
        std::cout << "\nThe smallest so far is: " << smallest << std::endl;
        std::cout << "The largest so far is: " << largest << std::endl;
        
        std::cout << "\nPress any key to continue or '|' to terminate program: ";
        std::cin >> userInput;
    }

    return 0;
}
