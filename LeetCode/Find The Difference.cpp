#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    char result = 0;  
    // XOR Property: a ^ 0 = a
    // Starting with 0 allows the first character to become the result.

    for(char c : s)
        result ^= c;
        // XOR Property: a ^ a = 0
        // Characters from s will later cancel out with the same characters in t.

    for(char c : t)
        result ^= c;
        // XOR is commutative and associative:
        // a ^ b ^ a = b
        // So matching characters cancel, leaving only the extra character.

    cout << result << endl;
    // The remaining value is the extra character added to t.

    return 0;
}
