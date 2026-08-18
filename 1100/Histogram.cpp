#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
    int n; cin >> n;
    vector<int> v(n + 2, 0);
    ll ans = 0;
    for (int i = 1; i <= n; i++){
        cin >> v[i];
        ans += abs(v[i] - v[i - 1]);
    }
    ans += v[n];
    for (int i = 1; i <= n; i++){
        ans -= max(0LL, min(1LL * v[i] - v[i - 1],1LL * v[i] - v[i + 1]));
    }

    cout << ans << nl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++){
        answer();
    }
    return 0;
}
