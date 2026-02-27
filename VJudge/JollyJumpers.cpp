//URL: https://vjudge.net/problem/UVA-10038

#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> sequence(n);
        for (int i = 0; i < n; ++i) {
            cin >> sequence[i];
        }

        if (n == 1) {
            cout << "Jolly" << endl;
            continue;
        }
      
        vector<bool> diffs_found(n, false);
        bool is_jolly = true;
        int count = 0;

        for (int i = 0; i < n - 1; ++i) {
            int diff = abs(sequence[i] - sequence[i + 1]);

            if (diff >= 1 && diff < n && !diffs_found[diff]) {
                diffs_found[diff] = true;
                count++;
            } else {
                is_jolly = false;
            }
        }

        if (is_jolly && count == n - 1) {
            cout << "Jolly" << endl;
        } else {
            cout << "Not jolly" << endl;
        }
    }
    return 0;
}
