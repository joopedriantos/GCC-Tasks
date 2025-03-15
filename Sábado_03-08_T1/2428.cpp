// Caio Costa Cunha . João Pedro Santos

#include <iostream>
#include <algorithm>

using namespace std;

bool verifica(int a1, int a2, int a3, int a4) {
    int areas[] = {a1, a2, a3, a4};
    int area_total = a1 + a2 + a3 + a4;

    sort(areas, areas + 4);

    do {
        int L1 = areas[0] + areas[1];
        int L2 = areas[2] + areas[3];

        int C1 = areas[0] + areas[2];
        int C2 = areas[1] + areas[3];

        if (L1 == L2 || C1 == C2)
            return true;
    } while (next_permutation(areas, areas + 4));

    return false;
}

int main() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    if (verifica(a1, a2, a3, a4))
        cout << "N" << endl;
    else
        cout << "S" << endl;

}
