//Problem: Orange Pit
//URL: https://codeforces.com/gym/106429/problem/B
//Rating: 1200

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    if (!(cin >> t)) return 0;
    
    while ( t-- ){
        int n;
        cin >> n;
        
        vector<long long> balls(n);
        for (int i = 0; i < n; i++){
            cin >> balls[i];
        }
        
        if (n < 2) {
            cout << 0 << endl;
            continue;
        }

        sort(balls.begin(), balls.end());
        
        long long points = 0;
        
        points += (balls[n-1] - balls[0]);
        
        for (int i = 1; i < n - 1; i++){
            points += max(balls[i] - balls[0], balls[n-1] - balls[i]);
        }
        
        cout << points << endl;
    }
    
    return 0;
}
