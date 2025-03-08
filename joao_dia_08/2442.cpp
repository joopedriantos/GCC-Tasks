// Caio Costa Cunha . João Pedro Santos
#include <iostream>
#include <algorithm>

using namespace std;

int calcular_area_aberta(int f1, int f2, int f3) {
    int altura = 100;  // altura da janela em cm
    int largura_folha = 200;  // largura de cada folha em cm
    int largura_janela = 600;  // largura total da janela em cm
    
    int folhas[] = {f1, f2, f3};
    sort(folhas, folhas + 3);  // Ordena as posições das folhas
    
    int area_aberta = largura_janela * altura;  // Inicializa a área aberta como toda a janela
    
    int inicio = 0;  // Marca o início da área aberta
    for (int i = 0; i < 3; i++) {
        int fim_folha = folhas[i] + largura_folha;  // Calcula onde a folha termina
        if (folhas[i] > inicio) {
            area_aberta -= (fim_folha - folhas[i]) * altura;
        } else if (fim_folha > inicio) {
            area_aberta -= (fim_folha - inicio) * altura;
        }
        inicio = max(inicio, fim_folha);  // Atualiza o início da área aberta
    }
    
    return area_aberta;
}

int main() {
    int f1, f2, f3;
    cin >> f1 >> f2 >> f3;
    cout << calcular_area_aberta(f1, f2, f3) << endl;
}