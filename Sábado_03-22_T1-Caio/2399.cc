//Caio Costa Cunha

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> tabuleiro(N);
    
    for (int i = 0; i < N; i++) {
        cin >> tabuleiro[i];
    }

    for (int i = 0; i < N; i++) {
        int minas = tabuleiro[i];
        if (i > 0) minas += tabuleiro[i - 1];
        if (i < N - 1) minas += tabuleiro[i + 1];
        cout << minas << endl;
    }
}
