#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int binarioParaDecimal(const string &bin) {
    return stoi(bin, nullptr, 2);
}

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int N;
    cin >> N;
    
    for (int i = 1; i <= N; i++) {
        string S1, S2;
        cin >> S1 >> S2;
        
        int num1 = binarioParaDecimal(S1);
        int num2 = binarioParaDecimal(S2);
        
        if (mdc(num1, num2) > 1)
            cout << "Pair #" << i << ": All you need is love!" << endl;
        else
            cout << "Pair #" << i << ": Love is not all you need!" << endl;
    }
}
