// // #include <bits/stdc++.h>
// // using namespace std;

// // #define ll long long
// // #define nl '\n'

// // void answer(){
// // 	ll a,b,c; cin >> a >> b >> c;
// // 	if(a == b) cout << 1 << nl;
// // 	else if(b * c > a) cout << 2 << nl;
// // 	else cout << 1 << nl;
// // }
    
// // int32_t main(){
// //     ios_base::sync_with_stdio(0);cin.tie(0);
    
// //     int t = 1; cin >> t;
// //     for (int i = 1; i <= t; i++){
// //         answer();
// //     }
// //     return 0;
// // }


// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define nl '\n'

// void answer(){
//         int n; cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) cin >> a[i];
//         vector<pair<int,int>> v;
//         for (int i = 0; i<n; i++) v.push_back({a[i], i});
//         sort(v.begin(), v.end());
//         vector<int> c(n);
//         for (int i = 0; i<n; i++)c[v[i].second] = i % 2;
//         bool flag = true;
//         for (int i = 0; i + 1<n; i++) {
//             if (c[i] == c[i + 1]) {
//                 flag = false;
//                 break;
//             }
//         }

//         cout << (flag ? "YES\n" : "NO\n");
    
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

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         long long inv = 0, ones = 0;

//         for(char c : s){
//             if(c == '1') ones++;
//             else inv += ones;
//         }

//         if(inv == 0){
//             cout << "Bob\n";
//         }
//         else if(inv % 2 == 0){
//             cout << "Bob\n";
//         }
//         else{
//             cout << "Alice\n";

//             for(int i = 0; i < n-1; i++){
//                 if(s[i] == '1' && s[i+1] == '0'){
//                     cout << 2 << "\n";
//                     cout << i+1 << " " << i+2 << "\n";
//                     break;
//                 }
//             }
//         }
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
        int n; cin >> n;
        string s; cin >> s;
        int cnt10 = 0;
        for(int i = 0; i < n - 1; i++){
            if(s[i] == '1' && s[i+1] == '0'){
                cnt10++;
            }
        }
        if(cnt10 == 0){
            cout << "Bob" << nl;
        }
        else if(cnt10 % 2 == 0){
            cout << "Bob" << nl;
        }
        else{
            cout << "Alice" << nl;
            for(int i = 0; i < n - 1; i++){
                if(s[i] == '1' && s[i+1] == '0'){
                    cout << 2 << nl;
                    cout << i+1 << " " << i+2 << nl;
                    break;
                }
            }
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