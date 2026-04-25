//URL: https://vjudge.net/contest/808017#problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
	int d;
	cin>>d;
	
	vector<int> temp(d);
	
	int count=0, max=0;
	for(int i=0 ; i<d ; i++){
		cin>>temp[i];
		if(temp[i]>0){
			count++;
				if(max<count){
				max=count;
			}
		}
		else{
			count=0;
		}
	}

	cout<<max<<endl;

	return 0;
}
