#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Welcome in." << endl;
    } else if (age >= 16) {
        cout << "Come back in a couple of years." << endl;
    } else {
        cout << "Go home." << endl;
    }

    // string message = (age >= 18) ? "Welcome in." : "Go home.";
    // cout << message << endl;
    // string message2 = (age >= 18) ? "Welcome in." : (age >= 16) ? "Come back in a couple of years." : "Go home.";
    // cout << message2 << endl;
    
    return 0;
}
