//URL: https://vjudge.net/problem/USACO-615

#include<bits/stdc++.h>
using namespace std;
int main(){
	
	 freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    
    int x, y, m;
    cin>>x>>y>>m;

    int milk = 0;

    for (int i=0; i*x <= m; i++) {

        int left = m-(i * x);
        int b = left/ y;
        int total = (i*x) + (b*y);
        milk = max(milk, total);
    }
    cout<<milk<<endl;
    return 0;
}
