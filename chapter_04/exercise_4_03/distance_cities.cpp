#include <iostream>
#include <vector>

int main()
{
    std::vector<double> distances;

    double sum = 0.0 , mean = 0.0, smallest = 0.0, greatest = 0.0;
    
    // Input different distances between two cities
    for (double distance; std::cin >> distance;) { distances.push_back(distance); }

    // Compute the sum of all distances and find the smallest and greatest distance
    smallest = distances.at(0); 
    greatest = distances.at(0);

    for (auto distance : distances) 
    {
        sum += distance;
        
        if (distance < smallest) { smallest = distance; }

        else if (distance > greatest) { greatest = distance; }
    }

    // Compute the mean distance 
    mean = sum / distances.size();

    std::cout << "The total distance is: " << sum << std::endl;
    std::cout << "The mean distance is: " << mean << std::endl;
    std::cout << "The smallest distance is: " << smallest << std::endl;
    std::cout << "The greatest distance is: " << greatest << std::endl;

    return 0;
}
