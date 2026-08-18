#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer() {
    ll n, x; cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i<n; i++) cin >> v[i];

    for (int i = 0; i<n; i++) {
        for (int j = i; j<n; j++) {
            if (v[i] < v[j]) continue;
            if ((i + x < n || i - x >= 0) && (j + x < n || j - x >= 0)) {
                swap(v[i], v[j]);
            }
        }
    }
    bool flag = true;
    for (int i = 1; i<n; i++) {
        flag = (v[i] < v[i - 1]) ? false : flag;
    }
    cout << (flag ? "YES" : "NO") << nl;
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) {
        answer();
    }
    return 0;
}
