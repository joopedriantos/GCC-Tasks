// Caio Costa Cunha . João Pedro Santos

#include <iostream>
#include <vector>

using namespace std;

class UnionFind {
private:
    vector<int> parent, rank;
    int count;

public:
    UnionFind(int n) : parent(n + 1), rank(n + 1, 0), count(n) {
        for (int i = 1; i <= n; i++) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
            count--;
        }
    }

    int getCount() {
        return count;
    }
};

int main() {
    int N, M;
    cin >> N >> M;

    UnionFind uf(N);

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        uf.unite(a, b);
    }

    cout << uf.getCount() << endl;

}
