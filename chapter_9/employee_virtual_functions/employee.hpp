#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>
#include <string>

class Employee
{
    public:
        
        Employee() : _name{"Name"}, _employeeNumber{0} {}
        
        Employee(std::string name, int employeeNumber) : _name{name}, _employeeNumber{employeeNumber} {}
        
        virtual void calculatePay() const = 0;
        
    protected:
    
        std::string _name;
        int _employeeNumber;
};


#endif
