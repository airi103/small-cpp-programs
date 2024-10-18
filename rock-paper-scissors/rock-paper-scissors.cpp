#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int choice = 0;
    int random = (rand() % 3) + 1;
    
    cout << "Rock-paper-scissors game\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: // rock
            if (random == 1) {
                cout << "System picked rock as well, tie.\n";
            }
            else if (random == 2) {
                cout << "System picked paper, you lose.\n";
            }
            else {
                cout << "System picked scissors, you win!\n";
            }
            break;
        case 2: // paper
            if (random == 1) {
                cout << "System picked rock, you win!\n";
            }
            else if (random == 2) {
                cout << "System picked paper, tie.\n";
            }
            else {
                cout << "System picked scissors, you lose.\n";
            }
            break;
        case 3: // scissors
            if (random == 1) {
                cout << "System picked rock, you lose.\n";
            }
            else if (random == 2) {
                cout << "System picked paper, you win!\n";
            }
            else {
                cout << "System picked scissors, tie.\n";
            }
            break;
        default:
            cout << "Invalid choice.\n";
    }
    return 0;
    
}
