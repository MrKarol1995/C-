#include <iostream>
using namespace std;

int main() {
    int height;

    // Prośba użytkownika o podanie wysokości trójkąta
    cout << "Podaj wysokość trójkąta: ";
    cin >> height;

    // Pętla zewnętrzna kontroluje liczbę wierszy
    for(int i = 1; i <= height; i++) {
        // Pętla wewnętrzna kontroluje liczbę gwiazdek w każdym wierszu
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Przejście do nowej linii po wydrukowaniu wszystkich gwiazdek w danym wierszu
        cout << endl;
    }

    return 0;
}
