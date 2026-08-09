//URL: https://vjudge.net/problem/AtCoder-abc071_b

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    if (!(cin >> s)) return 0;

    vector<bool> present(26, false);
    for (char c : s) {
        present[c - 'a'] = true;
    }

    for (int i = 0; i < 26; i++) {
        if (!present[i]) {
            cout << (char)('a' + i) << "\n";
            return 0;
        }
    }

    cout << "None\n";
    return 0;
}