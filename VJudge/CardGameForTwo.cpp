//URL: https://vjudge.net/problem/AtCoder-abc088_b

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    int result = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            result += a[i];
        } else {
            result -= a[i];
        }
    }

    cout << result << endl;

    return 0;
}
