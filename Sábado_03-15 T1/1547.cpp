// Caio Costa Cunha . João Pedro Santos
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    while (N--) {
        int QT, S; 
        cin >> QT >> S;
        
        int vencedor = 1, menorDiferenca = 1000, tentativa;
        
        for (int i = 1; i <= QT; i++) {
            cin >> tentativa;
            int diferenca = abs(tentativa - S);
            
            if (diferenca == 0) {
                vencedor = i;
                break;
            }
            if (diferenca < menorDiferenca) {
                menorDiferenca = diferenca;
                vencedor = i;
            }
        }
        
        cout << vencedor << endl;
    }
}