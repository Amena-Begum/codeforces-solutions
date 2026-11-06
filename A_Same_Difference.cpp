#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
         string str;
            cin>>str;
        long long ans=0;

        for(int i=0; i<n; i++){
           
            if(str[i] != str[n-1]){
               ans++;
            }
        }
         cout<<ans<<endl;
    }
    return 0;
}