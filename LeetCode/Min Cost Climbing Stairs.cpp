#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    int first = cost[0];
    int second = cost[1];

    if (n <= 2) return min(first, second);

    for (int i = 2; i < n; i++) {
        int current = cost[i] + min(first, second);
        first = second;
        second = current;
    }

    return min(first, second);
}

int main() {
    vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout << "Minimum Cost: " << minCostClimbingStairs(cost) << endl;
    return 0;
}
