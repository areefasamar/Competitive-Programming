// Problem: Team
// URL: https://codeforces.com/contest/231/problem/A
// Rating: 800

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n; 

    int Count = 0; 

    for (int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        int sum = petya + vasya + tonya;

        if (sum >= 2) {
            Count++;
        }
    }

    cout << Count << endl;

    return 0;
}