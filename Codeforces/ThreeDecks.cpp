#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;

        long long total = a + b + c;

        if(total % 3 != 0){
            cout << "NO\n";
            continue;
        }

        long long target = total / 3;

        if(a <= target && b <= target && c >= target)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}