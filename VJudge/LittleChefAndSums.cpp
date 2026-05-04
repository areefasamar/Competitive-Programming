//URL: https://vjudge.net/problem/CodeChef-CHEFSUM

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        long long total_sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_sum += a[i];
        }

        long long min_val = -1;
        int min_idx = 1;
        long long current_prefix = 0;

        for (int i = 0; i < n; i++) {
            current_prefix += a[i];
            long long current_val = current_prefix + (total_sum - (current_prefix - a[i]));

            if (min_val == -1 || current_val < min_val) {
                min_val = current_val;
                min_idx = i + 1;
            }
        }
        cout << min_idx << endl;
    }
    return 0;
}
