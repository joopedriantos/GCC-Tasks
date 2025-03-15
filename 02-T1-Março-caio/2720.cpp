#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Presente {
    int id;
    long long volume;

    Presente(int i, long long v) : id(i), volume(v) {}

    bool operator<(const Presente &other) const {
        if (volume != other.volume) return volume > other.volume;
        return id < other.id;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<Presente> presentes;

        for (int i = 0; i < N; i++) {
            int id, H, W, L;
            cin >> id >> H >> W >> L;
            long long volume = (long long)H * W * L;
            presentes.emplace_back(id, volume);
        }

        sort(presentes.begin(), presentes.end());

        vector<int> escolhidos;
        for (int i = 0; i < K; i++) {
            escolhidos.push_back(presentes[i].id);
        }
        sort(escolhidos.begin(), escolhidos.end());

        for (int i = 0; i < K; i++) {
            if (i > 0) cout << " ";
            cout << escolhidos[i];
        }
        cout << "\n";
    }
}
