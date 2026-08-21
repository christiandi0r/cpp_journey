#include <iostream>
#include <string>

std::string cat_dot(const std::string& s1, const std::string& s2)
{
    std::string dot = ".";
    std::string s4;

    s4 = s1 + dot + s2;

    return s4;
}

int main()
{
    std::string s1 = "Niels";
    std::string s2 = "Bohr";

    std::cout << cat_dot(s1, s2) << std::endl;

    return 0;
}
