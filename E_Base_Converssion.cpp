#include<bits/stdc++.h>
using ll = long long;
using namespace std;

void printBinary(ll n){
     if(n==0){
        return;
     }
     ll remainder = n%2;
     printBinary(n/2);
     cout<<remainder;
}

void solve(){
    ll n;
    if(!(cin>>n)) return;

    if(n==0){
        cout<<"0\n";
        return;
    }
    printBinary(n);
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      solve();
    }
    return 0;
}