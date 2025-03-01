// Caio Costa Cunha . João Pedro Santos

#include <iostream>
using namespace std;

int main() {
    int N, T, V, distanciaTotal = 0;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> T >> V;
        distanciaTotal += T * V;
    }
    
    cout << distanciaTotal << endl;
}
