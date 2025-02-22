// Caio Costa Cunha . João Pedro Santos

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros;
    int numero;
    while (true) {
        cin >> numero;
        if (numero == 0) {
            break;
        }
        numeros.push_back(numero);
    }
    if (numeros.empty()) {
        cout << "Nenhum numero foi inserido!" << endl;
        return 1;
    }
    int maior = numeros[0];
    for (size_t i = 1; i < numeros.size(); i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    cout << maior << endl;
}