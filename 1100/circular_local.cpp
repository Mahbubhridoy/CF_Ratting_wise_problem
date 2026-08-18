// #include<bits/stdc++.h>
// using  namespace  std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

// #define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// #define sq(x)   (x)*(x)
// #define PI      acos(-1.0)
// #define all(x) x.begin(),x.end()
// #define nl      '\n'
//  #define mod 1000000007
// typedef long long int ll;
// typedef unsigned long long int  llu;

// // PRIME NUMBER TEST//
// bool prime(int n)
// {
//     if(n<2)return false;
//     if(n<=3)return true;
//     if(n%2==0)return false;
//     for(int i=3;i*i<=n;i+=2)
//     {
//         if(n%i==0)return false;
//     }
//     return true;
// }

// // Graph Grid //
// int dx[]={-1,0,1,0};
// int dy[]={0,1,0,-1};

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int ar[n+4];
//         for(int i=0;i<n;i++)cin>>ar[i];
//         sort(ar,ar+n);
//         vector<int>v;
//         if(n%2==1)
//         {
//             cout<<"NO"<<endl;
//             continue;
//         }
//         for(int i=0,j=n/2;i<n/2;i++,j++)
//         {
//             v.push_back(ar[i]);
//             v.push_back(ar[j]);
//         }
//         v.push_back(v[0]);
//         v.push_back(v[1]);
//         int ans=0;
//         for(int i=1;i<v.size()-1;i++)
//         {
//             if(v[i]>v[i-1] && v[i]>v[i+1])continue;
//             else if(v[i]<v[i-1] && v[i]<v[i+1])continue;
//             else
//             {
//                 ans=1;
//                 break;
//             }
//         }
//         if(ans==1)cout<<"NO"<<endl;
//         else
//         {
//             cout<<"YES"<<endl;
//             for(int i=0;i<n;i++)
//             {
//                 cout<<v[i]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }



#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

void answer(){
    int n; cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int b[n], pos = 0;
    for(int i = 0; i < n; i += 2)b[i] = a[pos++];
    for(int i = 1; i < n; i += 2)b[i] = a[pos++];
    bool flag = false;
    for(int i = 0; i < n; i++){
        int prev = b[(i - 1 + n) % n];
        int next = b[(i + 1) % n];
        if (!((b[i] < prev && b[i] < next) || (b[i] > prev && b[i] > next))) {
            flag = true;
        }
    }

    if(!flag){
        cout << "YES" << nl;
        for(int i = 0; i < n; i++) cout << b[i] << ' ';
        cout << nl;
        return;
    }

    cout << "NO" << nl;
    
}
    
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++){
        answer();
    }
    return 0;
}
