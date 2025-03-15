//Caio Costa Cunha

#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.141592653589793

double calcularVolume(double h, double b, double B, double H) {
    double Bh = b + (h / H) * (B - b); 
    return (PI / 3.0) * h * (Bh * Bh + Bh * b + b * b);
}

double encontrarAltura(double volumePorPessoa, double b, double B, double H) {
    double esq = 0.0, dir = H, meio, vol;

    for (int i = 0; i < 100; i++) { 
        meio = (esq + dir) / 2.0;
        vol = calcularVolume(meio, b, B, H);

        if (vol < volumePorPessoa)
            esq = meio;
        else
            dir = meio;
    }

    return meio;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int C;
    cin >> C;

    while (C--) {
        int N, L;
        cin >> N >> L;

        int b, B, H;
        cin >> b >> B >> H;

        double volumePorPessoa = (double)L / N;
        double altura = encontrarAltura(volumePorPessoa, b, B, H);

        cout.precision(2);
        cout << fixed << altura << "\n";
    }
}
