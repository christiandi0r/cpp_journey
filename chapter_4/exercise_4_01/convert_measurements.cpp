#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

double convert_to_m(double num, std::string unit)
{
    if (unit == "cm") { return num / 100; }
    
    else if (unit == "in") { return num * 0.0254; }
        
    else if (unit == "ft") { return num * 0.3048; }
        
    else if (unit == "m") { return num; }
        
    else { std::cout << "Invalid unit, please try again."; return num; }
   
}

int main()
{
    char userInput = ' ';
    
    double num = 0;
    double smallest = 0;    // Smallest number seen so far
    double largest = 0;     // Largest number seen so far
    double sum = 0;          // Sum of values
    
    std::string unit = " ";
    
    std::vector<double> values;  // Vector to store the values that the user has entered

    std::cout << "Enter a number with unit: ";
    std::cin >> num >> unit;
    
    std::cout << "\nYou entered " << num << " " << unit << "." << std::endl;
    
    smallest = num;
    largest = num;
    
    // Insert first value to vector
    values.push_back(num);
    
    std::cout << "\nPress any key to continue or '|' to terminate program: ";
    std::cin >> userInput;
    
    while (userInput != '|')
    {
        std::cout << "\nEnter a number with unit: ";
        std::cin >> num >> unit;
    
        std::cout << "\nYou entered " << num << " " << unit << "." << std::endl;
        
        // Convert to meters
        num = convert_to_m(num, unit);
        
        // Append value to back of vector
        values.push_back(num);   
        
        // Check if smallest or largest
        if (num < smallest) { smallest = num; }
        
        else if (num > largest) { largest = num; }
        
        std::cout << "\nPress any key to continue or '|' to terminate program: ";
        std::cin >> userInput;
    }
    
    for (auto i : values) { sum += i; }
    
    std::sort(values.begin(), values.end());
  
    std::cout << "\nThe smallest value is: " << smallest << " m" << std::endl;
    std::cout << "The largest value is: " << largest << " m" << std::endl;
    std::cout << "The total of the values is: " << sum << " m" << std::endl;
    std::cout << "All of the values entered: ";
    for (auto i : values) { std::cout << " " << i; }
    
    return 0;
}
