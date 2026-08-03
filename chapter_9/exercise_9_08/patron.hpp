#ifndef PATRON_HPP
#define PATRON_HPP

#include <iostream>
#include <string>

class Patron 
{
    public:

        Patron() : _name{"Unknown"}, _libraryCardNum{0}, _libraryFees{0}, _owesFees{false} {}


    private:

        std::string _name;
        int _libraryCardNum;
        double _libraryFees;
        bool _owesFees;

};



#endif
