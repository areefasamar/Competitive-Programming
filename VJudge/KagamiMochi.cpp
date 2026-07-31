//URL: https://vjudge.net/problem/AtCoder-abc085_b 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    set<int> unique_diameters;
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        unique_diameters.insert(d);
    }

    cout << unique_diameters.size() << "\n";
    return 0;
}