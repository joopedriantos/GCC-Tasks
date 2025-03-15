#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

double calcularCorte(const vector<int> &tiras, double H) {
    double areaCortada = 0;
    for (int C : tiras) {
        if (C > H) 
            areaCortada += (C - H);
    }
    return areaCortada;
}

double buscaAltura(const vector<int> &tiras, int A) {
    double esq = 0, dir = *max_element(tiras.begin(), tiras.end());
    double mid, area;

    while (dir - esq > 1e-7) {  
        mid = (esq + dir) / 2;
        area = calcularCorte(tiras, mid);

        if (area >= A)
            esq = mid;
        else
            dir = mid;
    }

    return round(esq * 10000) / 10000;  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, A;
    while (cin >> N >> A, N || A) {
        vector<int> tiras(N);
        int somaTotal = 0;

        for (int i = 0; i < N; i++) {
            cin >> tiras[i];
            somaTotal += tiras[i];
        }

        if (somaTotal == A) {
            cout << ":D\n";
        } 
        else if (somaTotal < A) {
            cout << "-.-\n";
        } 
        else {
            cout << fixed << setprecision(4) << buscaAltura(tiras, A) << "\n";
        }
    }
}
