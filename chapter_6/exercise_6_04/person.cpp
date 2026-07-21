#include "person.hpp"
#include <iostream>

Person::Person() : _name(" "), _age(0) {}

Person::Person(const std::string& name, int age) : _name(name), _age(age) {}

void Person::setName(const std::string& name) { _name = name; }

std::string Person::getName() const { return _name; }

void Person::setAge(int age) { _age = age; }

int Person::getAge() const { return _age;}
