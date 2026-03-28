//URL: https://vjudge.net/problem/AtCoder-abc042_b

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, l;
	string s;
	cin>>n>>l;
	
	vector <string> str(n);
	
	for ( int i=0 ; i<n ; i++){
		cin>>s;
		str[i]=s;
	}
	
	sort (str.begin(), str.end());
	
	for ( int i=0 ; i<n ; i++){
		cout<<str[i];
	}
	cout<<endl;
	
	return 0;
}
