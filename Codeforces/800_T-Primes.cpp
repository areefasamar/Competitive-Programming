//Problem: T-Primes
//URL: https://vjudge.net/contest/794807#problem/H
//Rating: 800

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin >> n;
    while (n--){
        long long x; 
        cin >> x;
        
        int r = round(sqrt(x));

        if (x > 1 && (long long)r * r == x){
            int count = 0; 
            
            for (int i = 2; i * i <= r; i++){
                if (r % i == 0){
                    count++;
                    break;
                }
            }

            if (r >= 2 && count == 0){
                cout << "YES"<<endl;;
            } 
			else{
                cout << "NO"<<endl;
            }
        } 
		else{
            cout << "NO"<<endl;
        }
    }
    return 0;
}
