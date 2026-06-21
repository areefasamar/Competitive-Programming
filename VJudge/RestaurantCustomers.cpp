//URL: https://vjudge.net/problem/CSES-1619

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<pair<int, int>> events;

    for (int i = 0; i < n; i++) {

        int a, b;
        cin >> a >> b;

        events.push_back({a, 1});   // customer arrives
        events.push_back({b, -1});  // customer leaves
    }

    // Sort all events according to time
    sort(events.begin(), events.end());

    int customers = 0;
    int maxCustomers = 0;

    for (auto event : events) {

        customers += event.second;

        maxCustomers = max(maxCustomers, customers);
    }

    cout << maxCustomers << endl;

    return 0;
}