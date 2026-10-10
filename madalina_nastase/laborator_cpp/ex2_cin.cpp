#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "What is your name? ";
    cin >> name;
    cout << "How old are you? ";
    cin >> age;

    cout << "Hi " << name << ", next year you will be " << age + 1 << "." << endl;
    return 0;
}