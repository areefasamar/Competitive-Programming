#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    vector<int> code(n);
    for(int i = 0; i < n; i++) cin >> code[i];

    cin >> k;

    vector<int> result(n, 0);

    if(k != 0) {
        for(int i = 0; i < n; i++) {
            int sum = 0;

            if(k > 0) {
                for(int j = 1; j <= k; j++)
                    sum += code[(i + j) % n];
            } else {
                for(int j = 1; j <= -k; j++)
                    sum += code[(i - j + n) % n];
            }

            result[i] = sum;
        }
    }

    for(int x : result)
        cout << x << " ";

    return 0;
}
