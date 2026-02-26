//URL: https://vjudge.net/problem/CodeChef-CHEFCAND

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n, x;
	
	cin>>t;
	
	for ( int i = 1; i<=t ; i++){
		
		cin>>n>>x;
		
		if (x>=n){
			cout<<"0"<<endl;
			continue;
		}
		
		int count =0;
		
		while(n>x){
			x+=4;
			count++;
		}
		cout<<count<<endl;
	}
	return 0;

}
