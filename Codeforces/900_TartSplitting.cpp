//Problem: Tart Splitting
//URL: https://codeforces.com/gym/106429/problem/A
//Rating: 900

#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	if (!(cin>>t)) return 0;
	
	while(t--){
		int length;
		cin>>length;
		string s;
		cin>>s;
		
		string target = {"M"};
		for ( int i=0; i<length ; i++ ){
			target+="IT";
		}
		
		if( s == target ){
			cout<<"0"<<endl;
		}
		
		else{
		    string doublestring= s+s ;
		    
		    if ( doublestring.find(target) != string::npos){
			    cout<<"1"<<endl;
	    	}
	    	else{
			    cout<<"-1"<<endl;
		    }
		}
		

    }
    return 0;
}
