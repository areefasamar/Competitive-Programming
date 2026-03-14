//URL: https://vjudge.net/problem/SPOJ-HOTELS

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    vector<int> values(n);
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    int l = 0;
    int sum = 0;
    int ans = 0;

    for (int r = 0; r < n; r++) {
        sum += values[r];

        while (sum > m) {
            sum -= values[l];
            l++;
        }

        ans = max(ans, sum);   
    }

    cout << ans << endl;

    return 0;
}
