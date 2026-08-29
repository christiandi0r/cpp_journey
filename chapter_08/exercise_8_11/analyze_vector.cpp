#include <iostream>
#include <vector>

template <typename T>
void analyze_vector(const std::vector<T> vec, T& smallest, T& largest, T& median, T& mean)
{
    T total = 0;
    T top_middle = vec.size() / 2;
    T bottom_middle = (vec.size() / 2) - 1;
    
    smallest = vec.at(0);
    largest = vec.at(0);

    for (const auto& element : vec)
    {
        if (element > largest) { largest = element; }
        if (element < smallest) { smallest = element; }

        total += element;

        if (vec.size() % 2 != 0) { median = vec.at(vec.size() / 2); }

        else { median = (vec.at(bottom_middle) + vec.at(top_middle)) / 2 ; }
    }

    mean = total / vec.size();
}

int main()
{
    std::vector<double> nums = {14, 98, 44, 23};

    double smallest = 0;
    double largest = 0;
    double median = 0;
    double mean = 0;

    analyze_vector(nums, smallest, largest, median, mean);

    std::cout << "Smallest element: " << smallest << std::endl;
    std::cout << "Largest element: " << largest << std::endl;
    std::cout << "Mean: " << mean << std::endl;
    std::cout << "Median: " << median << std::endl;

    return 0;
}
