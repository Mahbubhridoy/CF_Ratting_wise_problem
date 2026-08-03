#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
    int a,b; cin >> a >> b;
    if(b == 1)cout << "NO" << nl;
    else{
        cout << "YES" << nl;
        cout << a << " " << a * (ll)b << " " << a * (ll)(b + 1) << nl;
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