#include<bits/stdc++.h>
using namespace std;
int main(){
    double X1,Y1,X2,Y2;
    cin >> X1 >> Y1 >> X2 >> Y2;
    double X3,Y3,X4,Y4;
    cin >> X3 >> Y3 >> X4 >> Y4; 
    double l1 = (Y2-Y1)*(X4-X3)-(Y4-Y3)*(X2-X1);
    if(l1 == 0){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
    return 0;
}