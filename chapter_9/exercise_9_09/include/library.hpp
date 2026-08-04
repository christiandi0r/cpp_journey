#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include "book.hpp"
#include "patron.hpp"

#include <iostream>
#include <vector>
#include <string>

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

    private:

        std::vector<Transaction> transactions;
        std::vector<Patron> patrons;
        std::vector<Book> books;
};

#endif
