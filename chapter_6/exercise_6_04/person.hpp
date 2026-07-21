#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person
{
    private:
        
        std::string _name;
        int _age;

    public:

        Person();
        Person(const std::string& name, int age);
            
        void setName(const std::string& name);
        std::string getName() const;
            
        void setAge(int age);
        int getAge() const;
};

#endif
