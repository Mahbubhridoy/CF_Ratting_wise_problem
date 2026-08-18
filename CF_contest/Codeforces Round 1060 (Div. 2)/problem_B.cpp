// // Created on: 10/21/2025
// // Author: Mahbub_Hridoy

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define nl '\n'

// void answer(){
//     int n; cin >> n;
//     int a[n];
//     for(int i = 0; i<n; i++)cin >> a[i];
//     int ans = 0;
//     int mx = a[0];
//     for(int i = 1; i<n; i++){
//         if(i % 2 != 0){
//             mx = max(mx, a[i]);
//             a[i] = mx;
//             ans += max(0,(a[i - 1] + 1) - mx);
//         }
//         else{
//             int tmp = a[i];
//             int x = max(0,(a[i] + 1) - mx);
//             ans += x;
//             a[i] -= x;
//             mx = max(mx,tmp);

//         }
//     }
//     cout << ans << nl;
    
// }
    
// int32_t main(){
//     ios_base::sync_with_stdio(0);cin.tie(0);
    
//     int t = 1; cin >> t;
//     for (int i = 1; i <= t; i++){
//         answer();
//     }
//     return 0;
// }




// explain logic/idia every step and attach the code also



