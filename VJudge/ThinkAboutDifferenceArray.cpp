//URL: https://vjudge.net/contest/809757#problem/D

#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, u;
    if (!(cin >> n >> u)) return;

    vector<long long> diff(n + 1, 0);

    for (int k = 0; k < u; k++) {
        int i, j, val;
        cin >> i >> j >> val;
        
        diff[i] += val;
        
        if (j + 1 < n) {
            diff[j + 1] -= val;
        }
    }

    vector<long long> arr(n);
    long long current_sum = 0;
    for (int i = 0; i < n; i++) {
        current_sum += diff[i];
        arr[i] = current_sum;
    }

    int q;
    cin >> q;
    while (q--) {
        int idx;
        cin >> idx;
        if (idx >= 0 && idx < n) {
            cout << arr[idx] << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
}

int main() {
    int t;

    if (!(cin >> t)) t = 1; 
    while (t--) {
        solve();
    }

    return 0;
}
