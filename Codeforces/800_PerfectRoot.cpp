// Problem: Perfect Root
// URL: https://codeforces.com/contest/2185/problem/A
// Rating: 800

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            cout << i << (i == n ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}