#include "Name_pairs.hpp"
#include <iostream>
#include <string>
#include <algorithm>

void Name_pairs::read_names()
{
    std::cout << "Enter name, input \"quit\" to end program. " << std::endl;
    
    std::cout << "\nEnter some names: ";
    
    for (std::string name; std::cin >> name;)
    {
        if (name == "quit") { break; }
        
        names.push_back(name);
    }
}

void Name_pairs::read_ages()
{
    double age = 0;
    
    for (int i = 0; i < names.size(); i++)
    {
        std::cout << "Enter " << names.at(i) << "'s " << "age: ";
        std::cin >> age;
        
        ages.push_back(age);
    }
}

void Name_pairs::print()
{
    for (int i = 0; i < names.size(); i++) { std::cout << names.at(i) << " " << ages.at(i) << std::endl; }
}

void Name_pairs::sort()
{
    std::vector<std::string> namesCopy = names;
    std::vector<double> agesCopy;
    
    std::sort(names.begin(), names.end());
    
    for (int i = 0; i < names.size(); i++)
    {
        for (int j = 0; j < namesCopy.size(); j++)
        {
            if (namesCopy.at(j) == names.at(i)) { agesCopy.push_back(ages.at(j)); }
        }
    }
    
    ages = agesCopy;
}
