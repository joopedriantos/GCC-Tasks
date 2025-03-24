//Caio Costa Cunha

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> tempos;

    for (int i = 1; i <= N; i++) {
        int tempoTotal = 0;
        for (int j = 0; j < M; j++) {
            int tempo;
            cin >> tempo;
            tempoTotal += tempo;
        }
        tempos.push_back({tempoTotal, i});
    }

    sort(tempos.begin(), tempos.end());

    cout << tempos[0].second << endl;
    cout << tempos[1].second << endl;
    cout << tempos[2].second << endl;
}
