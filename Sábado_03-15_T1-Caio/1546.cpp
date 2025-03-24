//Caio Costa Cunha

#include <iostream>
using namespace std;

int main() {
    int N, K, tipo;
    cin >> N;

    while (N--) {
        cin >> K;
        while (K--) {
            cin >> tipo;
            if (tipo == 1)
                cout << "Rolien\n";
            else if (tipo == 2)
                cout << "Naej\n";
            else if (tipo == 3)
                cout << "Elehcim\n";
            else if (tipo == 4)
                cout << "Odranoel\n";
        }
    }
}
