#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int a[n];
      for(int i=0; i<n; i++){
        cin>>a[i];
      }

      vector<int> preMin(n);
      vector<int>sufMax(n);
      preMin[0] = a[0];
      sufMax[n-1] = a[n-1]; 
      for(int i=1; i<n; i++){
        preMin[i] = min(preMin[i-1], a[i]);  
      }
       for(int i=n-2; i>=0; i--){
        sufMax[i] = max(sufMax[i+1], a[i]);
      }
      string result = "";
    for (int i = 0; i < n; i++) {
       
        if (a[i] == preMin[i] || a[i] == sufMax[i]) {
            result += '1';
        } else {
            result += '0';
        }
    }
    cout << result << "\n";

    }
    return 0;
}