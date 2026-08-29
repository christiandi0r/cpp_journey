#include "Name_pairs.hpp"
#include <iostream>

int main()
{
    Name_pairs myPairs;
    
    myPairs.read_names();
    
    myPairs.read_ages();
    
    std::cout << "\nBefore sorted: " << std::endl;
    
    myPairs.print();
    
    myPairs.sort();
    
    std::cout << "\nAfter sorted: " << std::endl;
    
    myPairs.print();
    
    return 0;
}
