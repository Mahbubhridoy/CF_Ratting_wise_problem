// logic:: n - 1 array er maje finds the highest power of 2 ≤ n,,--> x
//         then x - 1 thke 0 obdi print then x thele n - 1 obdi print tahole minimum cost 
//         paoya possible

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

int power(int n){
	int x = log2(n);
	return pow(2,x);
}
void answer(){
	int n; cin >> n;
	int p = power(n - 1);
	for(int i = p - 1; i >= 0; i--)cout << i << " ";
	for(int i = p; i<n; i++) cout << i << " ";
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



// logic:: n - 1 array er maje finds the highest power of 2 ≤ n,,--> x
//             then  finds the distance from that power of 2 . y = n - x.
//             then array take aei seq ee print korle minimum cost paoya jabe
//             x y ......array er baki element...


// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define nl '\n'

// void answer(){
// 	int n; cin >> n;
// 	n--;
// 	int x = log2(n);
// 	x = pow(2,x);
// 	int y = n - x;
// 	for(int i = x; i<=n; i++)cout << i << " ";
// 	cout << y << " ";
//     for(int i = 0; i<n; i++){
//     	if(i == y)continue;
//     	cout << i << " ";
//     }
//     cout << nl;
    
	
// }
    
// int32_t main(){
//     ios_base::sync_with_stdio(0);cin.tie(0);
    
//     int t = 1; cin >> t;
//     for (int i = 1; i <= t; i++){
//         answer();
//     }
//     return 0;
// }




