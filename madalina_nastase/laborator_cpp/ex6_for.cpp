#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    for (int i = 1; i <= 5; i++) {   // pornirea; conditia; pasul
        cout << i << " ";
        suma = suma + i;
    }

    cout << endl << "Suma: " << suma << endl;
    return 0;
}