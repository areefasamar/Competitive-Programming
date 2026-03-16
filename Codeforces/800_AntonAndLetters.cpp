//Problem: Anton and Letters
//URL: https://codeforces.com/problemset/problem/443/A
//Rating: 800

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin, s); 

    set<char> distinct_letters;

    for (char c : s) {

        if (c >= 'a' && c <= 'z') {
            distinct_letters.insert(c);
        }
    }

    cout << distinct_letters.size() << endl;
    
    return 0;
}

//Alternative Solution
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     getline(cin, s);
    
//     bool appeared[26] = {false};
//     int count = 0;

//     for (char c : s) {
//         if (c >= 'a' && c <= 'z') {
//             if (!appeared[c - 'a']) {
//                 appeared[c - 'a'] = true;
//                 count++;
//             }
//         }
//     }
//     cout << count << endl;
//     return 0;
// }
