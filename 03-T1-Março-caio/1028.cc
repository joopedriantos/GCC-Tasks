#include <iostream>

using namespace std;

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int N, F1, F2;

    cin >> N;
    
    while (N--) {
        
        cin >> F1 >> F2;

        cout << mdc(F1, F2) << endl;
    }
}
