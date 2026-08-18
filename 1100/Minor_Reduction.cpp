#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
	string x; cin >> x;
    int n = x.size(); 
    bool flag = false;
    for(int i = n - 1; i > 0; i--){
         if((int)(x[i] + x[i - 1] - '0' - '0') >= 10){
            x[i] = char((int)(x[i] + x[i - 1] - '0' - '0') - 10 + '0');
            x[i - 1] = '1';
            flag = true;
            break;
         }
    }
    if(!flag){
        char ch = x[0] + x[1] - '0';
        cout << ch;
        for(int i = 2; i < n; i++)cout << x[i];
        cout << nl;
    }else cout << x << nl;
	
}
    
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++){
        answer();
    }
    return 0;
}