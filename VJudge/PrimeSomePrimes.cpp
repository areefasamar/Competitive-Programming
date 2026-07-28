//URL: https://vjudge.net/problem/SPOJ-TDPRIMES

#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000000;
bitset<MAX / 2 + 1> is_composite;

int main() {
    for (int i = 3; i * i < MAX; i += 2) {
        if (!is_composite[i / 2]) {
            for (int j = i * i; j < MAX; j += 2 * i) {
                is_composite[j / 2] = true;
            }
        }
    }

    int count = 1;
    cout << 2 << "\n";

    for (int i = 3; i < MAX; i += 2) {
        if (!is_composite[i / 2]) {
            count++;
            if (count % 100 == 1) {
                cout << i << "\n";
            }
        }
    }

    return 0;
}