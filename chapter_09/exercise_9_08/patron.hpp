#ifndef PATRON_HPP
#define PATRON_HPP

#include <iostream>
#include <string>

class Patron 
{
    public:

        Patron() : _name{"Unknown"}, _libraryCardNum{0}, _libraryFees{0} {}

        Patron(const std::string& name,
               int libraryCardNum,
               double libraryFees
               ) : _name{name}, _libraryCardNum{libraryCardNum}, _libraryFees{libraryFees} {}
        
        // Patron's name setter and getter
        void setName(const std::string& name) { _name = name; }
        std::string getName() const { return _name; }

        // Library card number setter and getter
        void setLibraryCardNum(int libraryCardNum) { _libraryCardNum = libraryCardNum; }
        int getLibraryCardNum() const { return _libraryCardNum; }

        //Library fees setter and gettter
        void setLibraryFees(double libraryFees) { _libraryFees = libraryFees; }
        double getLibraryFees() const { return _libraryFees; }
        
        bool doesPatronOweFees() const
        {
            if (_libraryFees > 0) { std::cout << "Patron owes fees."; return true; }
            else { std::cout << "Patron does NOT owe fees."; return false; }
        }
    
    private:

        std::string _name;
        int _libraryCardNum;
        double _libraryFees;
};

#endif
