//URL: https://vjudge.net/problem/CodeForces-580A

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0 ; i<n ; i++){
		cin>>arr[i];
	}
	
	int streak=1;
	int max=1; 
	
	for(int i=0 ; i<n-1 ; i++){
		if(arr[i]<=arr[i+1]){
			streak++;
		}
		else{
			streak=1;
		}
		if(streak>max){
			max=streak;
		}
	}
	
	cout<<max<<endl;
}