#include <iostream>
#include <vector>

int string_to_int(std::vector<std::string>& vec, std::string input)
{
    int i = 0;
    
    for (i = 0; i < vec.size(); i++)
    {
        if (input == vec.at(i)) { std::cout << i << std::endl; }
    }
    
    return i;
}


int main()
{
    std::vector<std::string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    std::string num1;
    std::string num2;
    
    int val1 = 0;
    int val2 = 0;
    
    char operation = ' ';

    std::cout << "Welcome to Christian's calculator. Enter what you want to compute like this (e.g. 9 x 4, 10 + 6)." << std::endl;
    std::cout << "Enter: ";
    std::cin >> num1 >> operation >> num2;
    
    while ((num1 > "0" && num1 <= "9") && (num2 > "0" && num2 <= "9"))
    {
        val1 = string_to_int(numbers, num1);
        val2 = string_to_int(numbers, num2);
        
        if (operation == '+') { std:: cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2 << std:: endl; }

        //else if (operation == '-') { std:: cout << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2 << std:: endl; }

        //else if (operation == 'x' || operation == '*') { std:: cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << std:: endl; }

        //else if (operation == '/') { std:: cout << "The division of " << num1 << " and " << num2 << " is " << num1 / num2 << std:: endl; }
    
        else { std::cout << "Invalid operation. Please try again."; }
        
        std::cout << "\nEnter: ";
        std::cin >> num1 >> operation >> num2;
    
    }
    
    
    return 0;
}
