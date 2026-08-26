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

    int n = 0;
    int primeFound = 0;
    int i = 2;      
    
    std::cout << "Let's find the first few 'n' primes. Enter n: ";
    std::cin >> n;
    
    while (primeFound != n)
    {
        if (isPrime(i) == 1) 
        {  
            primes.push_back(i);
            primeFound++;
        }
        
        i++;
    }

    std::cout << "The first " << n << " prime numbers are: ";
    
    for (auto i : primes) { std::cout << " " << i; }
    
    return 0;
}
