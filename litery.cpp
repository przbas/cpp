// Pliki naglowkow
#include <iostream>
#include <string>


using namespace std;

// Funkcja zwroci lancuch znakow zawierajacy tylko wielkie litery
// z lancucha znakow przekazanego do funkcji
string TylkoWielkie(string tekst) {
    string wielkie;
    int dl = tekst.length(); // dlugosc tekstu

    // petla for powtorzy sie tyle razy ile jest liter w zmiennej tekst
    for (int i = 0; i < dl; i++) {
        // warunek if sprawdza czy aktualny znak w tekst jest wielka litera
        if (tekst[i] >= 65 && tekst[i] <= 90) {
            wielkie = wielkie + tekst[i];
        }
    }
    return wielkie; // zwracany lancuch zawierajacy tylko wielkie litery
}

// funkcja main jest punktem startowym programu
int main() {

    string dlugiTekst;

    cout << "Wpisz tekst" << endl;
    cin >> dlugiTekst; // pobranie tekstu z klawiatury

    // wywolanie funkcji i przekazanie do niej pobrany dlugiTekst;
    cout << TylkoWielkie(dlugiTekst);

    return 0; // infromacja dla systemu, ze wszystko ok
}
