#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include "book.hpp"
#include "patron.hpp"

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Library
{
    public:

        struct Transaction
        { 
            Book book; 
            Patron patron;  
        };

        void add_book(const Book& book) { books.push_back(book); }
        
        void add_patron(const Patron& patron) { patrons.push_back(patron); }
        
        void checkout_book(const Book& checkoutBook) { books.erase(std::remove(books.begin(), books.end(), checkoutBook), books.end()); }
        
        void print_books()
        {
            for (const auto& i : books) { std::cout << i << std::endl; }
        }
        

    private:

        std::vector<Transaction> transactions;
        std::vector<Patron> patrons;
        std::vector<Book> books;
};

#endif
