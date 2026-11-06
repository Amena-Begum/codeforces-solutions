#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
     ll n;
     cin>>n;
     vector<ll>arr(n);
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }
     for(int i=0; i<n; i++){
        if(arr[i] != n-i){
            ll j;
            for(j=i+1; j<n; j++){
                if(arr[j] == n-i)
                   break;
            }
            while(i<j){
                swap(arr[i++], arr[j--]);
           
            }
            break;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" \n"[i+1 == n];
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}