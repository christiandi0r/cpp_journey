#include <iostream>
#include <vector>

double compute_groceries(const std::vector<double>& prices, const std::vector<double>& weights)
{
    int total = 0;

    if (weights.size() != prices.size()) 
    {  
        if (weights.size() > prices.size()) { std::cout << "Error: You are missing a price. Try again." << std::endl; }
        else { std::cout << "Error: You are missing a weight. Try again." << std::endl; }
    }

    for (int i = 0; i < weights.size(); i++) { total += prices.at(i) * weights.at(i); }
   
    return total;
}

int main()
{
    std::vector<double> prices = {3, 3, 3};
    std::vector<double> weights = {1, 1, 1};

    int total = 0;

    total = compute_groceries(prices, weights);

    std::cout << "Total groceries: " << total << std::endl;

    return 0;
}
