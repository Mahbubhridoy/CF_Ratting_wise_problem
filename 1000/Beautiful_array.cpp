// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define nl '\n'

// void answer(){
//     int n;cin >> n;
//     int s = 1, t = n * n;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if ((i + j) % 2)cout << s++ << " ";
//             else cout << t-- << " ";
//         }
//         cout << nl;
//     }

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
    int lv = 1, rv = n * n, r = 0, c = 0;
    int a[n][n];
    for (int i = 0; i < n * n; i++) {
        if (i % 2 == 0) {
            a[r][c] = lv; lv++;
        }
        else {
            a[r][c] = rv; 
            rv--;
        }
        if (r % 2 == 0) {
            if (c == n - 1)r++;
            else c++;
        }
        else {
            if (c == 0)r++;
            else c--;
        }
    }   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << nl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++){
        answer();
    }
    return 0;
}