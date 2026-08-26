#include <iostream>
#include <vector>
#include <random>

void welcome_menu()
{
    std::cout << "Welcome to Rock, Paper, Scissors!!" << std::endl;
    std::cout << "\nEnter one of the choices below:" << std::endl;
    std::cout << "1. Rock - 'r' or 'R'" << std::endl;
    std::cout << "2. Paper - 'p' or 'P'" << std::endl;
    std::cout << "3. Scissors - 's' or 'S'" << std::endl;
    std::cout << "4. Quit - 'q' or 'Q'" << std::endl; 
}

// 1 = Rock
// 2 = Paper
// 3 = Scissors
int computer_choice()
{
    // 1. Obtain a random seed from the hardware
    std::random_device rd;
    
    // 2. Initialize the standard Mersenne Twister engine with the seed
    std::mt19937 gen(rd());
    
    // 3. Define the distribution range [inclusive, inclusive]
    std::uniform_int_distribution<int> distrib(1, 3);
    
    return distrib(gen);
}

void print_choices(char userChoice, int computerChoice)
{
    // User chooses Rock
    if      ((userChoice == 'r' || userChoice == 'R') && computerChoice == 1) { std::cout << "\nYou chose Rock and computer chose Rock." << std::endl; }
    else if ((userChoice == 'r' || userChoice == 'R') && computerChoice == 2) { std::cout << "\nYou chose Rock and computer chose Paper." << std::endl; }
    else if ((userChoice == 'r' || userChoice == 'R') && computerChoice == 3) { std::cout << "\nYou chose Rock and computer chose Scissors." << std::endl; }
    
    // User chooses Scissors
    else if ((userChoice == 's' || userChoice == 'S') && computerChoice == 1) { std::cout << "\nYou chose Scissors and computer chose Rock." << std::endl; }
    else if ((userChoice == 's' || userChoice == 'S') && computerChoice == 2) { std::cout << "\nYou chose Scissors and computer chose Paper." << std::endl; }
    else if ((userChoice == 's' || userChoice == 'S') && computerChoice == 3) { std::cout << "\nYou chose Scissors and computer chose Scissors." << std::endl; }
    
    // User chooses Paper
    else if ((userChoice == 'p' || userChoice == 'P') && computerChoice == 1) { std::cout << "\nYou chose Paper and computer chose Rock." << std::endl; }
    else if ((userChoice == 'p' || userChoice == 'P') && computerChoice == 2) { std::cout << "\nYou chose Paper and computer chose Paper." << std::endl; }
    else if ((userChoice == 'p' || userChoice == 'P') && computerChoice == 3) { std::cout << "\nYou chose Paper and computer chose Scissors." << std::endl; }
}

void determine_winner(char userChoice, int computerChoice)
{
    // User chooses Rock
    if      ((userChoice == 'r' || userChoice == 'R') && computerChoice == 1) { std::cout << "\nIt's a draw!" << std::endl; }
    else if ((userChoice == 'r' || userChoice == 'R') && computerChoice == 2) { std::cout << "\nYou lose!" << std::endl; }
    else if ((userChoice == 'r' || userChoice == 'R') && computerChoice == 3) { std::cout << "\nYou win!" << std::endl; }
    
    // User chooses Scissors
    else if ((userChoice == 's' || userChoice == 'S') && computerChoice == 1) { std::cout << "\nYou lose!" << std::endl; }
    else if ((userChoice == 's' || userChoice == 'S') && computerChoice == 2) { std::cout << "\nYou win!" << std::endl; }
    else if ((userChoice == 's' || userChoice == 'S') && computerChoice == 3) { std::cout << "\nIt's a draw!" << std::endl; }
    
    // User chooses Paper
    else if ((userChoice == 'p' || userChoice == 'P') && computerChoice == 1) { std::cout << "\nYou win!" << std::endl; }
    else if ((userChoice == 'p' || userChoice == 'P') && computerChoice == 2) { std::cout << "\nIt's a draw!" << std::endl; }
    else if ((userChoice == 'p' || userChoice == 'P') && computerChoice == 3) { std::cout << "\nYou lose!" << std::endl; }
    
    else if (userChoice != 'r' && userChoice != 'R' && userChoice != 's' && userChoice != 'S' && userChoice != 'p' && userChoice != 'P' && userChoice != 'q' && userChoice != 'Q') { std::cout << "\nInvalid input." << std::endl; }
}

int main()
{
    char userChoice = ' ';
    
    int computerChoice = 0;
    
    welcome_menu();
    
    while(userChoice != 'q' && userChoice != 'Q')
    {
        std::cout << "\nEnter: ";
        std::cin >> userChoice;
        
        computerChoice = computer_choice();
        
        print_choices(userChoice, computerChoice);
        determine_winner(userChoice, computerChoice);
    }
    
    return 0;
}


