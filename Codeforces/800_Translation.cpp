//Problem: Translation
//URL: https://codeforces.com/contest/41/problem/A
//Rating: 800

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s, t;
	cin>>s;
	cin>>t;
	
	reverse(s.begin(), s.end());
	
	if( s == t ){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
