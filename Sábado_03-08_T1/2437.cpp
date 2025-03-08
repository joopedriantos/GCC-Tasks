// Caio Costa Cunha . João Pedro Santos

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int Xm, Ym, Xr, Yr;
    cin >> Xm >> Ym >> Xr >> Yr;

    int cruzamentos = abs(Xr - Xm) + abs(Yr - Ym);

    cout << cruzamentos << endl;

}
