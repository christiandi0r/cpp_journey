#include <iostream>

int main()
{
    int num = 0;
    
    std::cout << "Input a number so we can determine if it is odd/even: ";
    std::cin >> num;
    
    if (num % 2 == 0)
    {
        std::cout << "The value " << num << " is even.";
    }
    
    else
    {
        std::cout << "The value " << num << " is odd.";
    }
    
    
    return 0;
}
