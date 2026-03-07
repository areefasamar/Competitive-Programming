//URL: https://vjudge.net/contest/794807#problem/E

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, a, b;
    cin >> t;
    while (t--){
        cin>>a>>b;

        for (int i = a; i <= b; i++){
        	
            if (i < 2) continue;
            
            bool isPrime = true; 
            
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false; 
                    break;     
                }
            }
            if (isPrime){
                cout << i << endl;
            }
        }
        cout<<endl;
    }
    return 0;
}
