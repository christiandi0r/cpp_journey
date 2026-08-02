#ifndef BOOK_HPP
#define BOOK_HPP

#include <iostream>
#include <string>

class Book
{
    public:
        
        Book() : _title{"Book Title"}, _author{"Book author"}, _copyrightDate{"YYYY-JAN-DD"}, _ISBN{"n-n-n-x"}, _isCheckedOut{false} {}
        
        Book(const std::string& title, 
             const std::string& author,
             const std::string& copyrightDate,
             const std::string& ISBN,
             bool isCheckedOut
             ) : _title{title}, _author{author}, _copyrightDate{copyrightDate}, _ISBN{ISBN}, _isCheckedOut{isCheckedOut} {}
         
        enum class Genre { Fiction, NonFiction, Periodical, Biography, Children };
        
        // Book title getter and setter
        void set_title(const std::string& title) { _title = title; }
        std::string get_title() const { return _title; }
        
        // Book author getter and setter
        void set_author(const std::string& author) { _author = author; }
        std::string get_author() const { return _author; }
        
        // Copyright date setter and getter
        void set_copyright_date(const std::string& copyrightDate) { _copyrightDate = copyrightDate; }
        std::string get_copyright_date() const { return _copyrightDate; }

        // ISBN setter and getter
        void set_ISBN(const std::string& ISBN) { _ISBN = ISBN; }
        std::string get_ISBN() const { return _ISBN; }
        
        // Book checkout functions
        void checkout_book() { _isCheckedOut = true; }
        void return_book() { _isCheckedOut = false; }
        
        // Status if book is checked out or available
        void book_status()
        {
            if (_isCheckedOut) { std::cout << "Book is currently checked out." << std::endl; }
            else { std::cout << "Book is currently available." << std::endl; }
        }

        bool operator==(const Book& rhs) const { return _ISBN == rhs._ISBN; }

        bool operator!=(const Book& rhs) const { return _ISBN != rhs._ISBN; }

        void print_details() 
        {  
            std::cout << "Title: " << _title << std::endl;
            std::cout << "Author: " << _author << std::endl;
            std::cout << "Copyright Date: " << _copyrightDate << std::endl;
            std::cout << "ISBN: " << _ISBN << std::endl;
            std::cout << "Status: ";
            book_status();
        }

    private:
    
        std::string _title;
        std::string _author;
        std::string _copyrightDate;
        std::string _ISBN;
        bool _isCheckedOut;
};

std::ostream& operator<<(std::ostream& os, const Book& book)
{
    os << "Title: " << book.get_title() << std::endl;
    os << "Author: " << book.get_author() << std::endl;
    os << "ISBN: " << book.get_ISBN() << std::endl;
    
    return os;
}

#endif
