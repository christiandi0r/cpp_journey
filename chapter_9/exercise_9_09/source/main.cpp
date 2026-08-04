#include "library.hpp"

#include <iostream>
#include <vector>
#include <string>



int main()
{
    Library huntington;
    
    Book book1;
    Book book2("PPP2", "Bjarne Stroutsoup", "2010 JUN 05", "5-4-3-x", Book::Genre::NonFiction, false);
    
    huntington.add_book(book1);
    huntington.add_book(book2);
    
    huntington.checkout_book_from_lib(book2);
    
    huntington.print_books();
    
    return 0;
}
