#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
    int n; cin >> n;
    cout << 1 << " ";
    for (int i = n; i >= 2; i--) {
        cout << i << " ";
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