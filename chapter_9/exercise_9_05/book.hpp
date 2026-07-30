#ifndef BOOK_HPP
#define BOOK_HPP

#include<string>

class Book
{
    public:
    
        Book() : _ISBN{"n-n-n-x"}, _title{" "}, _author{" "}, _copyrightDate{"YYYY-JAN-DD"} {}
        
        Book(const std::string& ISBN, 
             const std::string& title, 
             const std::string& author
             const std::string& copyrightDate
             ) : _ISBN
             
    
    
    private:
    
        std::string _ISBN;
        std::string _title;
        std::string _author;
        std::string _copyrightDate;
        
  
};





#endif
