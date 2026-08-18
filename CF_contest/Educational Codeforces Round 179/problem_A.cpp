#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl '\n'

void answer(){
    int n; cin >> n;
    vector<int> v(n + 1);
    vector<int> freq(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        freq[v[i]]++;
    } 
    int tot = 1e18;
    for(int i = 1; i <= n; i++){
        if(freq[i] <= 0) continue;
        // cout << (n - freq[i]) << ' ' << i << endl;
        tot =  min(tot , (n - freq[i]) * i );
    }
    cout << tot << nl;
}
    
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++){
        answer();
    }
    return 0;
}