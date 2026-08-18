#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl '\n'

void answer(){
     int n; cin >> n;
     string s; cin >> s;
     int left = -1, right = -1;
     for(int i = 0; i<n; i++){
      if(s[i] == 'A' && left == -1){
        left = i;
      }
      if(s[i] == 'B'){
        right = i;
      }
     }
     if(left != -1 && right != -1){
      cout << max(0ll, right - left) << nl;
     }else{
      cout << 0 << nl;
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