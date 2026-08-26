#include <iostream>

int main()
{
    int high = 100;
    int middle = 50;
    int low = 0;

    char choice = ' ';
    bool numFound = false;
    char foundNum = ' ';

    std::cout << "\nI will try to guess your number between 0 and 100." << std::endl;
    std::cout << "\n";

    while (!numFound)
    {
        std::cout << "Is your number less than " << middle << "? (y/n): ";
        std::cin >> choice;

        if (choice == 'y' || choice == 'Y')
        {
            high = middle;
            middle = (low + high) / 2;
        }

        else if (choice == 'n' || choice == 'N')
        {
            low = middle;
            middle = (low + high) / 2;
        }

        if (high - low <= 6)
        {
            std::cout << "Is your number " << middle << "? (y/n): ";
            std::cin >> foundNum;
            
            if (foundNum == 'y' || foundNum == 'Y') { numFound = true; }
            else { continue; }
        }
    }

    return 0;
}
