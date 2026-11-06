#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int currentLength = 0;
    int maxLength = 0;
    for(char c : s){
        if(c == '#'){
            currentLength++;
            maxLength = max(maxLength, currentLength);
        } else {
            currentLength = 0;
        }
    }

    int maxTime = (maxLength + 1)/2;
    cout<<maxTime<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){

        solve();
       
    }
    return 0;
}