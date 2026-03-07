#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++)
        cin >> nums[i];

    int maxSum = nums[0];
    int currentSum = nums[0];

    for(int i = 1; i < n; i++) {
        if(currentSum < 0)
            currentSum = nums[i];
        else
            currentSum += nums[i];

        if(currentSum > maxSum)
            maxSum = currentSum;
    }

    cout << maxSum << endl;
    return 0;
}
