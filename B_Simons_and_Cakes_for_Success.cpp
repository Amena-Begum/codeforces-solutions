#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
   int n;
   cin>>n;
   int ans = 1;
   for(int i=2; i * i <= n; i++){
    if(n%i == 0){
      ans *= i;
      while(n%i == 0){
        n /= i;
      }
    }
   }
   ans *= n;
   cout<<ans<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}