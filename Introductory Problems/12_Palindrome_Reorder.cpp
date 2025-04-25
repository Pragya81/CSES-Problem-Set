#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    unordered_map<char, int> freq;
    
    for (char c : s) {
        freq[c]++;
    }
    
    string left = "", middle = "", right = "";
    
    for (auto& entry : freq) {
        if (entry.second % 2 != 0) {
            if (!middle.empty()) {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            middle = string(1, entry.first);
        }
        left.append(entry.second / 2, entry.first);
    }
    
    right = left;
    reverse(right.begin(), right.end());
    
    cout << left + middle + right << endl;
    
    return 0;
}
