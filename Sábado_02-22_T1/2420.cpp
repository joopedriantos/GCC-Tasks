// Caio Costa Cunha . João Pedro Santos

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);
    long long somaTotal = 0;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
        somaTotal += a[i];
    }

    long long somaEsquerda = 0;
    int k = 0;

    for (int i = 0; i < N; i++) {
        somaEsquerda += a[i];

        if (somaEsquerda * 2 == somaTotal) {
            k = i + 1;
            break;
        }

        for (int j = 0; j < N; j++) {
            if (i == j) {
                continue;
            }
        }
    }

    cout << k << endl;
}