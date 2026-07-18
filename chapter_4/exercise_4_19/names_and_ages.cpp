#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> names;
    std::vector<int> ages;
    
    std::string name;
    int age = 0;

    std::cout << "Enter name and age (e.g Joe 17): ";
    std::cin >> name >> age;

    while (name != "NoName" && age != 0)
    {
        std::cout << "Enter name and age (e.g Joe 17): ";
        std::cin >> name >> age;
    }
    
    
    
    
    
    return 0;
}
