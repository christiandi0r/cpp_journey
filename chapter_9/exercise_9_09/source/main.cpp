#include "library.hpp"

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

int main()
{
    std::cout << std::fixed << std::setprecision(2);
    
    Library huntington;
    
    // Demo book functions
    Book book1;
    Book book2("PPP2", "Bjarne Stroutsoup", "2010 JUN 05", "5-4-3-x", Book::Genre::NonFiction, false);
    Book book3;
    
    huntington.add_book(book1);
    huntington.add_book(book2);
    
    // Demo patron functions
    Patron patron1("Christian", 98510345, 0.00);
    Patron patron2("Mike", 96578022, 10.50);
    Patron patron3;
    
    huntington.add_patron(patron1);
    huntington.add_patron(patron2);
    
    //huntington.checkout_book_from_lib(book2, patron1);
    
    //huntington.checkout_book_from_lib(book2, patron2);
    
    //huntington.print_patrons();
    //huntington.print_books();
    //huntington.print_transactions();
    
    std::vector<Patron> patrons;
    std::vector<std::string> peopleWhoOweFees;
    
    patrons.push_back(patron1);
    patrons.push_back(patron2);
    patrons.push_back(patron3);
    
    peopleWhoOweFees = huntington.patronsWhoOweFees(patrons);
    
    for (const auto& patron : peopleWhoOweFees) { std::cout << patron << " "; }
    
    return 0;
}
