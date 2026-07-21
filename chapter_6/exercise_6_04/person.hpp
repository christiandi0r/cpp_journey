#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person
{
    private:
        
        std::string _name;
        int _age;

    public:

        // Constructors
        Person();
        Person(const std::string& name, int age);

        // Functions for person's name
        void setName(const std::string& name);
        std::string getName() const;

        // Functions for person's age
        void setAge(int age);
        int getAge() const;
};

#endif
