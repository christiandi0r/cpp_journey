#ifndef PART_TIME_EMPLOYEE_HPP
#define PART_TIME_EMPLOYEE_HPP

#include "employee.hpp"

#include <string>

class PartTimeEmployee : public Employee
{
    public:

        PartTimeEmployee() : _hourlyWage{0}, _monthlyHours{0} {}

        PartTimeEmployee(const std::string& name,
                         double hourlyWage,
                         double monthlyHours
                         ) : _name{name}, _hourlyWage{hourlyWage}, _monthlyHours{monthlyHours} {}

        void setName(const std::string& name) { _name = name; }
        std::string getName() const { return _name; }
        
        // Part-time employee hourly wage functions
        void setHourlyWage(double hourlyWage) { _hourlyWage = hourlyWage; }
        double getHourlyWage() const { return _hourlyWage; }
        
        // Part-time employee monthly hours worked functions
        void setMonthlyHours(double monthlyHours) { _monthlyHours = monthlyHours; }
        double getHourlyHours() const { return _monthlyHours; }

        double calculatePay() const override { return _hourlyWage * _monthlyHours; }

    private:

        std::string _name;
        double _hourlyWage;
        double _monthlyHours;
};

#endif
