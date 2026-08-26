#include <iostream>
#include <vector>

bool findPrimes(int max)
{
    if (max <= 1) { return false; }
    
    for (int i = 2; i < max; i++)
    {
        if (max % i == 0) { return false; }
    }
    
    return true;
}

int main()
{
    std::vector<int> primes;
    std::vector<int> primesFound;
    
    int max = 0;
    
    std::cout << "Enter your max threshold: ";
    std::cin >> max;
    
    for (int i = 1; i <= max; i++) { primes.push_back(i); }
    
    for (auto i : primes) 
    { 
        if (findPrimes(i) == 1) { primesFound.push_back(i); }
    }
    
    std::cout << "Prime numbers between 1 and " << max << ": ";
    
    for (auto i : primesFound) { std::cout << " " << i; }
    
    return 0;
}
