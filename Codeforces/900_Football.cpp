//Problem: Football
//URL: https://codeforces.com/contest/96/problem/A
//Rating: 900

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	
	int count0=0 , count1=0;
	bool flag0, flag1;
	
	for (int i=0 ; i<s.length() ; i++){
		if (s[i]=='1'){
			count0=0;
			count1++;
			if(count1>=7){
				flag1=true;
				cout<<"YES"<<endl;
				return 0;
			}
		}
		else{
			count1=0;
			count0++;
			if(count0>=7){
				flag0=true;
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
