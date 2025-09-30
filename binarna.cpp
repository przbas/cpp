// Pliki naglowkow
#include <iostream>
#include <string>

using namespace std;

// definicja wlasnej funkcji NaBinarna
// funkcja zwraca ciag znakow (string)
// a jako parametr pobiera liczbe calkowita (int)
string NaBinarna(int decymalna) {
    string bina;

    while(decymalna > 0) {
        bina = to_string(decymalna % 2) + " " + bina;
        decymalna = decymalna / 2;
    }
    return bina;
}

// funkcja main jest punktem startowym programu
int main() {

    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    // wywolanie funkcji i od razu wyswietlenie tego co zwraca funkcja
    cout << NaBinarna(liczba);

    return 0; // infromacja dla systemu, ze wszystko ok
}

