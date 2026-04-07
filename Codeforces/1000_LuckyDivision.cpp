//Problem: Lucky Division 
//URL: https://codeforces.com/problemset/problem/122/A
//Rating: 1000

#include <bits/stdc++.h>
using namespace std;

int main() {
    int number;
    cin >> number;

    int num = number;
    int temp;

    while (num != 0) {
        temp = num % 10;

        if (temp != 7 && temp != 4) {
            
            if (number % 4 == 0 || number % 7 == 0 || number % 44 == 0 || 
                number % 47 == 0 || number % 74 == 0 || number % 77 == 0 || 
                number % 444 == 0 || number % 447 == 0 || number % 474 == 0 || 
                number % 477 == 0 || number % 744 == 0 || number % 747 == 0 || 
                number % 774 == 0 || number % 777 == 0) {
                
                cout << "YES" << endl;
            } 
            else {
                cout << "NO" << endl;
            }
            return 0; 
        }
        num /= 10;
    }

    cout << "YES" << endl;
    
    return 0;
}
