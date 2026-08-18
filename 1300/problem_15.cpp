// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define nl '\n'

// void answer(){
//     int n; cin >> n;
//     vector<ll> a(n + 1);
//     for (int i = 1; i <= n; i++)cin >> a[i];
//     if (n % 2 == 1) {
//         cout << "NO" << nl;
//         return;
//     }
//     ll mx = 0, mn = 1e9;
//     for (int i = 2; i<= n; i += 2)mx = max(mx, a[i]);
//     for (int i = 1; i <= n; i += 2)mn = min(mn, a[i]);
//     if (mx + 1 < mn)cout << "YES" << nl;
//     else cout << "NO" << nl;
// }

// int32_t main(){
//     ios_base::sync_with_stdio(0);cin.tie(0);
    
//     int t = 1; cin >> t;
//     for (int i = 1; i <= t; i++){
//         answer();
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define nl '\n'

// void answer(){
//     int n, k; cin >> n >> k;
//     int b = n - k;
//     if (b == 1){
//         cout << -1 << nl;
//         return;
//     }
//     int zero = n / 2;
//     int one = n - zero;
//     int zb = b / 2;
//     int ob = b / 2;
//     if (b % 2)ob++;
//     int x = zero - (zb - 1);
//     int y = one - (ob - 1);
//     string s;
//     int a = 0 , c = 0;
//     for (int i = 0; i<b; i++){
//         if (i % 2 == 0){
//             if (c == 0){
//                 s += string(y, '1');
//                 c += y;
//             }
//             else{
//                 s += '1';
//                 c++;
//             }
//         }
//         else{
//             if (a == 0){
//                 s += string(x, '0');
//                 a += x;
//             }
//             else{
//                 s += '0';
//                 a++;
//             }
//         }
//     }

//     cout << s << nl;
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

void answer(){

    int n;
    cin >> n;

    vector<int> l(n), r(n), u(n), v(n);

    for(int i = 0; i < n; i++){
        cin >> l[i] >> r[i] >> u[i] >> v[i];
    }

    int ans = 0;

    for(int m = 1; m <= n; m++){

        int p = 0;
        bool ok = true;

        for(int j = 1; j <= m; j++){

            while(p < n){

                int x = m - j + 1;

                bool a = (l[p] <= j && j <= r[p]);
                bool b = (u[p] <= x && x <= v[p]);

                if(!a && !b) break;

                p++;
            }

            if(p == n){
                ok = false;
                break;
            }

            p++;
        }

        if(ok) ans = m;
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