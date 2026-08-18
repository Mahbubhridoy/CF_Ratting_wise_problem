#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
   int n; cin >> n;
    vector <int> a;
    for (int i = 0; i<n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    string s = "";
    ll cnt = 0;
    int p = 0, q = n - 1;
    while (cnt < n){
        if (cnt >= n - 2){
            s += "L";
            cnt++;
            continue;
        }
        
        if (a[p] < a[q]){
            if (a[p + 1] < a[q]){
                s += "L";
                s += "R";
                s += "L";
            } else {
                s += "R";
                s += "L";
                s += "L";
            }
        } else {
            if (a[p + 1] < a[p]){
                s += "R";
                s += "L";
                s += "L";
            } else {
                s += "L";
                s += "R";
                s += "L";
            }
        }
        
        p += 2;
        q += 1;
        cnt += 3;
    }
    
    cout << s << nl;
}
    
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++){
        answer();
    }
    return 0;
}