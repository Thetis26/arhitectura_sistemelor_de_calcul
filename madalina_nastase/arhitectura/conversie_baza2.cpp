#include <iostream>
#include <string>
using namespace std;

int main()
{
    int b;
    string s;

    cout << "Baza b (intre 2 si 36): ";
    cin >> b;

    if (b < 2 || b > 36)
    {
        cout << "Baza invalida!" << endl;
        return 0;
    }

    cout << "Numarul scris in baza " << b << ": ";
    cin >> s;

    long long rezultat = 0;   
    long long putere = 1;     
    bool valid = true;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        char c = s[i];
        int cifra;

        if (c >= '0' && c <= '9')
            cifra = c - '0';          // '7' -> 7
        else if (c >= 'A' && c <= 'Z')
            cifra = c - 'A' + 10;     // 'A' -> 10, 'F' -> 15
        else if (c >= 'a' && c <= 'z')
            cifra = c - 'a' + 10;     // acceptam si litere mici
        else
            cifra = 99;               // caracter care nu e cifra

        if (cifra >= b)  // cifra nu exista in baza b
        {
            valid = false;
            break;
        }

        rezultat = rezultat + cifra * putere;
        putere = putere * b;
    }

    if (valid)
        cout << s << " (baza " << b << ") = " << rezultat << " (baza 10)" << endl;
    else
        cout << "Numarul contine cifre care nu exista in baza " << b << "!" << endl;

    return 0;
}