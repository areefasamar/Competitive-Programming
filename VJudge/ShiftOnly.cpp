//URL: https://vjudge.net/problem/AtCoder-abc081_b 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    int min_ops = 1e9;
    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        
        int ops = 0;
        while (a % 2 == 0) {
            a /= 2;
            ops++;
        }
        
        min_ops = min(min_ops, ops);
    }

    cout << min_ops << "\n";
    return 0;
}