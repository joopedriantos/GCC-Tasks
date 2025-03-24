//  João Pedro Santos
#include <iostream>
#include <map>

using namespace std;

int main() {
    while (true) {
        int N, K;
        cin >> N >> K;
        
        if (N == 0 && K == 0) break; 
        
        map<int, int> freq;
        int pergunta;
        
        for (int i = 0; i < N; i++) {
            cin >> pergunta;
            freq[pergunta]++;
        }
        
        int frequentes = 0;
        for (auto &par : freq) {
            if (par.second >= K) {
                frequentes++;
            }
        }
        
        cout << frequentes << endl;
    }

}
