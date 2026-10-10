
#include <iostream>
#include <string>
#include <climits>   // de aici vin INT_MAX si LLONG_MAX (valorile maxime)
using namespace std;

int main() {
    // ----- int: numere intregi -----
    int studenti = 20;
    int grupe = 3;

    cout << "=== int: numere intregi ===" << endl;
    cout << "Ocupa " << sizeof(int) << " bytes. Maximul este " << INT_MAX << endl;
    cout << "studenti + grupe = " << studenti + grupe << endl;
    cout << "studenti - grupe = " << studenti - grupe << endl;
    cout << "studenti * grupe = " << studenti * grupe << endl;
    cout << "studenti / grupe = " << studenti / grupe << "  (catul)" << endl;
    cout << "studenti % grupe = " << studenti % grupe << "  (restul)" << endl;
    cout << endl;

    // ----- long long: numere intregi foarte mari -----
    long long secundePeAn = 31536000;
    long long secundeIn100Ani = 100 * secundePeAn;

    cout << "=== long long: numere intregi foarte mari ===" << endl;
    cout << "Ocupa " << sizeof(long long) << " bytes. Maximul este " << LLONG_MAX << endl;
    cout << "100 de ani in secunde = " << secundeIn100Ani << endl;
    cout << "Numarul acesta nu incape intr-un int." << endl;
    cout << endl;

    // ----- double: numere cu virgula -----
    double pret = 49.99;
    int bucati = 3;

    cout << "=== double: numere cu virgula ===" << endl;
    cout << "Ocupa " << sizeof(double) << " bytes. Retine cam 15 cifre exacte." << endl;
    cout << "3 produse a cate 49.99 lei = " << pret * bucati << " lei" << endl;
    cout << endl;

    // ----- Impartirea: int vs double -----
    int a = 7;
    int b = 2;
    double c = 7;

    cout << "=== Impartirea: int vs double ===" << endl;
    cout << "int / int:     7 / 2   = " << a / b << "    (zecimalele se pierd)" << endl;
    cout << "restul:        7 % 2   = " << a % b << endl;
    cout << "double / int:  7.0 / 2 = " << c / b << endl;
    cout << endl;

    // Capcana: media notelor 9, 8 si 8
    int suma = 9 + 8 + 8;
    double mediaGresita = suma / 3;     // int / int: se pierd zecimalele
    double mediaCorecta = suma / 3.0;   // int / double: rezultat corect

    cout << "Media notelor 9, 8, 8:" << endl;
    cout << "suma / 3   = " << mediaGresita << "        (gresit)" << endl;
    cout << "suma / 3.0 = " << mediaCorecta << "  (corect)" << endl;
    cout << endl;

    // ----- char: un singur caracter -----
    char calificativ = 'A';

    cout << "=== char: un singur caracter ===" << endl;
    cout << "Ocupa " << sizeof(char) << " byte." << endl;
    cout << "Calificativul este " << calificativ << endl;
    cout << endl;

    // ----- bool: adevarat sau fals -----
    bool admis = mediaCorecta >= 5;

    cout << "=== bool: adevarat sau fals ===" << endl;
    cout << "Ocupa " << sizeof(bool) << " byte. Are doar doua valori: 1 (adevarat) sau 0 (fals)." << endl;
    cout << "Este admis? " << admis << endl;
    cout << endl;

    // ----- string: text -----
    string prenume = "Ana";
    string nume = "Popescu";
    string numeComplet = prenume + " " + nume;

    cout << "=== string: text ===" << endl;
    cout << "Nu are marime fixa: creste odata cu textul." << endl;
    cout << "Numele complet: " << numeComplet << endl;
    cout << "Are " << numeComplet.length() << " caractere." << endl;

    return 0;
}