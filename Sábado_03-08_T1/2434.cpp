// Caio Costa Cunha . João Pedro Santos

#include <iostream>
using namespace std;

int main() {
    int N, S, movimentacao, menorSaldo;
    cin >> N >> S;

    menorSaldo = S;

    for (int i = 0; i < N; i++) {
        cin >> movimentacao;
        S += movimentacao;
        if (S < menorSaldo) {
            menorSaldo = S;
        }
    }

    cout << menorSaldo << endl;
    
    return 0;
}
