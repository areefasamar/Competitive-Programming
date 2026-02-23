// Problem: Fibonacciness
// URL: https://codeforces.com/contest/2198/problem/B
// Rating: 800

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int ans = 0;

        // possible values of a3
        vector<int> candidates;
        candidates.push_back(a1 + a2);
        candidates.push_back(a4 - a2);
        candidates.push_back(a5 - a4);

        for(int a3 : candidates){
            int count = 0;

            if(a3 == a1 + a2) count++;
            if(a4 == a2 + a3) count++;
            if(a5 == a3 + a4) count++;

            ans = max(ans, count);
        }

        cout << ans << endl;
    }

    return 0;
}