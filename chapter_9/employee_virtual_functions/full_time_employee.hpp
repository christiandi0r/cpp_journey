#ifndef FULL_TIME_EMPLOYEE_HPP
#define FULL_TIME_EMPLOYEE_HPP

#include "employee.hpp"
#include <string>

class FullTimeEmployee : public Employee
{
    public:

        FullTimeEmployee() : _name{"Name"}, _monthlySalary{0} {}

        FullTimeEmployee(std::string name, double monthlySalary) : _name{name}, _monthlySalary{monthlySalary} {}

        // Full-time employee name functions
        void setName(const std::string& name) { _name = name; }
        std::string getName() const { return _name; }

        // Full-time employee salary functions
        void setMonthlySalary(double monthlySalary) { _monthlySalary = monthlySalary; }
        double getMonthlySalary() const { return _monthlySalary; }
        double calculatePay() const override {  return _monthlySalary; }
       
    private:

        std::string _name;
        double _monthlySalary;
};

#endif
