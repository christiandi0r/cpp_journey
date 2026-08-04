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
        
        friend std::ostream& operator<<(std::ostream& os, const Transaction& transaction)
        {
            os << "Name: " << transaction.patron.getName() << "\n";
            os << "Book: " << transaction.book.get_title() << "\n";
            
            return os;
        }

        void add_book(const Book& book) { books.push_back(book); }
        
        void add_patron(const Patron& patron) { patrons.push_back(patron); }
        
        void checkout_book_from_lib(Book& book, Patron& patron)
        { 
            if (patron.getName() == "Unknown") { std::cout << "Error: Person does NOT have library membership." << std::endl; }
            
            for (auto& i : books) 
            { 
                if (i.book_status() == "Book is NOT currently available.") { std::cout << "Error: " << book.get_title() << " is NOT available." << std::endl; }
                
                if (i == book) 
                { 
                    i.checkout_book();
                    
                    Transaction transaction;
                    
                    transaction.book = book;
                    transaction.patron = patron;
                    
                    transactions.push_back(transaction);
                }
            }
        }
        
        void print_books() { for (const auto& book : books) std::cout << book << std::endl; }
        void print_patrons() { for (const auto& patron : patrons) std::cout << patron << std::endl; }
        void print_transactions() { for (const auto& transaction : transactions) std::cout << transaction << std::endl; }
        
    private:

        std::vector<Transaction> transactions;
        std::vector<Patron> patrons;
        std::vector<Book> books;
};

#endif
