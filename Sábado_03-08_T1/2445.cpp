// Caio Costa Cunha . João Pedro Santos

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> palitos(N);
    for (int i = 0; i < N; ++i) {
        cin >> palitos[i];
    }


    sort(palitos.begin(), palitos.end());

    long long soma = 0;
    int maiorPoligono = 0;

    for (int i = 0; i < N; ++i) {
        if (soma > palitos[i]) {
            maiorPoligono = i + 1;
        }
        soma += palitos[i];
    }


    if (soma - palitos[N-1] > palitos[N-1]) {
        maiorPoligono = N;
    }

    cout << maiorPoligono << endl;

    return 0;
}
