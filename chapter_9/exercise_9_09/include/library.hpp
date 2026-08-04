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
        
        void checkout_book_from_lib(Book& book)
        { 
            for (auto& i : books) { if (i == book) i.checkout_book(); }
        }
        
        void print_books() { for (const auto& book : books) std::cout << book << std::endl; }
        void print_patrons() { for (const auto& patron : patrons) std::cout << patron << std::endl; }
        
    private:

        std::vector<Transaction> transactions;
        std::vector<Patron> patrons;
        std::vector<Book> books;
};

#endif
