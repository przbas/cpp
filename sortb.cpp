// Pliki naglowkow
#include <iostream>
#include <string>


using namespace std;


// funkcja main jest punktem startowym programu
int main() {

    int n=6;
    int A[n] = {45, 7, 56, 78, 6, 15};

    // sortowanie babelkowe
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(A[j]>A[j+1]){
                swap(A[j], A[j+1]);
            }
        }
    }


    for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }

    return 0; // infromacja dla systemu, ze wszystko ok
}
