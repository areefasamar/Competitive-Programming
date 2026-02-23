// Problem: Preparing For The Exam
// URL: https://codeforces.com/contest/2198/problem/C
// Rating: 800

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(m);
        for(int i = 0; i < m; i++) {
            cin >> a[i];
        }

        vector<int> q(k);
        set<int> known;
        for(int i = 0; i < k; i++) {
            cin >> q[i];
            known.insert(q[i]);
        }

        if(k < n - 1) {
            for(int i = 0; i < m; i++)
                cout << 0;
            cout << "\n";
        }
        else if(k == n) {
            for(int i = 0; i < m; i++)
                cout << 1;
            cout << "\n";
        }
        else { // k == n-1
            int missing = -1;
            for(int i = 1; i <= n; i++) {
                if(known.count(i) == 0) {
                    missing = i;
                    break;
                }
            }

            for(int i = 0; i < m; i++) {
                if(a[i] == missing)
                    cout << 1;
                else
                    cout << 0;
            }
            cout << "\n";
        }
    }

    return 0;
}