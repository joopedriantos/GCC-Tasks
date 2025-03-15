#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int NC;
    cin >> NC;

    while (NC--) {
        int N;
        cin >> N;

        vector<int> alturas(N);
        for (int i = 0; i < N; i++) {
            cin >> alturas[i];
        }

        sort(alturas.begin(), alturas.end());

        for (int i = 0; i < N; i++) {
            if (i > 0) cout << " ";
            cout << alturas[i];
        }
        cout << "\n";
    }
}
