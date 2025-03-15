//Caio Costa Cunha

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;  
    cin >> N;  

    while (N--) {
        int M;
        cin >> M;

        vector<int> notas(M), ordenado(M);

        for (int i = 0; i < M; i++) {
            cin >> notas[i];
            ordenado[i] = notas[i];
        }

        sort(ordenado.rbegin(), ordenado.rend());

        int nao_trocados = 0;
        for (int i = 0; i < M; i++) {
            if (notas[i] == ordenado[i]) {
                nao_trocados++;
            }
        }

        cout << nao_trocados << endl;
    }
}
