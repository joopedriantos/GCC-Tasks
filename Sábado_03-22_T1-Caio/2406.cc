//Caio Costa Cunha

#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool cadeia_valida(const string& cadeia) {
    stack<char> pilha;
    for (char c : cadeia) {

        if (c == '(' || c == '[' || c == '{') {
            pilha.push(c);
        } 

        else {
            if (pilha.empty()) return false;
            
            char topo = pilha.top();
            if ((c == ')' && topo == '(') || 
                (c == ']' && topo == '[') || 
                (c == '}' && topo == '{')) {
                pilha.pop();
            } else {
                return false;
            }
        }
    }
    return pilha.empty();
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string cadeia;
        cin >> cadeia;

        if (cadeia_valida(cadeia)) {
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }
    }
}
