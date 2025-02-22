// Caio Costa Cunha . João Pedro Santos

#include <iostream>
#include <vector>
using namespace std;

int encontrarMaiorSequencia(vector<int>& valores, int index, int maiorSequencia, int sequenciaAtual) {
    if (index >= valores.size()) {
        return maiorSequencia;
    }

    if (index > 0 && valores[index] == valores[index - 1]) {
        sequenciaAtual++;
    } else {
        sequenciaAtual = 1;
    }

    if (sequenciaAtual > maiorSequencia) {
        maiorSequencia = sequenciaAtual;
    }

    return encontrarMaiorSequencia(valores, index + 1, maiorSequencia, sequenciaAtual);
}

int main() {
    int N;
    cin >> N;

    vector<int> valores(N);
    for (int i = 0; i < N; i++) {
        cin >> valores[i];
    }

    int maiorSequencia = encontrarMaiorSequencia(valores, 1, 1, 1);

    cout << maiorSequencia << endl;
}