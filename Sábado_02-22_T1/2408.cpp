// Caio Costa Cunha . João Pedro Santos

#include <iostream>
using namespace std;

int main() {
    
    int A, B, C;

    cin >> A >> B >> C;

    int viceCampeao;

    if ((A > B && A < C) || (A > C && A < B)) {
        viceCampeao = A;
    } else if ((B > A && B < C) || (B > C && B < A)) {
        viceCampeao = B;
    } else {
        viceCampeao = C;
    }

    cout << viceCampeao << endl;
    
}