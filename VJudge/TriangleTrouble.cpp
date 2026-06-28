#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c;
	float s;
	
	if(!(cin>>a>>b>>c)) return 0;
	
	s= (a + b + c) / 2.0;

    float area, area1;
    area1 = s*(s-a)*(s-b)*(s-c);
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    
    if(area1<0){
    	cout<<"NO"<<endl;
    	return 0;
	}

    if(area>0.0){
    	cout<<"YES"<<endl;
	}
    else{
    	cout<<"NO"<<endl;
	}
	
	return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int a, b, c;
//    cin >> a >> b >> c;
//
//    if (a + b > c && a + c > b && b + c > a){ 
//        cout << "YES";
//    }

//    else{
//        cout << "NO";
//    }
//
//    return 0;
//}