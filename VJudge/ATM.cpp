#include<bits/stdc++.h>
using namespace std;
int main(){
	int X;
    double Y;

    cin >> X >> Y;

    if (X % 5 == 0 && Y >= X + 0.50) {
        Y = Y - (X + 0.50);
    }

    cout << fixed << setprecision(2) << Y;

    return 0;
}