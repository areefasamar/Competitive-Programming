#include <iostream>
using namespace std;

long long sumOfMultiples(long long n, long long k) {
    long long m = (n - 1) / k;     
    return k * m * (m + 1) / 2;   
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;

        long long answer = sumOfMultiples(n, 3)
                         + sumOfMultiples(n, 5)
                         - sumOfMultiples(n, 15);

        cout << answer << endl;
    }

    return 0;
}