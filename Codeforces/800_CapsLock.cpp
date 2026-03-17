//Problem: cAPS lOCK
//URL: https://codeforces.com/contest/131/problem/A
//Rating: 800

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	
	int change = 1;
	
	 for ( int i=1; i<s.length() ; i++){
	 	if( s[i]>='a' && s[i]<='z'){
	 		change=0;
	 		break;
		 }
	 }
	 
	 if ( change ){
	 	for ( int i=0; i<s.length() ; i++){
	 		if( s[i]>='a' && s[i]<='z'){
	 			s[i]=toupper(s[i]);
			}
			else{
				s[i]=tolower(s[i]);
			}
	 		
		}
	}
	cout<<s<<endl;
	return 0;
}
