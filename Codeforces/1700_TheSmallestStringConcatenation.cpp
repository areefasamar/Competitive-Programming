//Problem: The Smallest String Concatenation
//URL: https://codeforces.com/contest/632/problem/C
//Rating: 1700

#include<bits/stdc++.h>
using namespace std;
bool compareStrings(const string &a, const string &b) {
    return a + b < b + a;
}
int main(){
	int t;
	cin>>t;
	
	vector <string> str(t);
	string s;
	
	for( int i=0 ; i<t ; i++){
		cin>>s;
		str[i]=s;
	}
	
	sort(str.begin(), str.end(), compareStrings);
	
	for( int i=0 ; i<t ; i++){
		cout<<str[i];
	}
	return 0;
}
