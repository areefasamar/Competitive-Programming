//URL: https://vjudge.net/contest/797558#problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){
	int layers;
	cin>>layers;
	int water = 0;
	for ( int i=1; i<=layers ; i++){
		water += 2 * i;
	}
	cout<<water+1<<endl;
	return 0;
	
}
