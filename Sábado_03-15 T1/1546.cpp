// Caio Costa Cunha . João Pedro Santos
#include <iostream>

using namespace std;

int main() {
    int N; 
    cin >> N;
    
    while (N--) {
        int K; 
        cin >> K;
        
        while (K--) {
            int tipo;
            cin >> tipo;
            
            
            switch (tipo) {
                case 1: cout << "Rolien" << endl; break;
                case 2: cout << "Naej" << endl; break;
                case 3: cout << "Elehcim" << endl; break;
                case 4: cout << "Odranoel" << endl; break;
            }
        }
    }
}
