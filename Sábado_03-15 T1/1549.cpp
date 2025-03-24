// João Pedro Santos
#include <iostream>
#include <cmath>

using namespace std;

const double PI = acos(-1.0);
const double EPS = 1e-6;


double calcula_volume(double h, double H, double b, double B) {
    double raio_atual = b + (B - b) * (h / H); 
    return (PI * h / 3.0) * (b * b + b * raio_atual + raio_atual * raio_atual);
}


double busca_binaria(double H, double b, double B, double volume_por_pessoa) {
    double esq = 0.0, dir = H, meio;
    
    while (dir - esq > EPS) {
        meio = (esq + dir) / 2.0;
        double volume = calcula_volume(meio, H, b, B);

        if (volume < volume_por_pessoa)
            esq = meio; 
        else
            dir = meio; 
    }
    
    return (esq + dir) / 2.0;
}

int main() {
    int C;
    cin >> C;

    while (C--) {
        int N, L;
        cin >> N >> L;

        int b, B, H;
        cin >> b >> B >> H;

        double volume_por_pessoa = (double)L / N / 1000.0;
        double h = busca_binaria(H, b, B, volume_por_pessoa);

        printf("%.2f\n", h);
    }
}

