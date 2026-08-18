#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer() {
    ll n, k; cin >> n >> k;
    if (k > n) {
        cout << -1 << nl;
        return;
    }
    if (n == k) {
        cout << 0 << nl;
        return;
    }
    queue<pair<ll, int>> q;
    unordered_set<ll> v; 
    q.push({n, 0});
    v.insert(n);

    while (!q.empty()) {
        auto [pile, time] = q.front(); q.pop();
        if (pile == k) {
            cout << time << nl;
            return;
        }
        if (pile < k) continue;

        ll l = pile / 2;
        ll r = pile - l;

        if (!v.count(l)) {
            q.push({l, time + 1});
            v.insert(l);
        }
        if (!v.count(r)) {
            q.push({r, time + 1});
            v.insert(r);
        }
    }

    cout << -1 << nl; 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++){
        answer();
    }
    return 0;
}
