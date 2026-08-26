#include <iostream>

void sort_three_nums(int num1, int num2, int num3)
{
    if ((num1 <= num2 && num1 <= num3) && (num2 <= num3))
    {
        std::cout << num1 << ", " << num2 << ", " << num3;
    }
    
    else if ((num1 <= num2 && num1 <= num3) && (num2 >= num3))
    {
        std::cout << num1 << ", " << num3 << ", " << num2;
    }
    
    else if ((num2 <= num1 && num2 <= num3) && (num1 <= num3))
    {
        std::cout << num2 << ", " << num1 << ", " << num3;
    }
    
    else if ((num2 <= num1 && num2 <= num3) && (num1 >= num3))
    {
        std::cout << num2 << ", " << num3 << ", " << num1;
    }
    
    else if ((num3 <= num1 && num3 <= num2) && (num1 <= num2))
    {
        std::cout << num3 << ", " << num1 << ", " << num2;
    }
    
    else if ((num3 <= num1 && num3 <= num2) && (num1 >= num2))
    {
        std::cout << num3 << ", " << num2 << ", " << num1;
    }
}

int main()
{
    int val1, val2, val3;
    
    std::cout << "Enter three numbers so we can sort them in ascending order: ";
    std::cin >> val1 >> val2 >> val3;
    
    sort_three_nums(val1, val2, val3);
    
    return 0;
}
