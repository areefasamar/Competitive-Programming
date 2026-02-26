//URL: https://vjudge.net/problem/UVA-11498

#include <bits/stdc++.h>
using namespace std;

int main () {
    int T, N, M;
    
    while (cin >> T && T != 0) {
        cin >> N >> M; 
        
        while (T--) {
            int a, b;
            cin >> a >> b;
            
            if (a == N || b == M) {
                cout << "divisa";
            }
            else if (a > N) {
                if (b > M) cout << "NE";
                else cout << "SE";
            }
            else {
                if (b > M) cout << "NO";
                else cout << "SO";
            }
            cout << "\n";
        }
    }   
    return 0;
}
