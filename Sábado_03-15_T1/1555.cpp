//Caio Costa Cunha

#include <iostream>
using namespace std;

int rafael(int x, int y) {
    return (3 * x) * (3 * x) + (y * y);
}

int beto(int x, int y) {
    return 2 * (x * x) + (5 * y) * (5 * y);
}

int carlos(int x, int y) {
    return -100 * x + (y * y * y);
}

int main() {
    int N;
    cin >> N;

    while (N--) {
        int x, y;
        cin >> x >> y;

        int r = rafael(x, y);
        int b = beto(x, y);
        int c = carlos(x, y);

        if (r > b && r > c) {
            cout << "Rafael ganhou" << endl;
        } else if (b > r && b > c) {
            cout << "Beto ganhou" << endl;
        } else {
            cout << "Carlos ganhou" << endl;
        }
    }
}
