#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI  2*acos(0.0)
void answer() {
    int n; cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];  
    }
    sort(v.begin() + 1, v.end());
    int ans = 0;
    for (int i = 1; i < n; i++) {
        ans += v[n] - v[1];  
    }
    cout << ans << '\n';
}
int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        answer();
    }
}


