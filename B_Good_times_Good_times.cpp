#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        long long l10 = 1 + log10(x);
        long long ans = powl(10, l10) + 1;
        cout<< ans <<endl;
    }
 return 0;
}