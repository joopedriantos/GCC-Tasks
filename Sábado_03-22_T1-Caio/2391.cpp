//Caio Costa Cunha

#include <iostream>
#include <vector>

using namespace std;

int min_partes_pa(vector<int>& seq) {
    int n = seq.size();
    if (n <= 2)
        return 1;

    int partes = 1;
    int razao = seq[1] - seq[0];

    for (int i = 2; i < n; ++i) {
        if (seq[i] - seq[i - 1] != razao) {
            partes++; 
            razao = seq[i] - seq[i - 1];
        }
    }

    return partes;
}

int main() {
    int N;
    cin >> N;

    vector<int> seq(N);
    for (int i = 0; i < N; ++i) {
        cin >> seq[i];
    }

    cout << min_partes_pa(seq) << endl;
}

