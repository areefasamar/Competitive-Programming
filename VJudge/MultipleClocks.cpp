//URL: https://vjudge.net/problem/AtCoder-abc070_c

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    long long ans = 1;
    for (int i = 0; i < n; i++) {
        long long t;
        cin >> t;
        ans = (ans / std::__gcd(ans, t)) * t;
    }

    cout << ans << "\n";
    return 0;
}