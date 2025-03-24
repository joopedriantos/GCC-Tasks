//Caio Costa Cunha

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int lados[3] = {A, B, C};
    sort(lados, lados + 3);

    int a = lados[0], b = lados[1], c = lados[2];

    if (a + b <= c) {
        cout << "n" << endl;
    } else {

        int somaQuadrados = a * a + b * b;
        int quadradoMaiorLado = c * c;

        if (somaQuadrados > quadradoMaiorLado) {
            cout << "a" << endl;
        } else if (somaQuadrados == quadradoMaiorLado) {
            cout << "r" << endl;
        } else {
            cout << "o" << endl;
        }
    }
}
