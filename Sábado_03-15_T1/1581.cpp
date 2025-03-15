//Caio Costa Cunha

#include <iostream>
#include <set>
using namespace std;

int main() {
    int N; 
    cin >> N;

    while (N--) {
        int K;
        cin >> K;

        set<string> idiomas;

        while (K--) {
            string idioma;
            cin >> idioma;
            idiomas.insert(idioma);
        }

        if (idiomas.size() > 1) {
            cout << "ingles" << endl;
        } else {
            cout << *idiomas.begin() << endl;
        }
    }
}
