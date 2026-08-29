/******************************************************************************

Practice using C++ virtual functions and classes by building an employee system 
with full-time and part-time workers. This exercise helps you learn runtime polymorphism, 
base classes, and method overriding.

- Base Class (Employee): Holds a name and an employee ID number. Has a pure virtual function calculatePay() to make it an abstract class.

- Derived Class (FullTimeEmployee): Inherits from Employee. Stores a fixed monthly salary. Overrides calculatePay() to return this fixed salary.

- Derived Class (PartTimeEmployee): Inherits from Employee. Stores an hourly wage and the number of hours worked. Overrides calculatePay() to return wage times hours.

*******************************************************************************/
#include "part_time_employee.hpp"
#include "full_time_employee.hpp"

#include <iostream>

int main()
{
    FullTimeEmployee FTemployee1;
    PartTimeEmployee PTemployee1("Brian", 32, 119.96);

    FTemployee1.setName("Christian");
    FTemployee1.setMonthlySalary(3500);

    std::cout << "Christian's monthly earnings: " << FTemployee1.calculatePay() << std::endl;
    std::cout << "Brian's monthly earnings: " << PTemployee1.calculatePay() << std::endl;
    
    return 0;
}
