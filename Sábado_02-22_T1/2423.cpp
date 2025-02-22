// Caio Costa Cunha . João Pedro Santos

#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int max_bolos = 0;

 
    for (int i = 0; i <= A; i++) {
        for (int j = 0; j <= B; j++) {
            for (int k = 0; k <= C; k++) {
                if (i * 2 <= A && j * 3 <= B && k * 5 <= C) {
                    int bolos = min({i, j, k});
                    if (bolos > max_bolos) {
                        max_bolos = bolos;
                    }
                }
            }
        }
    }

    cout << max_bolos << endl;
}