// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define nl '\n'

// void answer(){
// 	int a, b, c, d;
//     cin >> a >> b >> c >> d;
    
//     c -= a;
//     d -= b;
    
//     if (a + b > min(a, b) * 3 + 2 || c + d > min(c, d) * 3 + 2) {
//         cout << "NO\n";
//     } else {
//         cout << "YES\n";
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



// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define nl '\n'

// void answer(){
// 	int a,b,c,d; cin >> a >> b >> c>> d;
// 	c -= a;
// 	d -= b;
// 	if(a + b > min(a,b) * 3 + 2 || c + d > min(c,d) * 3 + 2)cout << "NO" << nl;
// 	else cout << "YES" << nl;
	
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
// 	    ll n,m; cin >> n >> m;
//         vector<ll> a(n);
//         for (int i = 0; i<n; i++) cin >> a[i];
//         sort(a.rbegin(), a.rend()); 
//         ll k = min<ll>(n, m);
//         vector<ll> pre(k+1, 0), w(k+1, 0);
//         for (int i = 0; i<k; i++) {
//             pre[i+1] = pre[i] + a[i];
//             w[i+1] = w[i] + i * a[i];
//         }

//         ll ans = m * pre[k] - w[k];
//         cout << ans << nl;
	
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
	int a[n];
	for(int i=0; i<n; i++)cin >> a[i];
	sort(a, a+n, greater<int>());
	swap(a[0], a[n - 1]);
	if(a[0] == a[1]){
		cout << "NO" << nl;
		return;
	}
	cout << "YES" << nl;
		for(int i = 0; i<n; i++){
			cout << a[i] << " ";
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



