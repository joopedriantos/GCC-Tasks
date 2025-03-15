//Caio Costa Cunha

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int C;
    cin >> C;

    while (C--) {
        int N;
        cin >> N;

        int x_branca, y_branca;
        cin >> x_branca >> y_branca;

        int menor_bola = -1;
        double menor_distancia = 1e9;

        for (int i = 1; i <= N; i++) {
            int x, y;
            cin >> x >> y;

            double distancia = sqrt(pow(x - x_branca, 2) + pow(y - y_branca, 2));

            if (distancia < menor_distancia) {
                menor_distancia = distancia;
                menor_bola = i;
            }
        }

        cout << menor_bola << endl;
    }
}
