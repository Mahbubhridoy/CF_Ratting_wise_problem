#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
	int n; cin >> n;
	string s; cin >> s;
	ll cnt = count(s.begin(),s.end(), '0');
	//cout << cnt << nl;
	if(cnt == 1)cout << "BOB" << nl;
	else if(cnt % 2 != 0) cout << "ALICE" << nl;
	else cout << "BOB" << nl;
}
    
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++){
        answer();
    }
    return 0;
}