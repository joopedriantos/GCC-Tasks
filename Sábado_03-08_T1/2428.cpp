// Caio Costa Cunha . João Pedro Santos

#include <iostream>
using namespace std;

bool verificaProjeto(int A1, int A2, int A3, int A4) {
    int total = A1 + A2 + A3 + A4;

    for (int largura = 1; largura * largura <= total; largura++) {
        if (total % largura == 0) {
            int altura = total / largura;

            if ((A1 + A2 == largura && A3 + A4 == largura && A1 + A3 == altura && A2 + A4 == altura) ||
                (A1 + A3 == largura && A2 + A4 == largura && A1 + A2 == altura && A3 + A4 == altura)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int A1, A2, A3, A4;
    cin >> A1 >> A2 >> A3 >> A4;

    if (verificaProjeto(A1, A2, A3, A4)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
}
