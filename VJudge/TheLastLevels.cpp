//URL: https://vjudge.net/problem/CodeChef-LASTLEVELS

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int x, y, z;
	int time=0;
	
	cin>>t;
	
	while(t--){
		cin>>x>>y>>z;
		time = x*y;
		
		int breakl=0;
		while(x>3){
			breakl++;
			x=x-3;
		}

		time+=breakl*z;
		cout<<time<<endl;
	}
	return 0;
}
