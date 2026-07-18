#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> names;
    std::vector<int> ages;
    
    std::string name;
    int age = 0;

    std::cout << "Enter name and age (e.g. Joe 17), input \"NoName 0\" to end program. " << std::endl;
    std::cout << "Enter name and age: ";
    std::cin >> name >> age;

    names.push_back(name);
    ages.push_back(age);

    while (name != "NoName" && age != 0)
    {
        std::cout << "Enter name and age: ";
        std::cin >> name >> age;

        names.push_back(name);
        ages.push_back(age);
    }

    names.pop_back();
    ages.pop_back();
    
    for (int i = 0; i < names.size(); i++) { std::cout << names.at(i) << " " << ages.at(i) << std::endl; }
    
    
    
    
    return 0;
}
