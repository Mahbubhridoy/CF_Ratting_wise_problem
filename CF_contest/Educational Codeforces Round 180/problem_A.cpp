// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define nl '\n'

// void answer(){
//     ll n; cin >> n;
//     ll ax, ay, bx, by;
//     cin >> ax >> ay >> bx >> by;
//     vector<int> a(n);
//     ll sum = 0;
//     for (int i = 0; i<n; i++) {
//         cin >> a[i];
//         sum += a[i];
//     }

//     ll dx = bx - ax;
//     ll dy = by - ay;
//     double dist= sqrt(1.0 * dx * dx + 1.0 * dy * dy);
//     if (dist > sum) {
//         cout << "No" << nl;
//         return;
//     }
//     ll cnt = (ll)(dist + 0.5);  
//     if ((sum - cnt) % 2 != 0) {
//         cout << "No" << nl;
//     } else {
//         cout << "Yes" << nl;
//     }
// }

// int32_t main(){
//     ios_base::sync_with_stdio(0); cin.tie(0);

//     int t; cin >> t;
//     for (int i = 1; i <= t; i++){
//         answer();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int a, b;
        ll x, y;
        cin >> a >> b >> x >> y;

        if (a == b) {
            cout << 0 << nl;
        }
        else if (a < b) {
            // Option 1: use only +1 operations
            ll cost1 = (b - a) * x;

            // Option 2: use XOR + add
            // After XOR with 1, a becomes a^1. So we need to check if a^1 <= b
            int new_a = a ^ 1;
            if (new_a <= b) {
                ll cost2 = y + (b - new_a) * x;
                cout << min(cost1, cost2) << nl;
            } else {
                cout << cost1 << nl;
            }
        }
        else {
            // a > b
            int new_a = a ^ 1;
            if (new_a == b) {
                cout << y << nl;
            } else {
                cout << -1 << nl;
            }
        }
    }

    return 0;
}

