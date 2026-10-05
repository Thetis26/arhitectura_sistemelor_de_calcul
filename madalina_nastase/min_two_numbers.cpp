#include <iostream>

using namespace std;

int main() {
    double firstNumber;
    double secondNumber;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    cout << "Minimum: "
              << (firstNumber < secondNumber ? firstNumber : secondNumber)
              << '\n';

    return 0;
}
