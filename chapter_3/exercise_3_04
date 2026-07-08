#include <iostream>
#include <numeric>

void compare(int num1, int num2)
{
    if (num1 > num2)
    {
        std::cout << "\nValue 1 is larger" << std::endl;
    }
    
    else
    {
        std::cout << "\nValue 2 is larger" << std::endl;
    }
}

void sum(int num1, int num2)
{
    std::cout << "The sum of " << num1  << " and " << num2 << " is: " << num1 + num2 << std::endl;
}

void difference(int num1, int num2)
{
    std::cout << "The difference of " << num1  << " and " << num2 << " is: " << num1 - num2 << std::endl;
}

void product(int num1, int num2)
{
    std::cout << "The product of " << num1  << " and " << num2 << " is: " << num1 * num2 << std::endl;
}

void ratio(int num1, int num2)
{
    int common_divisor = std::gcd(num1, num2);
    
    std::cout << "The ratio of " << num1  << " and " << num2 << " is: " << num1 / common_divisor << " : " << num2 / common_divisor << std::endl;
}

int main()
{
    int val1 = 0;
    int val2 = 0;
    
    std::cout << "Enter the first value: ";
    std::cin >> val1;
    
    std::cout << "Enter the second value: ";
    std::cin >> val2;
    
    compare(val1, val2);
    sum(val1, val2);
    difference(val1, val2);
    product(val1, val2);
    ratio(val1, val2);
    
    return 0;
}






