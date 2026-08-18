
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define nl '\n'

// void answer(){
//     int n; cin >> n;
//         vector<ll> b(n);
//         for (int i = 0; i < (int)b.size(); i++) cin >> b[i];

//         if (b[0] == 0) {
//             bool zero = true;
//             for (auto ans : b) {
//                 if (ans != 0) {
//                     zero = false;
//                     break;
//                 }
//             }
//             cout << (zero ? "YES" : "NO") << nl;
//             continue;
//         }

        
//         ll curr = b[0];
//         bool flag = true;
//         for (int i = 1; i<n; i++) {
//             if (b[i] > 2 * curr - 1) {
//                 valid = false;
//                 break;
//             }
//             if (b[i]< curr) {
//                 curr = b[i];
//             }
//         }

//         cout << (valid ? "YES" : "NO") << nl;
    
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
    int n; cin >> n;
    vector<ll> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    if (b[0] == 0 and *max_element(b.begin(), b.end()) != 0) {
        cout << "NO" << nl;
        return;
    }

    ll mn = b[0];
    for (int i = 1; i<n; i++) {
        if (2 * mn <= b[i]) {
            cout << "NO" << nl;
            return;
        }
        if (b[i] < mn) mn = b[i];
    }

    cout << "YES" << nl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++){
        answer();
    }
    return 0;
}