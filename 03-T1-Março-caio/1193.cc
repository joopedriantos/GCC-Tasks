#include <iostream>
#include <sstream>
#include <bitset>

using namespace std;

int binarioParaDecimal(string bin) {
    return strtol(bin.c_str(), nullptr, 2);
}

int hexadecimalParaDecimal(string hex) {
    return strtol(hex.c_str(), nullptr, 16);
}

string decimalParaBinario(int dec) {
    if (dec == 0) return "0";
    return bitset<32>(dec).to_string().substr(bitset<32>(dec).to_string().find('1'));
}

string decimalParaHexadecimal(int dec) {
    stringstream ss;
    ss << hex << dec;
    return ss.str();
}

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        string X, formato;
        cin >> X >> formato;

        cout << "Case " << i << ":\n";

        if (formato == "bin") {
            int valor = binarioParaDecimal(X);
            cout << valor << " dec\n";
            cout << decimalParaHexadecimal(valor) << " hex\n";
        } 
        else if (formato == "dec") {
            int valor = stoi(X);
            cout << decimalParaHexadecimal(valor) << " hex\n";
            cout << decimalParaBinario(valor) << " bin\n";
        } 
        else if (formato == "hex") {
            int valor = hexadecimalParaDecimal(X);
            cout << valor << " dec\n";
            cout << decimalParaBinario(valor) << " bin\n";
        }

        cout << endl;
    }
}
