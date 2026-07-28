#include <iostream>
#include <vector>

template <typename T>
T maxv(const std::vector<T>& vec)
{
    T largest_element = vec.at(0);

    for (const auto& element : vec)
    {
        if (element > largest_element) { largest_element = element; }
    }

    return largest_element;
}

int main()
{
    std::vector<int> nums = {3, 69, 2, 5};

    int largest_element = maxv(nums);

    std::cout << "Largest element: " << largest_element << std::endl;

    return 0;
}
