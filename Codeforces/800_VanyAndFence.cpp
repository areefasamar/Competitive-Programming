//Problem: Vanya and Fence
//URL: https://codeforces.com/problemset/problem/677/A
//Rating: 800

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, h, p, road = 0;
	
	cin>>n>>h;
	
	while(n--){
		
		cin>>p;
		
		if(p>h){
			road+=2;;
		}
		else{
			road++;
		}
	}
	
	cout<<road<<endl;
	return 0;
}
