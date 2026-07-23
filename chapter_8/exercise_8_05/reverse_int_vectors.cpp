#include <iostream>
#include <vector>

// ************************************************************
//
// @brief: since we pass-by-const-reference, we can only read the
//         values within the vector and can't modify anything.
//
//         1. Create new vector
//         2. Start for-loop from the back of vector being passed
//         3. Copy values to new vector
//
// ************************************************************
std::vector<int> reverse_vector(const std::vector<int>& v)
{
    std::vector<int> newVec;
    
    for (int i = v.size() - 1; i >= 0; i--) { newVec.push_back(v.at(i)); }
    
    return newVec;
}

// ************************************************************
//
// @brief: since we pass-by-reference, we are directly modifying
//         the vector we are passing through argument.
//
//         1. Check if vector is empty first
//         2. Compute middle and end of vector
//         3. Swap values until we hit the middle point of vector
//
// ************************************************************
void reverse_vector_swap(std::vector<int>& vec)
{
    if (vec.empty()) { return; }
    
    int middle = vec.size() / 2;
    int end = vec.size() - 1;
    
    for (int i = 0; i < middle; i++)
    {
        std::swap(vec.at(i), vec.at(end));
        end--;  
    }
}

int main()
{
    std::vector<int> nums = {10, 20, 30, 40};
    
    //nums = reverse_vector(nums);
    
    reverse_vector_swap(nums);
    
    for (const auto& i : nums) { std::cout << i << " "; }

    return 0;
}
