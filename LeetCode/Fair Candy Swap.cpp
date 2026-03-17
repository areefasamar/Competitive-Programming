#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> alice(n);
    for(int i = 0; i < n; i++) cin >> alice[i];

    cin >> m;
    vector<int> bob(m);
    for(int i = 0; i < m; i++) cin >> bob[i];

    int sumA = 0, sumB = 0;

    for(int x : alice) sumA += x;
    for(int y : bob) sumB += y;

    int diff = (sumB - sumA) / 2;

    unordered_set<int> setB(bob.begin(), bob.end());

    for(int x : alice) {
        int y = x + diff;
        if(setB.count(y)) {
            cout << x << " " << y << endl;
            break;
        }
    }

    return 0;
}
