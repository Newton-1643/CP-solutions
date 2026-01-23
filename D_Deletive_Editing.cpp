#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    LOOP:

    while(t--) {
        string wordOne, wordTwo;
        cin >> wordOne >> wordTwo;

        unordered_map<char, int> freqWO;
        for(char c : wordOne) {
            freqWO[c]++;
        }

        unordered_map<char, int> freqWT;
        for(char c : wordTwo) {
            freqWT[c]++;
        }

        for (const auto& [key, value] : freqWT) {
            freqWO[key] -= value;

            if (freqWT[key] <= 0) {
                cout << "NO\n";
                goto LOOP;
            }
        }

        for (const auto& [key, value] : freqWO) {
            auto it = std::find(s.begin(), s.end(), ch);
                if (it != s.end()) {
                    s.erase(it);
                }

        }
    }
    
    return 0;
}