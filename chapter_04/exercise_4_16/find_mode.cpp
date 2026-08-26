#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers;
    
    int mode = 0;
    int count = 0;
    int max = 0;
    
    for (int num; std::cin >> num;) { numbers.push_back(num); }
    
    max = numbers.at(0);

    for (auto i : numbers) 
    {  
        if (i > max) { max = i; }
    }
    
    std::vector<int> counts(max + 1); 
    
    for (int i = 0; i < numbers.size(); i++)
    {
        counts.at(numbers.at(i))++;
    }
    
    for (auto i : counts) { std::cout << i << " "; }
    
    mode = counts.at(0);
    
    for (int i = 0; i < counts.size(); i++)
    {
        if (counts.at(i) > mode) { mode = i; }
    }
    
    std::cout << "\nThe mode is: " << mode << std::endl;

    return 0;
}
