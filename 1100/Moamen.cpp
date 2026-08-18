#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
    int n,k; cin >> n >> k;
    vector<int>a(n + 2), b(n + 2);
    for(int i = 0; i<n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.begin() + n);
    b[n] = 1e9, a[n] = 1e9;
    map<int,int>mp;
    for(int i = 0; i<n; i++) {
        mp[b[i]] = b[i + 1];
    }
    int cnt = 0;
    for(int i = 0; i<n; i++){
        while(mp[a[i]] == a[i + 1] && i < n){
            i++;
            //cnt++;
        }
        cnt++;
    }
    if(cnt <= k) cout << "YES" << nl;
    else cout << "NO" << nl;
    
}
    
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++){
        answer();
    }
    return 0;
}