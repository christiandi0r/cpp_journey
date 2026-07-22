#include <iostream>
#include <vector>
#include <string>

// @param label: the label you want to be printed out
// @param vec: the container of values you want to print out
void print(const std::string& label, const std::vector<int>& vec)
{
    std::cout << label << ": ";
    
    for (const auto& i : vec) { std::cout << i << " "; }
}

int main()
{
    std::vector<int> values;
    std::string label;
    
    std::cout << "Enter your label (e.g. Scores): ";
    std::cin >> label;
    
    std::cout << "\nEnter values (input \'|\' to stop): ";
    
    for (int value; std::cin >> value;) { values.push_back(value); }
    
    std::cout << "\n"; 
    
    print(label, values);

    return 0;
}
