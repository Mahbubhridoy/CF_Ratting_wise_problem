#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl '\n'

void answer() {
    int n; cin >> n;
    vector<int> a(n + 1);
    int sum = 0, cnt = 0;
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
      if (a[i] == 1) {
        cnt++;
      } else {
        sum += a[i] - 1;
      }
    }
    // cout << sum << ' ' << 2 * cnt << '\n';
    if (n == 1) {
      cout << "NO" << nl;
      //continue;
      return;
    }
    cout << (cnt <= sum ? "YES" : "NO") << nl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t = 1; cin >> t;
    while (t--) {
        answer();
    }
    return 0;
}


