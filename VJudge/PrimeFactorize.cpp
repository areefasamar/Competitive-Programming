//URL: https://vjudge.net/contest/791218#problem/G

#include <iostream>
using namespace std;
int main(){
    int n;
    if (!(cin >> n)) return 0;

    cout << n << ":";

    int temp = n;

    for (int i = 2; i <= temp / i; i++) {
        while (temp % i == 0) {
            cout << " " << i;
            temp /= i;
        }
    }

    if (temp > 1) {
        cout << " " << temp;
    }

    cout << endl;

    return 0;
}
