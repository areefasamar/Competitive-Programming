//URL: https://vjudge.net/problem/HackerRank-cpp-maps

#include<bits/stdc++.h>
using namespace std;
int main() {
    int query;
    cin>>query;
    
    map<string, int> marks; 
    
    while (query--){
        int type;
        string name;
        cin>>type>>name;
        
        if (type==1){
            int score;
            cin>>score;
            marks[name] += score;
        } 
        else if (type==2){
            marks.erase(name);
        } 
        else if (type==3){
            cout<<marks[name]<<endl;
        }
    }

    return 0;
}
