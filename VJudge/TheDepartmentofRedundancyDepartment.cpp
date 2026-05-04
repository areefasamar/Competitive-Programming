//URL: https://vjudge.net/problem/UVA-484

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int val;
    vector<int> order;
    unordered_map<int, int> counts;

    while (cin >> val) {
        if (counts.find(val) == counts.end()) {
            order.push_back(val);
        }
        counts[val]++;
    }

    for (int x : order) {
        cout << x << " " << counts[x] << endl;
    }

    return 0;
}
