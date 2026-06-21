//URL: https://vjudge.net/problem/AtCoder-dp_c

#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;

    int A = 0, B = 0, C = 0;

    for (int i = 1; i <= N; i++) {

        int a, b, c;
        cin >> a >> b >> c;

        int newA = a + max(B, C);
        int newB = b + max(A, C);
        int newC = c + max(A, B);

        A = newA;
        B = newB;
        C = newC;
    }

    cout << max({A, B, C});
}