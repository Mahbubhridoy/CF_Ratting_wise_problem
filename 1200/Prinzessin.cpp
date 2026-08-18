#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
    int n; cin >> n;
    string s; cin >> s;
    string x = "a";
    while(1){
        if(s.find(x) == -1){
            if(x == "aez"){
                cout << "aed" << nl;
                return;
            }
            cout << x << nl;
            return;
        }
        bool flag = false;
        for(int i = x.size() - 1; i >= 0; i--){
            if(x[i] != 'z'){
                x[i] += 1;
                flag = true;
                break;
            }
        }
        if(!flag){
            x = string(x.size() + 1, 'a');
        }
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