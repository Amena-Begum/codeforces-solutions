#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,r,m;
    cin>>l>>r>>m;
    long long product = 1;
    if(l<=r){
      for(long long i = l; i<=r; i++){
           product*=i;
           product %= m;
    }
    cout<<product<<endl;
    }
    return 0;
}