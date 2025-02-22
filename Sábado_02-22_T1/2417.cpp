// Caio Costa Cunha . João Pedro Santos

#include <iostream>
using namespace std;

char classificar_times(int cv, int ce, int cs, int fv, int fe, int fs) {
    int pontos_cormengo = (cv * 3) + ce;
    int pontos_flaminthians = (fv * 3) + fe;
    
    if (pontos_cormengo > pontos_flaminthians) {
        return 'C';
    } else if (pontos_flaminthians > pontos_cormengo) {
        return 'F';
    } else {
        if (cs > fs) {
            return 'C';
        } else if (fs > cs) {
            return 'F';
        } else {
            return '=';
        }
    }
}

int main() {
    int cv, ce, cs, fv, fe, fs;
    cin >> cv >> ce >> cs >> fv >> fe >> fs;
    cout << classificar_times(cv, ce, cs, fv, fe, fs) << endl;
}
