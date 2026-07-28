#include <iostream>
#include <vector>
#include <string>

std::vector<int> count_num_chars(const std::vector<std::string>& words)
{
    std::vector<int> numChars;
    
    for (const auto& word : words) { numChars.push_back(word.size()); }
    
    return numChars;
}

int main()
{
    std::vector<std::string> words = {"hey", "there"};
    
    std::vector<int> numChars = count_num_chars(words);
    
    return 0;
}
