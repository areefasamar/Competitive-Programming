//Problem: Elephant
//URL: https://codeforces.com/contest/617/problem/A
//Rating: 800

#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	int steps = x/5;
	if(x%5!=0){
		steps++;
	}
	cout<<steps<<endl;
	return 0;
}
