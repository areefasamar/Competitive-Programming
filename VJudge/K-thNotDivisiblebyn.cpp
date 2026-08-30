//URL: https://vjudge.net/problem/CodeForces-1352C

#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        long long n, k;
        cin >> n >> k;

        long long ans = k + ((k - 1) / (n - 1));
        cout << ans << endl;
    }

    return 0;
}