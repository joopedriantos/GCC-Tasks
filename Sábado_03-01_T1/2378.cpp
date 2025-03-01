// Caio Costa Cunha . João Pedro Santos

#include <iostream>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    int pessoas_no_elevador = 0;
    bool excedeu = false;

    for (int i = 0; i < N; i++) {
        int S, E;
        cin >> S >> E;

        pessoas_no_elevador -= S; // Pessoas saindo
        pessoas_no_elevador += E; // Pessoas entrando

        if (pessoas_no_elevador > C) {
            excedeu = true;
        }
    }

    cout << (excedeu ? 'S' : 'N') << endl;
}
