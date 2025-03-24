// Caio Costa Cunha

#include <iostream>

using namespace std;

int main() {

    int A, B, C;
    cin >> A >> B >> C;

    int X, Y, Z;
    cin >> X >> Y >> Z;

    int largura = X / A;
    int comprimento = Y / B;
    int altura = Z / C;

    int totalConteineres = largura * comprimento * altura;

    cout << totalConteineres << endl;
}
