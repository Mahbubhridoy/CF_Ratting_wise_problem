#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
	int n; cin >> n;
	string s; cin >> s;
	if(s[0] == 'a'){
		cout << "aa" << nl;
		return;
	}
	if(n == 1){
		cout << s << s << nl;
		return;
	}
	if(s[0] <= s[1]){
		cout << s[0] << s[0] << nl;
		return;
	}
	if(s[0] == s[1]){
		cout << s[0] << s[1] << nl;
		return;
	}
	int i = 0;
	while(i + 1 < s.size() && s[i + 1] <= s[i])i++;
	string g = s.substr(0, i + 1);
	cout << g;
	reverse(g.begin(), g.end());
	cout << g;
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


