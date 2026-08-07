#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>
#include <string>

class Employee
{
    public:
        
        void calculatePay() = 0;
        
    protected:
    
        std::string _name;
        int _employeeNumber;
};


#endif
