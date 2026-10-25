#include <iostream>
using namespace std;

int main() {
    double x;
    int b, max;
    int a[100];   // a[1], a[2], ..., a[m] corespund lui a-1, a-2, ..., a-m

    cout << "x = ";
    cin >> x;
    cout << "b = ";
    cin >> b;
    cout << "max = ";
    cin >> max;

    int m = 1;
    a[m] = (int)(x * b);      // [x * b] = partea intreaga
    x = x * b - a[m];

    while (m < max && x != 0) {
        m = m + 1;
        a[m] = (int)(x * b);
        x = x * b - a[m];
    }

    cout << "0.";
    for (int i = 1; i <= m; i++) {
        if (a[i] < 10)
            cout << a[i];
        else
            cout << (char)('A' + a[i] - 10);   // pentru baze > 10
    }
    cout << endl;

    return 0;
}