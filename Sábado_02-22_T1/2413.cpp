// Caio Costa Cunha . João Pedro Santos

#include <iostream> 
using namespace std;

int main() {
    int t;

    cin >> t;

    if (t < 1 || t > 1000) {
        cout << "Valor invalido! O numero deve estar entre 1 e 1000.\n";
        return 1;
    }

    int segundoLink = 0;
    for (int i = 0; i < t; i++) {
        segundoLink += 2;
    }

    int primeiroLink = 0;
    for (int i = 0; i < segundoLink; i++) {
        primeiroLink += 2;
    }

    cout << primeiroLink << endl;
    std::cout << "Programa rodando corretamente!\n";
}