//Caio Costa Cunha

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<pair<int, int>> pistas;
    vector<int> distancias;

    for (int i = 0; i < K; i++) {
        int x, y, d;
        cin >> x >> y >> d;
        pistas.push_back({x, y});
        distancias.push_back(d);
    }

    int tesouroX = -1, tesouroY = -1;
    bool encontrado = false;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            bool valido = true;

            for (int p = 0; p < K; p++) {
                int distancia = abs(i - pistas[p].first) + abs(j - pistas[p].second);
                if (distancia != distancias[p]) {
                    valido = false;
                    break;
                }
            }

            if (valido) {
                if (encontrado) {
                    cout << "-1 -1" << endl;
                    return 0;
                }
                tesouroX = i;
                tesouroY = j;
                encontrado = true;
            }
        }
    }

    cout << tesouroX << " " << tesouroY << endl;
}
