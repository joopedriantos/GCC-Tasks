// Caio Costa Cunha . João Pedro Santos

#include <iostream>
using namespace std;

int main() {
    int A, N, F, estrelasVisiveis = 0;
    cin >> A >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> F;
        if (A * F >= 40000000) {
            estrelasVisiveis++;
        }
    }
    
    cout << estrelasVisiveis << endl;
}