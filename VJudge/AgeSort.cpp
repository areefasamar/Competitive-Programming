//URL: https://vjudge.net/problem/UVA-11462

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n==0){
			return 0;
		}
		
		vector <int> num(n);
		
		for (int i=0; i<n ; i++){
			cin>>num[i];
		}
		
		sort(num.begin(), num.end());
		
		for (int i=0; i<n ; i++){
			cout<<num[i];
			if(!(i+1==n)){
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
