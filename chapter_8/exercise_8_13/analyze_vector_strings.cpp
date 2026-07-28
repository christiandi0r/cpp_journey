#include <iostream>
#include <vector>
#include <string>

std::vector<int> num_chars_string(const std::vector<std::string>& words)
{
    std::vector<int> num_chars;
    
    for (const auto& word : words) { num_chars.push_back(word.size()); }
    
    
    
    return num_chars;
}

int main()
{
    std::vector<std::string> words = {"hey", "there"};
    
    num_chars_string(words);

    return 0;
}
