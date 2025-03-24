//Caio Costa Cunha

#include <iostream>
#include <map>

using namespace std;

int main() {
    while (true) {
        int N, K;
        cin >> N >> K;

        if (N == 0 && K == 0) break;

        map<int, int> freq;

        for (int i = 0; i < N; i++) {
            int P;
            cin >> P;
            freq[P]++;
        }

        int contagem = 0;
        for (auto &par : freq) {
            if (par.second >= K) {
                contagem++;
            }
        }

        cout << contagem << endl;
    }
}
