#include <bits/stdc++.h>
using namespace std;
int main () {
    int number = 10;
    int guess;
    int attempts = 0;
    while (guess != number){
        cout << "Enter a guess: ";
        cin >> guess;
        attempts++;
    }
    cout << "You guessed the number in " << attempts << " attempts." << endl;
    return 0;
}