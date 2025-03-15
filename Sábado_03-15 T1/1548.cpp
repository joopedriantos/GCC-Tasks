// Caio Costa Cunha . João Pedro Santos
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
        vector<int> notas(M);
        for (int i = 0; i < M; i++) {
            cin >> notas[i];
        }

        vector<int> ordenado = notas;
        sort(ordenado.rbegin(), ordenado.rend());

        int count = 0;
        for (int i = 0; i < M; i++) {
            if (notas[i] == ordenado[i]) {
                count++;
            }
        }

        cout << count << endl;
    }
}
