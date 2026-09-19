#include <iostream>
using namespace std;

const int MOD = 1000000007;

bool isBroken[100005];
long long dp[100005];

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int brokenStep;
        cin >> brokenStep;
        isBroken[brokenStep] = true;
    }

    dp[0] = 1;

    if (isBroken[1] == true) {
        dp[1] = 0;
    } else {
        dp[1] = dp[0];
    }

    for (int i = 2; i <= n; i++) {
        if (isBroken[i] == true) {
            dp[i] = 0;
        } else {
            dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
        }
    }

    cout << dp[n] << endl;

    return 0;
}