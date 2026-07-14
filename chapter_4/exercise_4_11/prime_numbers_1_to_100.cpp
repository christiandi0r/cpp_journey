#include <iostream>
#include <vector>

bool isPrime(int num)
{
    if (num <= 1) { return false; }
    
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0) { return false; }
    }
    
    return true;
}

int main()
{
    std::vector<int> primes;
    std::vector<int> primesFound;
    
    for (int i = 1; i <= 100; i++) { primes.push_back(i); }
    
    for (auto i : primes) 
    { 
        if (isPrime(i) == 1) { primesFound.push_back(i); }
    }
    
    std::cout << "Prime numbers between 1 and 100: ";
    
    for (auto i : primesFound) { std::cout << " " << i; }
    
    return 0;
}
