// Caio Costa Cunha . João Pedro Santos

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    vector<float> notas(5);


    for (int i = 0; i < 5; i++) {
        cin >> notas[i];
    }


    sort(notas.begin(), notas.end());

    float notaFinal = notas[1] + notas[2] + notas[3];

    cout << fixed << setprecision(1) << notaFinal << endl;
}