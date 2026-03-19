//Problem: String Task
//URL: https://codeforces.com/problemset/problem/118/A
//Rating: 1000

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	if (!(cin >> s)) return 0;
	
	string a;
	for ( int i=0 ; i<s.length() ; i++){
		
		if ( s[i]>='A' && s[i]<='Z'){
			s[i]=tolower(s[i]);
		}
		
		if ( s[i]!='a'  && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y'){
			a+='.';
			a+=s[i];
		}
	}
	cout<<a<<endl;
	return 0;
}
	
