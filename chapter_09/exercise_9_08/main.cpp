#include "patron.hpp"

#include <iostream>
#include <string>

int main()
{
    Patron patron1;

    patron1.setLibraryFees(20);

    patron1.doesPatronOweFees();

    return 0;
}
