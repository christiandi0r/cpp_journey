#include "library.hpp"

#include <iostream>
#include <vector>
#include <string>



int main()
{
    Library huntington;
    
    // Demo book functions
    Book book1;
    Book book2("PPP2", "Bjarne Stroutsoup", "2010 JUN 05", "5-4-3-x", Book::Genre::NonFiction, false);
    
    huntington.add_book(book1);
    huntington.add_book(book2);
    
    huntington.checkout_book_from_lib(book2);
    
    //huntington.print_books();
    
    // Demo patron functions
    Patron patron1("Christian", 98510345, 0.00, false);
    
    huntington.add_patron(patron1);
    
    huntington.print_patrons();
    
    
    return 0;
}
