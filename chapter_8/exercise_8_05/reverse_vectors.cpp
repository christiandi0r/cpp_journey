#include <iostream>
#include <vector>

std::vector<int> reverse_vector(const std::vector<int>& v)
{
    std::vector<int> newVec;
    
    for (int i = v.size(); i > 0; i--) { newVec.push_back(i); }
    
    return newVec;
}

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5};
    
    nums = reverse_vector(nums);
    
    for (const auto& i : nums) { std::cout << i << " "; }

    return 0;
}
