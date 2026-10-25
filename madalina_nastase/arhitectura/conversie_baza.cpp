#include <iostream>
using namespace std;

// Conversia din baza 10 in baza b

int main() {
    int x, b;
    int a[100];   // a[1], a[2], ..., a[k] = cifrele in baza b

    cout << "x = ";
    cin >> x;
    cout << "b = ";
    cin >> b;

    int k = 1;
    a[k] = x % b;
    x = x / b;

    while (x != 0) {
        k = k + 1;
        a[k] = x % b;
        x = x / b;
    }

    // afisam de la a[k] la a[1]
    for (int i = k; i >= 1; i--) {
        if (a[i] < 10)
            cout << a[i];
        else
            cout << (char)('A' + a[i] - 10);   // pentru baze > 10: 10->A, 11->B, ...
    }
    cout << endl;

    return 0;
}