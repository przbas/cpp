// Pliki naglowkow
#include <iostream>
#include <string>


using namespace std;

// Funkcja szyfrujaca
string Cezar(int k, string tekst) {
    char kod;
    int dl = tekst.length();
    string szyfrogram;

    for(int i=0; i<dl; i++){
        if(tekst[i] == ' '){
            kod = ' ';
        } else {
            kod = tekst[i] + k;
            if(kod > 'Z'){
                kod = kod - 26;
            }
        }
        szyfrogram = szyfrogram + kod;
    }
    return szyfrogram;
}

// funkcja main jest punktem startowym programu
int main() {

    string jawny;
    int klucz;

    cout << "Wpisz tekst do szyfrowania: ";
    getline(cin, jawny);

    cout << "Podaj klucz";
    cin >> klucz;

    cout << "Szyfrogram: " << Cezar(klucz, jawny);

    return 0; // infromacja dla systemu, ze wszystko ok
}
