//Problem: George and Accommodation
//URL: https://codeforces.com/contest/467/problem/A
//Rating: 800

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int p, q, room=0;
	while(n--){
		
		cin>>p>>q;
		
		if(p+2<=q){
			room++;
		}
	}
	cout<<room<<endl;
	return 0;
}
