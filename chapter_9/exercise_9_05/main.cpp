#include "book.hpp"
#include <iostream>
#include <string>


int main()
{
    Book book1;

    Book book2("5-4-3-2-B", "PPP2", "Bjarne Stroutsoup", "2010 JUN 05", false);
    
    book1.print_details();

    std::cout << "\n";

    book2.checkout_book();

    book2.print_details();
    
    return 0;
}
