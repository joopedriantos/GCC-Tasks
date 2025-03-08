// Caio Costa Cunha . João Pedro Santos

#include <iostream>
#include <vector>

using namespace std;

int L, C;
int A, B;
vector<vector<int>> mapa;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool dentro_do_mapa(int x, int y) {
    return x >= 0 && x < L && y >= 0 && y < C;
}

void encontrar_posicao_final() {
    int x = A - 1, y = B - 1;
    mapa[x][y] = 2;
    
    while (true) {
        bool moveu = false;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (dentro_do_mapa(nx, ny) && mapa[nx][ny] == 1) {
                x = nx;
                y = ny;
                mapa[x][y] = 2;
                moveu = true;
                break;
            }
        }

        if (!moveu) break;
    }

    cout << (x + 1) << " " << (y + 1) << endl;
}

int main() {
    cin >> L >> C;
    cin >> A >> B;

    mapa.assign(L, vector<int>(C));

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            cin >> mapa[i][j];
        }
    }

    encontrar_posicao_final();
}
