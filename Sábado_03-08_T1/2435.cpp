// Caio Costa Cunha . João Pedro Santos

#include <iostream>
using namespace std;

int main() {
    int N1, D1, V1;
    int N2, D2, V2;
    
    cin >> N1 >> D1 >> V1;
    cin >> N2 >> D2 >> V2;

    double T1 = static_cast<double>(D1) / (V1 * (1000.0 / 3600.0));
    double T2 = static_cast<double>(D2) / (V2 * (1000.0 / 3600.0));

    if (T1 < T2) {
        cout << N1 << endl;
    } else {
        cout << N2 << endl;
    }
}
