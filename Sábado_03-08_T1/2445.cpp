// Caio Costa Cunha . João Pedro Santos

#include <iostream>
#include <algorithm>

using namespace std;

int maior_poligono(int N, int palitos[]) {
    sort(palitos, palitos + N);
    
    for (int i = N - 1; i >= 2; i--) {
        if (palitos[i] < palitos[i - 1] + palitos[i - 2]) {
            return i + 1;
        }
    }
    return 0;
}

int main() {
    int N;
    cin >> N;
    
    int palitos[N];
    for (int i = 0; i < N; i++) {
        cin >> palitos[i];
    }
    
    cout << maior_poligono(N, palitos) << endl;
}
