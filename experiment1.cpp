#include <iostream>
#include <ctime>
using namespace std;
int main() {
     srand(time(0));
    int targetno = rand() % 100 + 1;
    int guess;
    cout << "Guess the number between 1 and 100: ";
    while (true) {
        cin >> guess;
        cout<<"Target no was"<<targetno<<endl;
         if (guess == targetno) {
            cout << "Correct! You guessed the number." << endl;
            break;
        } else {
            cout << "Try again: ";
        }
        }
    

    return 0;
}