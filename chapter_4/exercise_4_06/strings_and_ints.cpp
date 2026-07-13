#include <iostream>
#include <vector>

std::string string_to_int(std::vector<std::string>& vec)
{
    int input = 0;
    
    std::cout << "Enter a number between 0 and 9 and we will spell it out: ";
    std::cin >> input;
    
    std::cout << "\n";
    
    for (int i = 0; i < vec.size(); i++)
    {
        if (input == i) { std::cout << vec.at(i) << std::endl; }
    }
    
    return vec.at(input);
}

int int_to_string(std::vector<std::string>& vec)
{
    int i = 0;
    
    std::string userNum;
    
    std::cout << "Enter a number spelled-out between 0 and 9 and I will give you the integer: ";
    std::cin >> userNum;
    
    std::cout << "\n";
    
    for (i = 0; i < vec.size(); i++)
    {
        if (userNum == vec.at(i)) { std::cout << i << std::endl; }
    }
    
    return i;
}

int main()
{
    std::vector<std::string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    string_to_int(numbers);
    
    std::cout << "\n";
    
    int_to_string(numbers);
    
    return 0;
}
