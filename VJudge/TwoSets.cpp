//URL: https://vjudge.net/contest/804263#problem/D

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum;
    if (n % 2 == 0)
        sum = 1LL * (n / 2) * (n + 1);
    else
        sum = 1LL * n * ((n + 1) / 2);

    if (sum % 2) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";
    long long target = sum / 2;

    vector<int> a, b;

    for (int i = n; i >= 1; i--) {
        if (target >= i) {
            a.push_back(i);
            target -= i;
        } else {
            b.push_back(i);
        }
    }

    cout << a.size() << "\n";
    for (int x : a) cout << x << " ";
    cout << "\n";

    cout << b.size() << "\n";
    for (int x : b) cout << x << " ";
    cout << "\n";
    
    return 0;
}
