#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        if (line.empty()) continue;
        
        if (line[0] == '-') {
            break;
        }
        
        
        if (line.size() >= 2 && line.substr(0, 2) == "0x") {
            
            string hexPart = line.substr(2);
            unsigned long decimalValue;
            istringstream(hexPart) >> hex >> decimalValue;
            cout << decimalValue << endl;
        } else {
            
            unsigned long decimalValue;
            istringstream(line) >> decimalValue;
            ostringstream oss;
            oss << "0x" << uppercase << hex << decimalValue;
            cout << oss.str() << endl;
        }
    }
}