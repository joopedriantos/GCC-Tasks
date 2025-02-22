// Caio Costa Cunha . João Pedro Santos

#include <iostream>
using namespace std;

int calcularPontoTermino(int C, int N) {
    if (C < N) {
        return C;
    }
    return calcularPontoTermino(C - N, N);
}

int main() {
    int C, N;
    cin >> C >> N;

    int pontoTermino = calcularPontoTermino(C, N);

    cout << pontoTermino << endl;
}