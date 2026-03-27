#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m;

    vector<int> nums1(m + 100); // extra space
    for(int i = 0; i < m; i++) cin >> nums1[i];

    cin >> n;
    vector<int> nums2(n);
    for(int i = 0; i < n; i++) cin >> nums2[i];

    int i = m - 1, j = n - 1, k = m + n - 1;

    while(i >= 0 && j >= 0) {
        if(nums1[i] > nums2[j])
            nums1[k--] = nums1[i--];
        else
            nums1[k--] = nums2[j--];
    }

    while(j >= 0)
        nums1[k--] = nums2[j--];

    for(int x : nums1)
        cout << x << " ";

    return 0;
}
