#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
	ll n; cin >> n;
	vector<ll>a(n + 1);
	for(int i = 1; i<=n; i++)cin >> a[i];
	ll cnt = 0;
	int pre = a[1];
    for(int i = 2; i<=n ; i++){
    	if(a[i] < pre)cnt++;
    	else {
    		pre = a[i];
    	}
    }
    cout << cnt << nl;
	
}
    
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++){
        answer();
    }
    return 0;
}