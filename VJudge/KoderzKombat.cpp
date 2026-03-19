//URL: https://vjudge.net/contest/797558#problem/E

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, x;
	cin>>n>>x;
	
	vector<int> arr(n);
	for ( int i=0 ; i<n ; i++){
		cin>>arr[i];
	}

    int sum = 0;
    int count = 0;
    int r, l = 0;

    for ( r = 0; r < n; r++) {
        sum += arr[r];

        while (sum > x && l <= r) {
            sum -= arr[l];
            l++;
        }

        if ( sum == x ) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
