#ifndef BOOK_HPP
#define BOOK_HPP

#include<string>

class Book
{
    public:
        // Add _isCheckedOut = false initializer 
        Book() : _ISBN{"n-n-n-x"}, _title{"Book Title"}, _author{"Book author"}, _copyrightDate{"YYYY-JAN-DD"} {}
        
        Book(const std::string& ISBN, 
             const std::string& title, 
             const std::string& author,
             const std::string& copyrightDate
             ) : _ISBN{ISBN}, _title{title}, _author{author}, _copyrightDate{copyrightDate} {}
        
        
        // ISBN setter and getter
        void set_ISBN(const std::string& ISBN) { _ISBN = ISBN; }
        std::string get_ISBN() const { return _ISBN; }
        
        // Book title getter and setter
        void set_title(const std::string& title) { _title = title; }
        std::string get_title() const { return _title; }
        
        // Book author getter and setter
        void set_author(const std::string& author) { _author = author; }
        std::string get_author() const { return _author; }
        
        // Copyright date setter and getter
        void set_copyright_date(const std::string& copyrightDate) { _copyrightDate = copyrightDate; }
        std::string get_copyright_date() const { return _copyrightDate; }
        
        // Book checkout functions
        void checkout_book() { _isCheckedOut = true; }
        void return_book() { _isCheckedOut = false; }
        
        // TO-DO: Implement this function
        void book_status();

    private:
    
        std::string _ISBN;
        std::string _title;
        std::string _author;
        std::string _copyrightDate;
        bool _isCheckedOut;
};

#endif
