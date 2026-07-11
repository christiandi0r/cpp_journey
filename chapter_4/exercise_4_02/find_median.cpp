#include <iostream>
#include <vector>
#include <algorithm>

int main ()
{
    std::vector<double> temps;

    double sum = 0.0;
    
    for (double temp; std::cin >> temp;) { temps.push_back(temp); }

    // Compute mean temperature 
    for (double x : temps) { sum += x; }
    std::cout << "Average temperature from inputs: " << sum / temps.size() << std::endl;

    // Compute median temperature 
    std::sort(temps.begin(), temps.end());

    if (temps.size() % 2 == 0) 
    { 
        std::cout << "Median temperature from inputs: " << (temps.at(temps.size() / 2 - 1) + temps.at(temps.size() / 2)) / 2 << std::endl; 
    }

    else 
    { 
        std::cout << "Median temperature from inputs: " << temps.at(temps.size() / 2) << std::endl; 
    }

    return 0;
}
