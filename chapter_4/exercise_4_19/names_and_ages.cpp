#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> names;
    std::vector<int> ages;
    
    std::string name;
    int age = 0;

    std::cout << "Enter name and age (e.g. Joe 17), input \"NoName 0\" to end program. " << std::endl;
    std::cout << "Enter: ";
    std::cin >> name >> age;

    names.push_back(name);
    ages.push_back(age);

    while (name != "NoName" && age != 0)
    {
        std::cout << "Enter name and age (e.g Joe 17): ";
        std::cin >> name >> age;

        names.push_back(name);
        ages.push_back(age);
    }


    
    for (const auto& i : names) { std::cout << i << " "; }
    
    
    
    return 0;
}
