// Caio Costa Cunha . João Pedro Santos
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N; 

    while (N--) {
        int K;
        cin >> K;

        set<string> idiomas; 

        for (int i = 0; i < K; i++) {
            string idioma;
            cin >> idioma;
            idiomas.insert(idioma);
        }

        if (idiomas.size() > 1) 
            cout << "ingles" << endl;
        else 
            cout << *idiomas.begin() << endl; 
    }

}
