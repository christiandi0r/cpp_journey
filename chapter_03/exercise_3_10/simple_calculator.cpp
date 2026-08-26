#include <iostream>

int main()
{
    double val1 = 0;
    double val2 = 0;
    
    std::string operation = " ";
    
    std::cout << "Input operation followed by two operands (e.g + 100 3.14): ";
    std::cin >> operation >> val1 >> val2;
    
    if (operation == "+")
    {
        std::cout << val1 << " + " << val2 << " = " << val1 + val2;
    }
    
    else if (operation == "-")
    {
        std::cout << val1 << " - " << val2 << " = " << val1 - val2;
    }
    
    else if (operation == "*")
    {
        std::cout << val1 << " x " << val2 << " = " << val1 * val2;
    }
    
    else if (operation == "/")
    {
        std::cout << val1 << " / " << val2 << " = " << val1 / val2;
    }
    
    return 0;
}
