//  João Pedro Santos
#include <iostream>
#include <algorithm>

using namespace std;

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mdc(int a, int b, int c) {
    return mdc(mdc(a, b), c);
}

int main() {
    int x, y, z;

    while (cin >> x >> y >> z) {

        int a = min({x, y, z});
        int b = x + y + z - a - max({x, y, z});
        int c = max({x, y, z}); 

        if (c * c == a * a + b * b) {
            if (mdc(a, b, c) == 1) 
                cout << "tripla pitagorica primitiva" << endl;
            else 
                cout << "tripla pitagorica" << endl;
        } else {
            cout << "tripla" << endl;
        }
    }

}
