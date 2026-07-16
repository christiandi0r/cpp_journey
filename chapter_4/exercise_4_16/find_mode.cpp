#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers;
    
    int mode = 0;
    int count = 0;
    int num = 0;
    int max = 0;
    
    while (num != -1) 
    { 
        std::cin >> num;
        
        numbers.push_back(num); 
    }
    
    mode = numbers.at(0);
    max = numbers.at(0);

    for (auto i : numbers) 
    {  
        if (i > max) { max = i; }
    }
    
    std::vector<int> counts(max + 1); 
    
    for (int i = 0; i < numbers.size(); i++)
    {
        counts.at(i)++;
    }
    
    
    for (auto i : counts) { std::cout << " " << i; }
    


    return 0;
}
