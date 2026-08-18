#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl '\n'

void answer(){
	int n, f, a, b; cin >> n >> f >> a >> b;
    int t = 0;
    bool flag = true;
    for (int i = 0; i < n; i++) {
      int m; cin >> m;
      f -= min((m - t) * a, b);
      if (f <= 0) {
        flag = false;
      }
      t = m;
    }
    cout << (flag ? "YES" : "NO") << nl;
}
    
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++){
        answer();
    }
    return 0;
}