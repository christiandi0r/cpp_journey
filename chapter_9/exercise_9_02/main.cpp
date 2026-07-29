#include "Name_pairs.hpp"
#include <iostream>

int main()
{
    Name_pairs myPairs;
    
    myPairs.read_names();
    
    myPairs.read_ages();
    
    myPairs.print();
    
    myPairs.sort();
    
    myPairs.print();
    
    return 0;
}
