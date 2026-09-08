//URL: https://vjudge.net/problem/AtCoder-abc182_c

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(cin >> s)) return 0;

    int n = s.size();
    long long sum = 0;
    long long c1 = 0, c2 = 0;

    for (int i = 0; i < n; i++) {
        int x = s[i] - '0';
        sum += x;

        if (x % 3 == 1) {
            c1++;
        } else if (x % 3 == 2) {
            c2++;
        }
    }

    int r = sum % 3;

    if (r == 0) {
        cout << 0 << "\n";
        return 0;
    }

    if (r == 1) {
        if (c1 >= 1 && n > 1) {
            cout << 1 << "\n";
            return 0;
        } else if (c2 >= 2 && n > 2) {
            cout << 2 << "\n";
            return 0;
        }
    } else if (r == 2) {
        if (c2 >= 1 && n > 1) {
            cout << 1 << "\n";
            return 0;
        } else if (c1 >= 2 && n > 2) {
            cout << 2 << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";

    return 0;
}