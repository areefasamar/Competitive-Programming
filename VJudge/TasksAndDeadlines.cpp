//URL: https://vjudge.net/problem/CSES-1630

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> tasks(n);
    for (int i = 0; i < n; i++) {
        cin >> tasks[i].first >> tasks[i].second;
    }

    sort(tasks.begin(), tasks.end());

    long long time = 0;
    long long reward = 0;

    for (int i = 0; i < n; i++) {
        time += tasks[i].first;
        reward += (long long)tasks[i].second - time;
    }

    cout << reward << endl;

    return 0;
}
