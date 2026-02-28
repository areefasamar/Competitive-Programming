// Problem: Beautiful Matrix
// URL: https://codeforces.com/problemset/problem/263/A
// Rating: 800

#include<bits/stdc++.h>
using namespace std;

int main(){
    int val, row, col;
    
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cin >> val;
            if (val == 1){
                row = i;
                col = j;
            }
        }
    }
    
    int steps = abs(row - 3) + abs(col - 3);
    
    cout << steps << endl;
    return 0;
}
