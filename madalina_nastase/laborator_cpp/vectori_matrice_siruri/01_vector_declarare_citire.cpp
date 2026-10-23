
#include <iostream>
using namespace std;

int main() {
    int t[100];   
    int n;    

    cout << "Cate zile? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Temperatura in ziua " << i + 1 << ": ";
        cin >> t[i];
    }

    cout << endl << "Temperaturile citite: ";
    for (int i = 0; i < n; i++)
        cout << t[i] << " ";
    cout << endl;

    cout << endl << "Indice | Valoare" << endl;
    for (int i = 0; i < n; i++)
        cout << "  t[" << i << "] = " << t[i] << endl;

    cout << endl << "Prima zi:   " << t[0] << " grade" << endl;
    cout << "Ultima zi:  " << t[n - 1] << " grade" << endl;

    t[0] = t[0] + 1;
    cout << "Prima zi corectata: " << t[0] << " grade" << endl;

    return 0;
}

