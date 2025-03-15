#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    while (cin >> N >> K) {
        vector<int> notas(N);

        for (int i = 0; i < N; i++) {
            cin >> notas[i];
        }

        sort(notas.rbegin(), notas.rend());

        long long soma = 0;
        for (int i = 0; i < K; i++) {
            soma = (soma + notas[i]) % MOD;
        }

        cout << soma << "\n";
    }
}
