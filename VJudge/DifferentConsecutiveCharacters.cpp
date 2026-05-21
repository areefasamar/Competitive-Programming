//URL: https://vjudge.net/problem/CodeChef-DIFFCONSEC

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int operations = 0;
    for (int i = 0; i < N - 1; i++) {
        
        if (S[i] == S[i + 1]) {
            operations++;
        }
    }
    cout << operations << "\n";
}

int main() {
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
