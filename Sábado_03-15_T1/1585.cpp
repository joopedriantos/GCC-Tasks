//Caio Costa Cunha

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        int x, y;
        cin >> x >> y;

        int area = (x * y) / 2;
        cout << area << " cm2" << endl;
    }
}
