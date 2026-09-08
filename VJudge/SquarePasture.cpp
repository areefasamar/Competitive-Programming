//URL: https://vjudge.net/problem/USACO-663

#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);

    int ax1, ay1, ax2, ay2;
    int bx1, by1, bx2, by2;

    if (!(cin >> ax1 >> ay1 >> ax2 >> ay2 >> bx1 >> by1 >> bx2 >> by2)) return 0;

    int min_x = min(ax1, bx1);
    int max_x = max(ax2, bx2);
    int width = max_x - min_x;

    int min_y = min(ay1, by1);
    int max_y = max(ay2, by2);
    int height = max_y - min_y;

    int side = max(width, height);

    cout << side * side << "\n";

    return 0;
}