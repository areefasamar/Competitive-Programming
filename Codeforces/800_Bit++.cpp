// Problem: Bit++
// URL: https://codeforces.com/problemset/problem/282/A
// Rating: 800

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, value=0;
	string s;
	cin>>n;
	while(n--){
		cin>>s;
		if( s == "++X" || s == "X++"){
			value++;
		}
		if( s == "--X" || s == "X--"){
			value--;
		}
	}
	cout<<value<<endl;
	return 0;
}
