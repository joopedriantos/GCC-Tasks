#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Time {
    int id, pontos, marcados, recebidos;

    Time(int _id) : id(_id), pontos(0), marcados(0), recebidos(0) {}

    double cestaAverage() const {
        return (recebidos == 0) ? marcados : (double)marcados / recebidos;
    }

    bool operator<(const Time &t) const {
        if (pontos != t.pontos) return pontos > t.pontos;
        if (cestaAverage() != t.cestaAverage()) return cestaAverage() > t.cestaAverage();
        if (marcados != t.marcados) return marcados > t.marcados;
        return id < t.id;
    }
};

int main() {
    int n, x, y, z, w, instancia = 1;
    
    while (cin >> n && n != 0) {
        if (instancia > 1) cout << endl;

        vector<Time> times;
        for (int i = 1; i <= n; i++) times.emplace_back(i);

        int totalJogos = (n * (n - 1)) / 2;
        for (int i = 0; i < totalJogos; i++) {
            cin >> x >> y >> z >> w;
            times[x - 1].marcados += y;
            times[x - 1].recebidos += w;
            times[z - 1].marcados += w;
            times[z - 1].recebidos += y;

            if (y > w) times[x - 1].pontos += 2, times[z - 1].pontos += 1;
            else times[z - 1].pontos += 2, times[x - 1].pontos += 1;
        }

        sort(times.begin(), times.end());

        cout << "Instancia " << instancia++ << endl;
        for (int i = 0; i < n; i++) {
            if (i > 0) cout << " ";
            cout << times[i].id;
        }
        cout << endl;
    }
}
