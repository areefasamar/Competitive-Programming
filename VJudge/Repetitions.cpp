//URL: https://vjudge.net/problem/CSES-1069

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int max=0;
	int count=0;
	
	cin>>s;
	
	for( int i=0 ; i<(s.length()-1) ; i++){
		if(s[i]==s[i+1]){
			count++;
			if(count>max){
				max=count;
			}
		}
		else{
			count=0;
		}
	}
	cout<<++max<<endl;
	return 0;
}
