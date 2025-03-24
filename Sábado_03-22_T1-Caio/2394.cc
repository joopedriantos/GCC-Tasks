//Caio Costa Cunha

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int vencedor = 0;
    int menorTempo = numeric_limits<int>::max();

    for (int i = 1; i <= N; i++) {
        int tempoTotal = 0;

        for (int j = 0; j < M; j++) {
            int tempo;
            cin >> tempo;
            tempoTotal += tempo;
        }

        if (tempoTotal < menorTempo) {
            menorTempo = tempoTotal;
            vencedor = i;
        }
    }

    cout << vencedor << endl;

}
