// Pliki naglowkow
#include <iostream>
#include <string>


using namespace std;


// funkcja main jest punktem startowym programu
int main() {

    // deklaracja stalych typu string
    const string INF_OK = "Haslo wyslalismy na adres: ";
    const string INF_BLAD = "Podane adresy sa rozne!";

    // deklaracja czterech zmiennych typu string
    string imie, nazwisko, adres_1, adres_2;

    // wyswietlenie polecen i wczytanie danych do zmiennych
    cout << "Podaj imie: "; cin >> imie;
    cout << "Podaj nazwisko: "; cin >> nazwisko;
    cout << "Podaj e-mail: "; cin >> adres_1;
    cout << "Powtorz adres: "; cin >> adres_2;

    // instrukcja warunkowa if, sprawdzenie czy adresy sa takie same
    if (adres_1 == adres_2) {
        // wyswietli komunikat zawarty w stalej INF_OK i adres
        cout << INF_OK + adres_1 << endl;
    } else {
        // wyswietli komunikat ze stalej INF_BLAD
        cout << INF_BLAD << endl;
    }

    return 0; // infromacja dla systemu, ze wszystko ok
}
