// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define nl '\n'

// void answer(){
// 	int n,x; cin >> n >> x;
// 	  vector<int> arr(n);
//       int count0 = 0, count1 = 0;
//       for (int i = 0; i<n; i++) {
//             cin >> arr[i];
//             if (arr[i] == 0) count0++;
//             else if (arr[i] == 1) count1++;
//         }
//         if(x % 2 == 0 and count0 % 2 == 0 and count1 != 0)cout << "YES" << nl;
//         else cout << "NO" << nl;
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

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> doors(n);
        for (int i = 0; i < n; i++)cin >> doors[i];
        bool can_pass = false;
        for (int start = 0; start <= n; ++start) {
            bool ok = true;
            for (int i = 0; i<n; i++) {
                if (doors[i] == 0) continue;
                if (i >= start && i < start + x) continue;
                ok = false;
                break;
            }
            if (ok) {
                can_pass = true;
                break;
            }
        }

        cout << (can_pass ? "YES" : "NO") << '\n';
    }
    
    return 0;
}
