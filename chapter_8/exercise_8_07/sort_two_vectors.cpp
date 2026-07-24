#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void print_unsorted(const std::vector<std::string>& names, const std::vector<int>& ages)
{
    for (int i = 0; i < names.size(); i++)
    {
        std::cout << names.at(i) << " " << ages.at(i) << std::endl;
    }
}

void print_sorted(const std::vector<std::string>& names, const std::vector<int>& ages)
{
    int max_age = ages.at(0);
    
    for (const auto& age : ages) 
    {
        if (age > max_age) { max_age = age; }
    }
    
    std::vector<int> ageTable(max_age + 1);
    
    for (const auto& i : ages) { ageTable[i]++; }
    
    for (int i = 0; i < ageTable.size(); i++)
    {
        std::cout << ageTable.at(i) << " ";
        
        if (ageTable.at(i) > 0)
        {
            for (int i = 0; )
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
