//URL: https://vjudge.net/problem/CSES-1660

#include <bits/stdc++.h>
using namespace std;
int main() {
  
    int n;
    long long x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<long long, int> prefix_counts;
    prefix_counts[0] = 1;

    long long current_prefix_sum = 0;
    long long count = 0;

    for (int i = 0; i < n; i++) {
        current_prefix_sum += a[i];
        
        if (prefix_counts.count(current_prefix_sum - x)) {
            count += prefix_counts[current_prefix_sum - x];
        }
        
        prefix_counts[current_prefix_sum]++;
    }

    cout << count << endl;

    return 0;
}
