#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
	int n; cin >> n;
	string s; cin >> s;
	set<char>se;
	ll ans = 0;
	for(int i = 0; i<n; i++){
		se.insert(s[i]);
		ans += se.size();
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