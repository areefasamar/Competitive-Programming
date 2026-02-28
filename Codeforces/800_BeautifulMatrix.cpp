// Problem: Beautiful Matrix
// URL: https://codeforces.com/problemset/problem/263/A
// Rating: 800

#include<bits/stdc++.h>
using namespace std;
int main(){
	int matrix[5][5];
	int row, column;
	
	for(int i=0 ; i<5 ; i++){
	    for(int j=0 ; j<5 ; j++){
	    	cin>>matrix[i][j];
	    	if (matrix[i][j]==1){
	    		row = i+1;
	    		column = j+1;
			}
		}
		cout<<endl;
	}
	
	int steps;
	if( row==1 || row==5 ){
		steps+=2;
	}
	if ( row==2 || row==4 ){
		steps++;
	}
	
	if( column==1 || column==5 ){
		steps+=2;
	}
	if ( column==2 || column==4 ){
		steps++;
	}
	cout<<steps<<endl;
	return 0;
	
}
