#include <iostream>

using namespace std;

int main() {
    double firstNumber;
    double secondNumber;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    if (firstNumber == secondNumber) {
        cout << "The numbers are equal.\n";
    } else if (firstNumber < secondNumber) {
        cout << "The first number is smaller: " << firstNumber << ".\n";
    } else {
        cout << "The second number is smaller: " << secondNumber << ".\n";
    }

    return 0;
}
