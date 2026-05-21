//URL: https://vjudge.net/problem/USACO-572

#include <bits/stdc++.h>

using namespace std;

int pref[4][100005];

int main() {

    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    if (!(cin >> N >> Q)) return 0;

    for (int i = 1; i <= N; i++) {
        int breed;
        cin >> breed;


        for (int b = 1; b <= 3; b++) {
            pref[b][i] = pref[b][i - 1];
        }

        if (breed >= 1 && breed <= 3) {
            pref[breed][i]++;
        }
    }

    for (int k = 0; k < Q; k++) {
        int a, b;
        if (!(cin >> a >> b)) break;
        
        cout << pref[1][b] - pref[1][a - 1] << " " 
             << pref[2][b] - pref[2][a - 1] << " " 
             << pref[3][b] - pref[3][a - 1] << "\n";
    }

    return 0;
}
