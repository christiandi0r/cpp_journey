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
   

    return 0;
}
