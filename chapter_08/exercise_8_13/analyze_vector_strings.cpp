#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<int> count_num_chars(const std::vector<std::string>& words)
{
    std::vector<int> numChars;
    
    for (const auto& word : words) { numChars.push_back(word.size()); }
    
    return numChars;
}

void longest_and_shortest_string(const std::vector<std::string>& words)
{
    std::string longest = words.at(0);
    std::string shortest = words.at(0);
    
    for (int i = 0; i < words.size(); i++)
    {
        if (words.at(i).size() > longest.size()) { longest = words.at(i); }
        if (words.at(i).size() < shortest.size()) { shortest = words.at(i); }
    }
    
    std::cout << "Longest word: " << longest << std::endl;
    std::cout << "Shortest word: " << shortest << std::endl;
}

void first_and_last_string(std::vector<std::string> words)
{
    std::sort(words.begin(), words.end());
    
    std::cout << "First word: " << words.front() << std::endl;
    std::cout << "Last word: " << words.back() << std::endl;
}

int main()
{
    std::vector<std::string> words = {"hey", "there", "yo", "cool"};
    
    std::vector<int> numChars = count_num_chars(words);
    
    longest_and_shortest_string(words);
    
    std::cout << "\n";
    
    first_and_last_string(words);
    
    return 0;
}
