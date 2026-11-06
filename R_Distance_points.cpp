#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x1,y1,x2,y2;
   cin>>x1>>y1>>x2>>y2;
   
     double distance = hypot((double)x2-x1, (double)y2-y1);
  cout << fixed << setprecision(9) << distance << endl;
    return 0;
}