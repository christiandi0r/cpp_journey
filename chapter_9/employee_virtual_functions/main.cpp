/******************************************************************************

Practice using C++ virtual functions and classes by building an employee system 
with full-time and part-time workers. This exercise helps you learn runtime polymorphism, 
base classes, and method overriding.

- Base Class (Employee): Holds a name and an employee ID number. Has a pure virtual function calculatePay() to make it an abstract class.

- Derived Class (FullTimeEmployee): Inherits from Employee. Stores a fixed monthly salary. Overrides calculatePay() to return this fixed salary.

- Derived Class (PartTimeEmployee): Inherits from Employee. Stores an hourly wage and the number of hours worked. Overrides calculatePay() to return wage times hours.

*******************************************************************************/
#include <iostream>

int main()
{
    std::cout<<"Hello World";

    return 0;
}
