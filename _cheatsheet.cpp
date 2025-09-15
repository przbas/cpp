// naglowki
#include <iostream>
#include <string>

using namespace std;

// pojedyncza linia komentarza

/* To jest komentarz
    w wielu liniach */

// funkcja main
int main() {

    // Deklarowanie zmiennych
    // typ_zmiennej nazwa_zmiennej;

    // zmienna typu int (liczba ca³kowita)
    int liczba = 67;

    // zmienna typu char (jeden znak)
    char znak = 'A';
    znak = 75; // mozna podac kod znaku w postaci liczby

    // zmienna typu float (liczba jako ulamek dziesietny)
    float ulamek = 1.23;

    // zmienna typu double (ulamek dziesietny podwojnej precyzji)
    double ulamek2 = 1.2345;

    // zmienna typu bool (test logiczny przyjmuje tylko dwie wartosci true lub false)
    bool test = true;
    test = false;

    // zmienna typu string (lancuch znakow)
    string tekst = "Jestem lancuchem znakow.";

    // wyswietlanie na ekran
    cout << "Hello World!" << endl;
    cout << tekst << endl;
    cout << "Wpisz Imie" << endl;

    // pobieranie tekstu z klawiatury
    cin >> tekst;
    cout << "Wpisales: " + tekst + " jako imie." << endl; // wyswietlenie wpisanego tekstu

    // instrukcja warunkowa
    if (tekst.length() < 7) {
        cout << "krotkie imie" << endl;
    } else {
        cout << "dlugie imie" << endl;
    }



    return 0;
}
