// . João Pedro Santos
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int C;
    cin >> C; 

    while (C--) {
        int N;
        cin >> N; 

        int xw, yw;
        cin >> xw >> yw;

        int minBall = 0; 
        double minDist = 1e9; 

        for (int i = 1; i <= N; i++) {
            int xb, yb;
            cin >> xb >> yb; 

            double dist = pow(xb - xw, 2) + pow(yb - yw, 2);

            if (dist < minDist) {
                minDist = dist;
                minBall = i;
            }
        }

        cout << minBall << endl;
    }

}
