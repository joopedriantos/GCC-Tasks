// Caio Costa Cunha . João Pedro Santos
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

// Função para calcular o MDC
int mdc(int a, int b) {
    return gcd(a, b);
}

// Função para somar frações e reduzi-las
void soma_fracoes(int a, int b, int c, int d) {
    int numerador = a * d + c * b;
    int denominador = b * d;
    int divisor = mdc(numerador, denominador);
    
    cout << (numerador / divisor) << " " << (denominador / divisor) << endl;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    soma_fracoes(a, b, c, d);
}