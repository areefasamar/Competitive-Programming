//URL: https://vjudge.net/contest/797558#problem/F

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    
    x = abs(x);
    
    vector<int> integers(n);
    for (int i = 0; i < n; i++) {
        cin >> integers[i];
    }
    
    sort(integers.begin(), integers.end());
    
    int i = 0, j = 0;
    while (j < n) {
        int diff = integers[j] - integers[i];
        
        if (diff == x) {
            cout << "Yes" << endl;
            return 0;
        }
        else if (diff < x) {
            j++;
        }
        else {
            i++;
        }
        
        if (i == j) j++;
    }
    
    cout << "No" << endl;
    return 0;
}
