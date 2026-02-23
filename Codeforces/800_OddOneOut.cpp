// Problem: Odd One Out
// URL: https://codeforces.com/contest/1915/problem/A
// Rating: 800

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, a, b, c;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		if(a!=b && a!=c){
			cout<<a<<endl;
		}
		else if(b!=a && b!=c){
			cout<<b<<endl;
		}
		else{
			cout<<c<<endl;
		}
	}
	return 0;
}