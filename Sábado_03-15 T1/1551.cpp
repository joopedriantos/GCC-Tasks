//.João Pedro Santos
#include <iostream>
#include <set>
#include <string>

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

        int qtdLetras = letras.size();

        if (qtdLetras == 26)
            cout << "frase completa" << endl;
        else if (qtdLetras >= 13)
            cout << "frase quase completa" << endl;
        else
            cout << "frase mal elaborada" << endl;
    }
}
