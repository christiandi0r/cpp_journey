#include <iostream>
#include <vector>

int string_to_int(std::vector<std::string>& vec, std::string input)
{
    int i = 0;
    
    for (i = 0; i < vec.size(); i++)
    {
        if (input == vec.at(i)) { return i; }  
    }

    return i;
}

int convert_to_int(std::vector<std::string>& vec, std::vector<std::string>& vec2, std::string num)
{
    int val = 0;
    
    if (num == "0" || num == "1" || num == "2" || num == "3" || num == "4" ||  num == "5" || num == "6" || num == "7" || 
        num == "8" || num == "9") 
    {
        val = string_to_int(vec2, num);
    }

    else { val = string_to_int(vec, num); }

    return val;
}

int main()
{
    std::vector<std::string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    std::vector<std::string> numbers2 = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    std::string num1 = " ";
    std::string num2 = " ";
    
    int val1 = 1;
    int val2 = 1;
    
    char operation = ' ';

    std::cout << "Welcome to Christian's calculator. Enter what you want to compute like this (e.g. 9 x 4, 10 + 6)." << std::endl;
    std::cout << "Enter \"q q q\" to leave the program." << std::endl;
   
    while (num1 != "q" && num2 != "q" && operation != 'q')
    {
        std::cout << "\nEnter: ";
        std::cin >> num1 >> operation >> num2;

        if (num1 == "q" && num2 == "q" && operation == 'q') { break; }
        
        val1 = convert_to_int(numbers, numbers2, num1);
        val2 = convert_to_int(numbers, numbers2, num2);

        if (val1 < 0 || val2 < 0 || val1 >= 10 || val2 >= 10)
        {
            std::cout << "Input a number from 0 to 9." << std::endl;
            
            std::cout << "\nEnter: ";
            std::cin >> num1 >> operation >> num2;

            val1 = convert_to_int(numbers, numbers2, num1);
            val2 = convert_to_int(numbers, numbers2, num2);  
        }
        
        if (operation == '+') { std:: cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2 << std:: endl; }

        else if (operation == '-') { std:: cout << "The difference of " << val1 << " and " << val2 << " is " << val1 - val2 << std:: endl; }

        else if (operation == 'x' || operation == '*') { std:: cout << "The product of " << val1 << " and " << val2 << " is " << val1 * val2 << std:: endl; }

        else if (operation == '/') { std:: cout << "The division of " << val1 << " and " << val2 << " is " << val1 / val2 << std:: endl; }
    
        else { std::cout << "Invalid operation. Please try again."; }
    }
    
    return 0;
}
