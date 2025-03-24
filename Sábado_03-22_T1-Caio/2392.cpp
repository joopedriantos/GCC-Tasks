//Caio Costa Cunha

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> pedras(N + 1, 0);

    while (M--) {
        int P, D;
        cin >> P >> D;

        pedras[P] = 1;

        for (int i = P + D; i <= N; i += D) {
            pedras[i] = 1;
        }

        for (int i = P - D; i >= 1; i -= D) {
            pedras[i] = 1;
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << pedras[i] << endl;
    }
}