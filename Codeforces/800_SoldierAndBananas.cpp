// Problem: Soldier and Bananas
// URL: https://codeforces.com/problemset/problem/546/A
// Rating: 800

#include<bits/stdc++.h>
using namespace std;
int main(){
	int k, n, w;
	int amount=0, cost =0;
	cin >> k >> n >> w;
	
	for ( int i=1 ; i<=w ; i++){
		cost+=k*i;
	}

	while(cost>n && cost!=n){
		amount++;
		n++;
	}
	
	cout<<amount<<endl;
	return 0;
}
