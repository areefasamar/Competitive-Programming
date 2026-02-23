// Problem: Uninteresting Number
// URL: https://codeforces.com/contest/2198/problem/D
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        string n;
        cin >> n;

        int sum = 0;
        int count2 = 0, count3 = 0;

        for(char c : n) {
            int digit = c - '0';
            sum += digit;

            if(digit == 2) count2++;
            if(digit == 3) count3++;
        }

        bool possible = false;

        // try all possible ways of squaring 2s and 3s
        for(int i = 0; i <= count2; i++) {
            for(int j = 0; j <= count3; j++) {

                int newSum = sum + i*2 + j*6;

                if(newSum % 9 == 0) {
                    possible = true;
                    break;
                }
            }
            if(possible) break;
        }

        if(possible) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}