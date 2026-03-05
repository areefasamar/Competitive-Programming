// Problem: Stones on the Table
// URL: https://codeforces.com/contest/266/problem/A
// Rating: 800

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, removal=0;
	cin>>n;
	string str;
	cin>>str;
	for ( int i=0; i<n-1 ; i++){
		if(str[i]==str[i+1]){
			removal++;
		}
	}
	cout<<removal<<endl;
	return 0;
}
