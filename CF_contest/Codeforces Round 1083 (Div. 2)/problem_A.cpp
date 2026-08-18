#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
    int n, m; cin >> n >> m;
    string str1, str2; cin >> str1 >> str2;
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int flag = 1;
    for(int i = 0; i<m-1; i++){
        if(str2[i] != str1[i]) flag = 0;
    }
 
    ll cnt = 0;
    for(int i = m-1; i<n; i++){
        if(str1[i] == str2[m-1]) cnt = 1;
    }
 
    if(flag * cnt == 1) cout << "YES" << nl;
    else cout << "NO"<< nl;
    return;
}
    
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++){
        answer();
    }
    return 0;
}


