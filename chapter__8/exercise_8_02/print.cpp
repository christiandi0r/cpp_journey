#include <iostream>
#include <vector>
#include <string>

void print(const std::string& label, const std::vector<int>& vec)
{
    std::cout << label <<": ";
    
    for (const auto& i : vec) { std::cout << i << " "; }
}

int main()
{
    std::vector<int> scores = {12, 4, 5, 87};
    std::string label = "Scores";
    
    print(label, scores);

    return 0;
}
