//Problem: Chat room
//URL: https://codeforces.com/problemset/problem/58/A
//Rating: 1000

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	
	string t="hello";
	vector <bool> flag(t.length());
	
	for ( int i=0 ; i<t.length(); i++){
		flag[i]=false;
	}
	
	int j=0;
	for ( int i=0 ; i<t.length(); i++){
		while(j<s.length()){
			if(t[i]==s[j]){
				flag[i]=true;
				j++;
				break;
			}
			j++;
		}
	}
	
	for ( int i=0 ; i<t.length(); i++){
		if(flag[i]==false){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	
	cout<<"YES"<<endl;
	return 0;
}
