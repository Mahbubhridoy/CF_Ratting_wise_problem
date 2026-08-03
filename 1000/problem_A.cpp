#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

bool red(ll y, ll b) {
    while (y % b == 0) y /= b;
    return y == 1;
}

bool chk(ll a, ll b, int i = 1) {
    if (i > 100000) return false;  // reduced to 1e5 to avoid stack overflow
    return red(a * i, b) ? true : chk(a, b, i + 1);
}

void ans() {
    ll a, b;
    cin >> a >> b;
    cout << ((b == 1 || chk(a, b)) ? "YES" : "NO") << nl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) ans();

    return 0;
}
