#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int MAX_N = 1000000;
    vector<int> somaDivisores(MAX_N + 1, 0);  
    vector<long long> numerosDivinos(MAX_N + 1, 0);  

    for (int i = 1; i <= MAX_N; i++) {
        for (int j = i; j <= MAX_N; j += i) {
            somaDivisores[j] += i;
        }
    }

    for (int i = 1; i <= MAX_N; i++) {
        numerosDivinos[i] = numerosDivinos[i - 1] + somaDivisores[i];
    }

    int N;
    while (cin >> N && N != 0) {
        cout << numerosDivinos[N] << endl;
    }
}
