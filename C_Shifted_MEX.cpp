#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
      vector<int> a(n);
      for(int i=0; i<n; i++){
        cin>>a[i];
      }
      sort(a.begin(),a.end());
      a.erase(unique(a.begin(),a.end()),a.end());
     int max_len = 0;
     if(a.size()>0){
        max_len = 1;
        int current_len = 1;
        for(int i=1; i<a.size(); i++){
            if(a[i]==a[i-1]+1){
                current_len++;
            } else{
                current_len = 1;
            }
            max_len = max(max_len, current_len);
        }
     }
     cout<<max_len<<endl;

    }
    return 0;
}