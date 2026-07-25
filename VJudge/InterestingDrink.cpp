// URL: https://vjudge.net/problem/CodeForces-706B

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> shops(n);

    for (int i = 0; i < n; i++)
        cin >> shops[i];

    sort(shops.begin(), shops.end());

    int q;
    cin >> q;

    while (q--) {

        int amount;
        cin >> amount;

        cout << upper_bound(shops.begin(), shops.end(), amount) - shops.begin() << endl;
    }

    return 0;
}