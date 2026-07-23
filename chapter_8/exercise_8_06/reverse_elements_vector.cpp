#include <iostream>
#include <vector>

// ***************************************************************
//
// @brief: since we pass-by-const-reference, we can only read the
//         values within the vector and can't modify anything.
//
//         1. Create new vector
//         2. Start for-loop from the back of vector being passed
//         3. Copy values to new vector
//
// ***************************************************************
template <typename T>
std::vector<T> reverse_vector(const std::vector<T>& v)
{
    std::vector<T> newVec;
    
    for (int i = v.size() - 1; i >= 0; i--) { newVec.push_back(v.at(i)); }
    
    return newVec;
}

// ***************************************************************
//
// @brief: since we pass-by-reference, we are directly modifying
//         the vector we are passing through argument.
//
//         1. Check if vector is empty first
//         2. Compute middle and end of vector
//         3. Swap values until we hit the middle point of vector
//
// ***************************************************************
template <typename T>
void reverse_vector_swap(std::vector<T>& vec)
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
    std::vector<std::string> vec = {"hi", "hello", "hola", "konichiwa"};
    
    //vec = reverse_vector(vec);
    
    reverse_vector_swap(vec);
    
    for (const auto& i : vec) { std::cout << i << " "; }

    return 0;
}
