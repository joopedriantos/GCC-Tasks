//Caio Costa Cunha

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;  
    cin >> N;  

    while (N--) {
        int QT, S;
        cin >> QT >> S;

        int vencedor = 1, melhorPalpite, menorDiferenca = 101;  

        for (int i = 1; i <= QT; i++) {
            int palpite;
            cin >> palpite;

            int diferenca = abs(palpite - S);  

            if (diferenca < menorDiferenca) {
                menorDiferenca = diferenca;
                melhorPalpite = palpite;
                vencedor = i;  
            }
        }

        cout << vencedor << endl;
    }
}
