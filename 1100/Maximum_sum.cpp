// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define nl '\n'

// void answer() {
//    int n; cin >> n;
//    string s; cin >> s;
//    vector<int> v;
//    ll st = -1;
//    for (int i = 0; i < n; i++) {
//       if (s[i] == '1') {
//          st = i;
//          v.push_back(i + 1);
//          break;
//       }
//    }

//    if (st != -1) {
//       for (int i = st + 1; i < n; i++) {
//          if (s[i] == '0') {
//             v.push_back(i + 1);
//             break;
//          }
//       }
//    }

//    ll cnt = 0;
//    for (int i = 0; i < n; i++) {
//       if (s[i] == '0') {
//          cnt++;
//       }
//    }

//    if ((cnt % 2 == 0) || (v.size() <= 1)) {
//       cout << "Bob" << nl;
//    }
//    else {
//       cout << "Alice" << nl;
//       cout << v.size() << nl;
//       for (auto value : v) {
//          cout << value << " ";
//       }
//       cout << nl;
//    }
// }

// int32_t main(){
//     ios_base::sync_with_stdio(0);cin.tie(0);
    
//     int t = 1; cin >> t;
//     for (int i = 1; i <= t; i++){
//         answer();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

const int A = 2e5 + 5;

ll a, b, c;
ll d[A], e[A];
set<ll> f[A], g[A];

void answer(){
      // ll a, b, c; 
      // ll d[A], e[A];
      // set<ll> f[A], g[A];
      cin >> a >> b >> c;
      for (int i = 1; i <= a + 2; i++) {
        f[i].clear();
        g[i].clear();
      }
      set<int> h;
      for (int i = 1; i <= a; i++) {
        cin >> d[i];
        h.insert(i);
      }
      e[0] = -1e9;
      e[b + 1] = 2e9;
      for (int i = 1; i <= b; i++) cin >> e[i];
      sort(d + 1, d + a + 1);
      sort(e + 1, e + b + 1);
      for (int i = 1; i <= a; i++){
        ll lo = 0, hi = b + 1, mid, res = -1;
        while (lo <= hi) {
            mid = (lo + hi) >> 1;
            if (e[mid] > d[i]) {
                res = mid;
                hi = mid - 1;
            }
            else lo = mid + 1;
        }

        // cout << d[i] << ' ' << e[res] << ' ' << e[res - 1] << nl;

        if (e[res] - d[i] <= a + 1) g[e[res] - d[i]].insert(i);
        if (d[i] - e[res - 1] <= a + 1)f[d[i] - e[res - 1]].insert(i);
      }
      string s; cin >> s;
      int l = 0, r = 0, x = 0;
      for (int i = 0; i < s.size(); i++) {
         if (s[i] == 'L')x--;
         else x++;
         l = max(l, -x);
         r = max(r, x);
         for (auto it : g[r]) {
            if (h.find(it) != h.end())
                h.erase(it);
        }

        for (auto it : f[l]) {
            if (h.find(it) != h.end())
                h.erase(it);
        }

        g[r].clear();
        f[l].clear();

        int ans = h.size();
        cout << ans << ' ';
      }

      cout << nl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++){
        answer();
    }
    return 0;
}
