#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> score(n);
    for(int i = 0; i < n; i++)
        cin >> score[i];

    vector<pair<int,int>> arr;

    for(int i = 0; i < n; i++) {
        arr.push_back({score[i], i});
    }

    sort(arr.rbegin(), arr.rend());

    vector<string> answer(n);

    for(int i = 0; i < n; i++) {
        int idx = arr[i].second;

        if(i == 0)
            answer[idx] = "Gold Medal";
        else if(i == 1)
            answer[idx] = "Silver Medal";
        else if(i == 2)
            answer[idx] = "Bronze Medal";
        else
            answer[idx] = to_string(i + 1);
    }

    for(int i = 0; i < n; i++)
        cout << answer[i] << " ";

    return 0;
}
