//URL: https://vjudge.net/problem/SPOJ-FARIDA

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int testCases;
    if (!(cin >> testCases)) return 0;

    for (int t = 1; t <= testCases; t++) {
        int n;
        cin >> n;

        if (n == 0) {
            cout << "Case " << t << ": 0\n";
            continue;
        }

        vector<long long> coins(n);
        for (int i = 0; i < n; i++) {
            cin >> coins[i];
        }

        if (n == 1) {
            cout << "Case " << t << ": " << coins[0] << "\n";
            continue;
        }

        vector<long long> dp(n);
        dp[0] = coins[0];
        dp[1] = max(coins[0], coins[1]);

        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 1], coins[i] + dp[i - 2]);
        }

        cout << "Case " << t << ": " << dp[n - 1] << "\n";
    }

    return 0;
}