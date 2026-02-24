// Problem: Next Round
// URL: https://codeforces.com/problemset/problem/158/A
// Rating: 800

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, count=0;
    cin >> n >> k;
    int points[n];

    for (int i = 0; i < n; i++){
        cin >> points[i]; 
    }

    int target = points[k-1];

    for (int i = 0; i < n; i++){
        if(points[i] >= target && points[i] > 0){
            count++;
        } 
        else {
            break; 
        }
    }

cout << count << endl;
return 0;
}
