// Caio Costa Cunha . João Pedro Santos

#include <iostream>
using namespace std;

int main() {
    int num_bandejas, latas, copos, copos_quebrados = 0;
    
    cin >> num_bandejas;
    
    for (int i = 0; i < num_bandejas; i++) {
        cin >> latas >> copos;
        if (latas > copos) {
            copos_quebrados += copos;
        }
    }
    
    cout << copos_quebrados << endl;
}