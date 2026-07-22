#include <iostream>
#include <vector>
#include <string>

// ************************************************************
//
// @brief: A Fibonacci number is one that is part of a sequence where 
//         each element is the sum of the two previous ones.
//         (e.g. 1, 2, 3, 5, 8, 13, 21, . . . .)
// @param x: is the first fibonacci integer in vec. vec[0] will be x
// @param y: is the second fibonacci integer in vec. vec[1] will be y
// @param vec: is an empty integer vector
// @param n: is the number of elements to put into vec
//
// ************************************************************
std::vector<int> fibonacci(int x, int y, std::vector<int>& vec, int n)
{
    //vec.resize(n);
    //vec.at(0) = x;
    //vec.at(1) = y;
    
    int next = 0;
    
    vec.push_back(x);
    vec.push_back(y);
    
    while (vec.size() != n)
    {
        next = x + y;
        
        vec.push_back(next);
        
        x = y;
        
        y = next;
    }

    return vec;
}

// ************************************************************
//
// @param label: the label you want to be printed out
// @param vec: the container of values you want to print out
//
// ************************************************************
void print(const std::string& label, const std::vector<int>& vec)
{
    std::cout << label << ": ";
    
    for (const auto& i : vec) { std::cout << i << " "; }
}

int main()
{
    std::vector<int> nums;
    
    std::string label = "Nums";
    
    nums = fibonacci(1, 2, nums, 7);
    
    print(label, nums);

    return 0;
}
