#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
        ll a,b,c,d; cin >> a >> b >> c >> d;
        ll x = min(a,c);
        ll y = min(b,d);
        if(x < y)cout << "Flower" << nl;
        else cout << "Gellyfish" << nl;

}
    
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++){
        answer();
    }
    return 0;
}