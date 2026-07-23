#include <iostream>
#include <vector>

std::vector<int> reverse_vector(const std::vector<int>& v)
{
    std::vector<int> newVec;
    
    for (int i = v.size(); i > 0; i--) { newVec.push_back(i); }
    
    return newVec;
}

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
    std::vector<int> nums = {1, 2, 3, 4};
    
    //nums = reverse_vector(nums);
    
    reverse_vector_swap(nums);
    
    for (const auto& i : nums) { std::cout << i << " "; }

    return 0;
}
