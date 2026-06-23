//URL: https://vjudge.net/contest/825018#problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	while(t--){
		int A, B, X, Y;
		cin>>A>>B>>X>>Y;
		
		if(A==B){
			cout<<"YES"<<endl;
			continue;
		}
		
		else if(A>B){
			if(A-B<=Y){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
			continue;
		}
		else{
			if(B-A<=X){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
			continue;
    	}
	}
	return 0;
}