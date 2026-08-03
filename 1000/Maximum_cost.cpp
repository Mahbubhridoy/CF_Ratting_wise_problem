// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n, a, b;
//     cin >> n >> a >> b;
//     string s;
//     cin >> s;

//     int total = 0;

//     // If b is positive, we want to maximize the number of segments
//     if (b >= 0) {
//         total = (a + b) * n;
//     } else {
//         // b is negative: we minimize number of segments
//         int segments = 0; // first character is one segment

//         // count how many times the character changes
//         for (int i = 1; i < n; i++) {
//             if (s[i] != s[i - 1]) {
//                 segments++;
//             }
//         }

//         // compress segment changes: (segments + 1) / 2
//         //segments = (segments / 2) + 1;

//         total = a * n + b * segments;
//     }

//     cout << total << '\n';
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
    int n,a,b; cin >> n >> a >> b;
    string s; cin >> s;
    ll ans = 0;
    if(b >= 0){
        ans += (a + b) * n;
    }
    else{
        ll total = 1;
        for(int i = 1; i<n; i++){
            if(s[i] != s[i - 1])total++;
        }
        total =(total / 2) + 1;
        ans = a * n + b * total;
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