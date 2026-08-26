#include <iostream>

int main()
{
    double num1 = 0.0;
    double num2 = 0.0;
    char operation = ' ';

    std::cout << "Welcome to Christian's calculator. Enter what you want to compute like this (e.g. 9 x 4, 10 + 6)." << std::endl;
    std::cout << "Enter: ";
    std::cin >> num1 >> operation >> num2;

    if (operation == '+') { std:: cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2; }

    else if (operation == '-') { std:: cout << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2; }

    else if (operation == 'x' || operation == '*') { std:: cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2; }

    else if (operation == '/') { std:: cout << "The division of " << num1 << " and " << num2 << " is " << num1 / num2; }
    
    else { std::cout << "Invalid operation. Please try again."; }

    return 0;
}
