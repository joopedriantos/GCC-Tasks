#include <iostream>
#include <string>

using namespace std;

bool isSubsequence(const string &S, const string &R) {
    int i = 0, j = 0;
    while (i < S.size() && j < R.size()) {
        if (S[i] == R[j]) j++;
        i++;
    }
    return j == R.size();
}

int main() {
    int N;
    cin >> N;

    while (N--) {
        string S;
        int Q;
        cin >> S >> Q;

        while (Q--) {
            string R;
            cin >> R;
            cout << (isSubsequence(S, R) ? "Yes" : "No") << endl;
        }
    }
}
