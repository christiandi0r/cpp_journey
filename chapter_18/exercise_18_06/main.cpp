#include <iostream>
#include <string>

std::string cat_dot(const std::string& s1, 
                    const std::string& s2, 
                    const std::string& s3) { return s1 + s3 + s2; }

int main()
{
    std::string s1 = "Niels";
    std::string s2 = "Bohr";
    std::string s3;

    std::cout << "Input a string to separate two other strings" << std::endl;
    std::cout << "Enter: ";
    std::cin >> s3;

    std::cout << cat_dot(s1, s2, s3);

    return 0;
}
