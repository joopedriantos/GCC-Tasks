// Caio Costa Cunha . João Pedro Santos
#include <iostream>

using namespace std;

int calcular_volume_atual(int V, int T, int ajustes[]) {
    for (int i = 0; i < T; i++) {
        V += ajustes[i];
        if (V > 100) V = 100;
        if (V < 0) V = 0;
    }
    return V;
}

int main() {
    int V, T;
    cin >> V >> T;
    
    int ajustes[T];
    for (int i = 0; i < T; i++) {
        cin >> ajustes[i];
    }
    
    cout << calcular_volume_atual(V, T, ajustes) << endl;
}