#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
    ll n; cin >> n;
    while (true) {
        cout << n << " ";
        if (n == 1) break;

        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
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


