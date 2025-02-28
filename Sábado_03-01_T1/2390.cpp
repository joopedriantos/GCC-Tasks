// Caio Costa Cunha . João Pedro Santos

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int tempo_ligado = 0;
    int ultimo_tempo = -10;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        
        if (t - ultimo_tempo >= 10) {
            tempo_ligado += 10;
        } else {
            tempo_ligado += t - ultimo_tempo;
        }
        
        ultimo_tempo = t;
    }

    cout << tempo_ligado << endl;
}