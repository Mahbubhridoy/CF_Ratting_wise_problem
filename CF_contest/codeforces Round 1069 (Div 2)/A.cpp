#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
	int n; cin >> n;
	vector<int>v(n);
	for(int i = 0; i<n; i++)cin >> v[i];
	set<int>s;
	for(int i = 0; i<n; i++){
	  s.insert(v[i]);
	}
	ll cnt = s.size();
	//cout << cnt << nl;
	for(int i = 0; i<n; i++){
	  if(v[i] != cnt){
		cnt++;
	}
	else{
		continue;
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