// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define nl '\n'

// void answer(){
// 	int n,k; cin >> n >> k;
// 	vector<int>a(n);
// 	for(int i = 0; i<n; i++)cin >> a[i];
// 	set<int>s;
//     for(int i = 0; i<n; i++){
//     	if(s.count(a[i] - k) || s.count(a[i] + k)){
//     		cout << "YES" << nl;
//     		return;
//     	}
//     	s.insert(a[i]);
//     }
//     cout << "NO" << nl;
	
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
    int n, q, color; cin >> n >> q;
    vector<int> a(n), pos(51, n + 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (pos[a[i]] == n + 1) pos[a[i]] = i + 1;
    }
    for (int i = 0; i < q; i++) {
        cin >> color;
        int ans = pos[color];
        for (int j = 1; j<50; j++) 
        if (pos[j] < ans) pos[j]++;
        pos[color] = 1;
        cout << ans << " ";
    }
    
}
    
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    for (int i = 1; i <= t; i++){
        answer();
    }
    return 0;
}