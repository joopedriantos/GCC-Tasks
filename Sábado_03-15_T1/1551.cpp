//Caio Costa Cunha

#include <iostream>
#include <set>

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();

    while (N--) {
        string frase;
        getline(cin, frase);

        set<char> letras;

        for (char c : frase) {
            if (c >= 'a' && c <= 'z') {
                letras.insert(c);
            }
        }

        int qtd_letras = letras.size();

        if (qtd_letras == 26) {
            cout << "frase completa" << endl;
        } else if (qtd_letras >= 13) {
            cout << "frase quase completa" << endl;
        } else {
            cout << "frase mal elaborada" << endl;
        }
    }
}
