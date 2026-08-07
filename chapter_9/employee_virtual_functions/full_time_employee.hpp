#ifndef FULL_TIME_EMPLOYEE_HPP
#define FULL_TIME_EMPLOYEE_HPP

#include "employee.hpp"
#include <string>

class FullTimeEmployee : public Employee
{
    public:

        FullTimeEmployee() : _name{"Name"}, _monthlySalary{0} {}

        FullTimeEmployee(std::string name, double monthlySalary) : _name{name}, _monthlySalary{monthlySalary} {}

        void setName(std)



        void setMonthlySalary(double monthlySalary) { _monthlySalary = monthlySalary; }
        double getMonthlySalary() const { return _monthlySalary; }


        void calculatePay() const override
        {
            
        }



    private:

        std::string _name;
        double _monthlySalary;




};




#endif
