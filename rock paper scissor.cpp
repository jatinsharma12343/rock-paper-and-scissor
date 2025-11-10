#include <iostream>
#include <cstdlib>  
#include <ctime>    
#include <limits>   

using namespace std;

void clearScreen() {
#ifdef _WIN32
    system("cls"); // For Windows
#else
    system("clear"); // For macOS/Linux
#endif
}

int main() {
    string choices[] = {"Rock", "Paper", "Scissors"};
    char playAgain;

    srand(static_cast<unsigned int>(time(0))); // Seed random generator

    do {
        clearScreen();

        int userChoice, computerChoice;
        cout << "=============================\n";
        cout << "     ROCK PAPER SCISSORS     \n";
        cout << "=============================\n\n";

        cout << "1. Rock\n";
        cout << "2. Paper\n";
        cout << "3. Scissors\n";
        cout << "Enter your choice (1-3): ";
        cin >> userChoice;

        // Validate input
        while (cin.fail() || userChoice < 1 || userChoice > 3) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter 1, 2, or 3: ";
            cin >> userChoice;
        }

        computerChoice = rand() % 3 + 1;

        cout << "\nYou chose: " << choices[userChoice - 1] << endl;
        cout << "Computer chose: " << choices[computerChoice - 1] << endl;

        // Determine winner
        if (userChoice == computerChoice) {
            cout << "\nIt's a draw!\n";
        } else if ((userChoice == 1 && computerChoice == 3) ||
                   (userChoice == 2 && computerChoice == 1) ||
                   (userChoice == 3 && computerChoice == 2)) {
            cout << "\n🎉 You win!\n";
        } else {
            cout << "\n💻 Computer wins!\n";
        }

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThanks for playing! 👋\n";
    return 0;
}
