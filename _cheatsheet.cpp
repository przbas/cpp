// naglowki
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// pojedyncza linia komentarza

/* To jest komentarz
    w wielu liniach */

// przed glowna funkcja main() mozna definiowac wlasne funkcje
int SumaDwochLiczb(int a, int b) {
    int suma; // zmienna lokalna widoczna tylko w funkcji

    suma = a + b;

    return suma; // wartosc zwracana przez funkcje
}


// funkcja main
int main() {

    // Deklarowanie zmiennych
    // typ_zmiennej nazwa_zmiennej;

    // zmienna typu int (liczba calkowita)
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

    // tablice zmiennych
    int tablica[3] = {3,5,7};

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

    // instrukcja warunkowa do sprawdzania wielu warunkow
    if (liczba < 67) {
        cout << "Zmienna liczba jest mniejsza od 67" << endl;
    } else if (liczba > 67) {
        cout << "Zmienna liczba jest wieksza od 67" << endl;
    } else {
        cout << "Zmienna liczba ma wartosc 67" << endl;
    }

    // petla typu for
    for (int i = 0; i < 5; i++) {
        cout << "Hej po raz " << i + 1 << endl;
    }

    // petla typu while
    while (liczba > 10) {
        cout << liczba << endl;
        liczba /= 2; // to samo co liczba=liczba/2
    }

    // operatory arytmetyczne
    liczba = 5 + 8; // + dodawanie
    liczba = liczba - 3; // - odejmowanie
    ulamek = ulamek * 3; // * mnozenie
    liczba = liczba / 3; // / dzielenie dla int calkowity wynik dzielenia
    ulamek = ulamek / 5; // / dzielenie ulamka np float
    liczba = liczba % 3; // % reszta z dzielenia calkowitego (modulo)

    // funkcje matematyczne z biblioteki cmath
    ulamek2 = pow(ulamek2, -2); // potegowanie, drugi argument to wykladnik potegi
    ulamek2 = sqrt(2.0); // pierwiastek kwadratowy
    ulamek2 = cbrt(2.0); // pierwiastek szescienny
    liczba = ceil(ulamek); // zaokraglenie w gore (sufit)
    liczba = floor(ulamek); // zaokraglenie w dol (podloga)
    liczba = round(ulamek); // zaokraglenie tradycyjne
    liczba = trunc(ulamek); // odciecie czesci ulamkowej
    liczba = abs(-5); // wartosc bezwzgledna
    ulamek2 = log10(2.0); // logarytm dziesietny


    // wywolanie funkcji i wyswietlenie wyniku

    cout << SumaDwochLiczb(liczba, 5);

    return 0;
}
