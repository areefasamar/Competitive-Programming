//URL: https://vjudge.net/problem/EOlymp-8959

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	
    int n;
    if (!(cin >> n)) return 0;

    int max_mark = -101;
    int min_mark = 101;

    for (int i = 0; i < n; ++i) {
        int mark;
        cin >> mark;
        max_mark = max(max_mark, mark);
        min_mark = min(min_mark, mark);
    }

    cout << max_mark - min_mark << "\n";

    return 0;
}