// #include<bits/stdc++.h>
// using namespace std;
// using ll=long long;
// int main(){
//     ll t;
//     cin>>t;
//      while(t--){
//         ll n,s,x;
//         cin>>n>>s>>x;
//         ll sum = 0;
//           for(int i=0;i<n;i++){
//             ll x;
//             cin >> x;
//              sum += x;
//         }
       
//         if(sum>s || (s-sum) % x){
//             cout << "NO" << "\n";
//         } else {
//             cout << "YES" << "\n";
//         }
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,s,x;
        cin>>n>>s>>x;
        vector<ll> a(n);
        ll sum = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum += a[i];
        }
        if(sum<=s && (s-sum)%x == 0){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
}