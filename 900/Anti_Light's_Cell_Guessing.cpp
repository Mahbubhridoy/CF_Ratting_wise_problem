#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI  2*acos(0.0)
#define nl '\n'

void answer() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    int ans = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        ans = min(ans, v[i]);
    }
    cout << ans << nl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) answer();
}
