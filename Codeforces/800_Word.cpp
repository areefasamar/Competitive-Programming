// Problem: Word
// URL: https://codeforces.com/problemset/problem/59/A
// Rating: 800

#include<bits/stdc++.h>
using namespace std;
int main(){
	int lower=0, upper=0;
	string s;
	if(!(cin>>s)){
		return 0;
	}
	
	for ( int i=0; i<s.length() ;i++){
		if (s[i]>='a' && s[i]<='z'){
			lower++;
		}
		else{
			upper++;
		}
	}
	
	int count=0;
	for ( int i=0; i<s.length() ;i++){
		if(lower>=upper){
			if(s[i]>='A' && s[i]<='Z'){
				s[i]=tolower(s[i]);
				count++;
			}
			if(count==upper){
				break;
			}
		}
		else{
			if(s[i]>='a' && s[i]<='z'){
				s[i]=toupper(s[i]);
				count++;
		    }
			if(count==lower){
				break;
			}
		}
	}
	cout<<s<<endl;
	return 0;
}
