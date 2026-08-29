#include "book.hpp"
#include <iostream>
#include <string>


int main()
{
    Book book1;

    Book book2("PPP2", "Bjarne Stroutsoup", "2010 JUN 05", "5-4-3-x", Book::Genre::NonFiction, false);
    
    if (book1 == book2) { std::cout << "Books are the same." << std::endl; }

    else { std::cout << "Books are NOT the same." << std::endl; }

    std::cout << "\n";

    std::cout << book1 << std::endl;

    std::cout << book2 << std::endl;
    
    return 0;
}
