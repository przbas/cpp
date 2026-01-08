// Pliki naglowkow
#include <iostream>
#include <string>
#include <cmath> // abs( )

using namespace std;


// funkcja main jest punktem startowym programu
int main() {

    float liczba, pierwiastek;

    cout << "Podaj liczbe do obliczenia pierwiastka: ";

    cin >> liczba;

    pierwiastek = liczba/2;

    while(abs(pierwiastek-liczba/pierwiastek)>0.001){
        cout << pierwiastek << "  " << liczba/pierwiastek<<endl;
        pierwiastek = (pierwiastek+liczba/pierwiastek)/2;
    }

    cout << "Wartosc pierwiastka z liczby "<<liczba<<
        " wynosi: "<<pierwiastek;

    return 0; // infromacja dla systemu, ze wszystko ok
}
