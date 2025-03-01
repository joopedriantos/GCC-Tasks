// Caio Costa Cunha . João Pedro Santos

#include <iostream>
using namespace std;

int main() {
    int L, D, K, P;
    cin >> L >> D >> K >> P;

    int custo_distancia = L * K;
    int qtd_pedagios = L / D;
    int custo_pedagios = qtd_pedagios * P;

    int custo_total = custo_distancia + custo_pedagios;

    cout << custo_total << endl;
}
