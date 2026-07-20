#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums;
    
    int n = 0;
    int sum = 0;
    
    std::cout << "Please enter the number of values you want to sum: ";
    std::cin >> n;
    
    std::cout << "Please enter some integers (press \'|\' to stop): ";
    
    for (int num; std::cin >> num;) { nums.push_back(num); } 
    
    std::cout << "The sum of the first " << n << " numbers (";
    
    for (int i = 0; i < n; i++) 
    {  
        std::cout << " " << nums.at(i);
        sum += nums.at(i);
    }
    
    std::cout << " ) is " << sum << "." << std::endl;
    
    return 0;
}
