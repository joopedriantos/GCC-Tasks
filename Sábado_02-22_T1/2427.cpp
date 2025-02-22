// Caio Costa Cunha . João Pedro Santos

#include <iostream>
using namespace std;

int main() {
    int L;
    cin >> L;

    int total_pedacos = 1;

    while (L >= 2) {
        total_pedacos *= 4;
        L /= 2; 
    }

    cout << total_pedacos << endl;
}