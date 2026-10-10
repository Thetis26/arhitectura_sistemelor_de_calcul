#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess = 0;

    while (guess != secret) {
        cout << "Your guess: ";
        cin >> guess;
        if (guess < secret) {
            cout << "Higher!" << endl;
        } else if (guess > secret) {
            cout << "Lower!" << endl;
        }
    }
    cout << "Correct!" << endl;

    // int suma = 0;

    // int i = 1;              // 1. pornirea
    // while (i <= 5) {        // 2. conditia
    //     cout << i << " ";
    //     suma = suma + i;
    //     i++;                // 3. pasul
    // }

    // cout << endl << "Suma: " << suma << endl;


    return 0;
}