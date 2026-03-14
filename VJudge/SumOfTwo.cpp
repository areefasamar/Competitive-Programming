//URL: https://vjudge.net/problem/EOlymp-11244

#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n, x;
	cin>>n>>x;
	
	int arr[n];
	for( int k=0 ; k<=n ; k++){
		cin>>arr[k];
	}
	
	int i=0, j=n-1;
	while(i<j){
		if(arr[i]+arr[j]==x){
			cout<<"YES"<<endl;
			return 0;
		}
		else if(arr[i]+arr[j]>x){
			j--;
		}
		else{
			i++;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
