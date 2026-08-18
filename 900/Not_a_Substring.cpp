#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl '\n'

void answer(){
     string s; cin >> s;
     int n = s.size();
     if(n == 2 && s == "()"){
      cout << "NO" << nl;
      return;
     }
     cout << "YES" << nl;
     string x(n, '(');
     string y(n, ')');
     string t = x + y;
     int m = t.size();
     bool flag = true;
     for(int i = 0; i + n <= m; i++){
      if(t.substr(i,n) == s){
        flag = false;
      }
     }
     if(flag){
      cout << t << nl;
     }else{
      for(int i = 0; i<n; i++){
        cout << "()";
      }
      cout << nl;
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