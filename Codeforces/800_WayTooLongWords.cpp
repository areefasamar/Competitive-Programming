// Problem: Way Too Long Words
// URL: https://codeforces.com/contest/71/problem/A
// Rating: 800

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n; 

    while (n--) {
        string s;
        cin >> s; 

        int len = s.length();

        if (len > 10) {
          
            cout << s[0] << len - 2 << s[len - 1] << endl;
        } else {
          
            cout << s << endl;
        }
    }

    return 0;
}