#include "person.hpp"

#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<Person> people;
    
    std::string name;
    int age = 0;
    
    std::cout << "Enter name and age (e.g. Joe 17), input \"NoName 0\" to end program. " << std::endl;
    std::cout << "Enter name and age: ";
    std::cin >> name >> age;

    people.push_back(Person(name, age));
    
    while (name != "NoName" && age != 0)
    {
        std::cout << "Enter name and age: ";
        std::cin >> name >> age;

        people.push_back(Person(name, age));
    }

    people.pop_back();
    
    for (int i = 0; i < people.size(); i++) { std::cout << people.at(i).getName() << " " << people.at(i).getAge() << std::endl; }
    
    return 0;
}
