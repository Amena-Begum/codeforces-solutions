#include<bits/stdc++.h>
using namespace std;
int main(){
    double X,Y,r;
    int n;
    cin>>X>>Y>>r>>n;
    double x,y;
    while(n--){
        cin>>x>>y;
        double distance = sqrt(pow(x-X,2)+pow(y-Y,2));
      if(distance <= r){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
    }
    return 0;
}