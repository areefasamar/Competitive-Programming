//URL: https://vjudge.net/problem/SPOJ-CSUMQ

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<long long> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        prefix[i + 1] = prefix[i] + val;
    }

    int q;
    if (!(cin >> q)) return 0;
    while (q--) {
        int i, j;
        cin >> i >> j;

        if (i < 0 || j >= n || i > j) {
            cout << 0 << "\n";
        } else {
            cout << prefix[j + 1] - prefix[i] << "\n";
        }
    }

    return 0;
}
