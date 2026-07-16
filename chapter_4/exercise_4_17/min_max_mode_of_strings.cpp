#include <iostream>
#include <vector>
#include <unordered_map>

void min_and_max(std::vector<std::string>& words)
{
    std::string min = " ";
    std::string max = " ";
    
    min = words.at(0); 
    max = words.at(0);
    
    for (const auto& word : words) 
    {
        if (word < min) { min = word; }
        else if (word > max) { max = word; }
    }
    
    std::cout << "Min: " << min << std::endl; 
    std::cout << "Max: " << max << std::endl;
}

void mode(std::vector<std::string>& words)
{
   std::unordered_map<std::string, int> wordFrequencies;
   
   int maxFrequency = 0;
   
   // Count frequencies
   for (const std::string& word : words) 
   { 
       wordFrequencies[word]++; 
       
       if (wordFrequencies[word] > maxFrequency) { maxFrequency = wordFrequencies[word]; }
   }
   
   // Find the most used word associated with the max integer value using structured binding -> [word, count], C++17
   for (const auto& [word, count] : wordFrequencies)
   {
      if (count == maxFrequency) { std::cout << "Mode: " << word << std::endl; }
   }
}

int main()
{
    std::vector<std::string> words;
    
    std::string word;
    
    while (word != "|")
    {
        std::cin >> word;
        words.push_back(word);
    }
    
    words.pop_back();
    
    min_and_max(words);
    
    mode(words);
    
    return 0;
}
