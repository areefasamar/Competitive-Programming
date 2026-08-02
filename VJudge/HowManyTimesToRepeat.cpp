//URL: https://vjudge.net/contest/834889#problem/B

#include <bits/stdc++.h>
using namespace std;
int main() {

    long long n;
    cin >> n;

    long long steps = 0;
    while (n > 0) {
        long long temp = n;
        long long digit_sum = 0;
        
        while (temp > 0) {
            digit_sum += temp % 10;
            temp /= 10;
        }

        n -= digit_sum;
        steps++;
    }

    cout << steps << "\n";

    return 0;
}