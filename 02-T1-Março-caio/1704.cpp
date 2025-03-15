#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Tarefa {
    int lucro, prazo;
    
    bool operator<(const Tarefa &outra) const {
        return prazo < outra.prazo;
    }
};

int calcularPerda(vector<Tarefa> &tarefas, int H) {
    sort(tarefas.begin(), tarefas.end());
    priority_queue<int, vector<int>, greater<int>> heap;
    
    int lucroExecutado = 0;
    
    for (const auto &tarefa : tarefas) {
        if ((int)heap.size() < tarefa.prazo) {
            heap.push(tarefa.lucro);
            lucroExecutado += tarefa.lucro;
        } 
        else if (!heap.empty() && heap.top() < tarefa.lucro) {
            lucroExecutado -= heap.top();
            heap.pop();
            heap.push(tarefa.lucro);
            lucroExecutado += tarefa.lucro;
        }
    }

    int lucroTotal = 0;
    for (const auto &t : tarefas) lucroTotal += t.lucro;

    return lucroTotal - lucroExecutado;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, H;
    while (cin >> N >> H) {
        vector<Tarefa> tarefas(N);
        for (int i = 0; i < N; i++) {
            cin >> tarefas[i].lucro >> tarefas[i].prazo;
        }

        cout << calcularPerda(tarefas, H) << "\n";
    }
}
