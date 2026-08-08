//URL: https://vjudge.net/problem/AtCoder-abc081_a

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    if (!(cin >> s)) return 0;

    int marbles = 0;
    for (char c : s) {
        if (c == '1') {
            marbles++;
        }
    }

    cout << marbles << "\n";
    return 0;
}