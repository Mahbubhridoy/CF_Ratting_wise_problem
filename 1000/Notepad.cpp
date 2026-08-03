#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
	int n; cin >> n;
	string s; cin >> s;
	map<int,int> mp;
	for(int i = 0; i< n-1; i++){
		ll x = s[i] - 'a' + (s[i + 1] - 'a') * 6;
		if(mp.find(x) != mp.end() && mp[x] != i - 1){
			cout << "YES" << nl;
			return;
		}
		if(mp.find(x) == mp.end()){
			mp[x] = i;
		}
		//cout << "NO" << nl;
	}
	cout << "NO" << nl;
	
}
    
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++){
        answer();
    }
    return 0;
}