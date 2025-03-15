#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string linha;
    bool primeiro = true;

    while (getline(cin, linha)) {
        if (!primeiro) cout << endl;  
        primeiro = false;

        map<char, int> freq;

        for (char c : linha) freq[c]++;

        vector<pair<int, char>> ordem;
        for (auto it : freq) ordem.push_back({it.second, -it.first});

        sort(ordem.begin(), ordem.end());

        for (auto it : ordem) cout << -it.second << " " << it.first << endl;
    }
}
