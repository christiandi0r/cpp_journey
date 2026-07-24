#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void print_unsorted(const std::vector<std::string>& names, const std::vector<int>& ages)
{
    for (int i = 0; i < names.size(); i++) { std::cout << names.at(i) << " " << ages.at(i) << std::endl; }
}

void print_sorted(const std::vector<std::string>& names, const std::vector<int>& ages)
{
    int max_age = ages.at(0);
    
    for (const auto& age : ages) 
    {
        if (age > max_age) { max_age = age; }
    }
    
    std::vector<std::string> ageTable(max_age + 1);
    std::vector<std::string> sortedNames = names;

    for (int i = 0; i < ages.size(); i++) { ageTable[ages.at(i)] = names.at(i); }

    sortedNames.resize(max_age + 1);

    for (auto& name : sortedNames)
    {
        if (name == "") { name = "~"; }
    }

    std::sort(sortedNames.begin(), sortedNames.end());

    for (int i = 0; i < sortedNames.size(); i++)
    {
        if (sortedNames.at(i) != "~") 
        { 
            std::cout << sortedNames.at(i) << " age: ";
            
            for (int j = 0; j < ageTable.size(); j++)
            {
                if (sortedNames.at(i) == ageTable.at(j)) { std::cout << j << std::endl; }
            }
        }
    }
}

int main()
{
    std::vector<std::string> names;
    std::vector<int> ages;
    
    int age = 0;
    
    std::cout << "Enter some names: ";
    for (std::string name; std::cin >> name;)
    { 
        if (name == "|") { break; }
        
        names.push_back(name); 
    }
    
    std::cout << "\n";
    
    for (int i = 0; i < names.size(); i++)
    {
        std::cout << "Enter " << names.at(i) << "'s " << "age: ";
        std::cin >> age;
        
        ages.push_back(age);
    }
    
    std::cout << "\n";
    
    print_sorted(names, ages);
    
    return 0;
}
