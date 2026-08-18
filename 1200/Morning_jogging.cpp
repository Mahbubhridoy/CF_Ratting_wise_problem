#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer() {
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> a(n + 1, vector<ll>(m + 1));
    vector<vector<ll>> an(n + 1, vector<ll>(m + 1, 0));

    vector<tuple<ll, ll, ll>> b;

    // input
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            cin >> a[i][j];
            b.push_back({a[i][j], i, j});
        }
    }

    // sort সব elements
    sort(b.begin(), b.end());

    // smallest m elements বসানো
    for (ll i = 0; i < m; i++) {
        ll val = get<0>(b[i]);
        ll row = get<1>(b[i]);
        ll col = get<2>(b[i]);

        an[row][i + 1] = val;
        a[row][col] = 0;
    }

    // বাকি fill করা
    for (ll i = 1; i <= n; i++) {
        ll k = 1;

        for (ll j = 1; j <= m; j++) {
            if (an[i][j] != 0) continue;

            while (a[i][k] == 0) k++;

            an[i][j] = a[i][k];
            k++;
        }
    }

    // output
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            cout << an[i][j] << " ";
        }
        cout << nl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;

    while (t--) {
        answer();
    }

    return 0;
}




