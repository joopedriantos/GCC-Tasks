// Caio Costa Cunha . João Pedro Santos

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    vector<pair<int, int>> semiQuadra;
    for (int i = 0; i <= 432; i++) {
        for (int j = 0; j <= 468; j++) {
            semiQuadra.push_back({i, j});
        }
    }

    bool dentro = false;
    for (auto coord : semiQuadra) {
        if (X == coord.first && Y == coord.second) {
            dentro = true;
            break;
        }
    }

    if (dentro) {
        cout << "dentro" <<endl;
    } else {
        cout << "fora"<<endl;
    }
}