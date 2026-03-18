//Problem: Twin
//URL: https://codeforces.com/problemset/problem/160/A
//Rating: 900

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	vector <int> coins(n);
	int sum=0;
	
	for ( int i=0 ; i<n ; i++){
		cin>>coins[i];
		sum+=coins[i];
	}
	
	sort(coins.rbegin(), coins.rend());
	
	int j = 0, amount=0 , count=0;
	while (amount <= (sum/2) ){
		amount+=coins[j];
		count++;
		j++;
	}
	cout<<count<<endl;
	return 0;
	
}
