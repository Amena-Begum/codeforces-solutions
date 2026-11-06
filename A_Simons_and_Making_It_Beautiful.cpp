#include<bits/stdc++.h>
using namespace std;
using ll = long long; 

void solve(){
   int n;
        cin>>n;
        int p[n];
        for(int i=0; i<n; i++){
            cin>>p[i];
        }
        ll indx = find(p, p+n, n) - p;
     swap(p[0], p[indx]);
     for (int x : p)
          cout<< x <<" ";
        cout<<endl;

    }
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       solve();
    }
    
    return 0;
}