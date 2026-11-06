#include<bits/stdc++.h>
using namespace std;
int main(){
    double x1,y1;
    cin>>x1>>y1;
   double x2,y2;
    cin>>x2>>y2;
    double x3,y3;
    cin>>x3>>y3;
 //ei logic thik ache:   
//    double area = 1.0/2*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
//    if(area == 0){
//     cout<<"YES"<<endl;
//    }
//     if(area != 0){
//     cout<<"NO"<<endl;
//    }

// double m1,m2; ei logic e code crush korar somvabona besi
// m1=(y2-y1)/(x2-x1);
// m2=(y3-y2)/(x3-x2);
// if(m1==m2){
//     cout<<"YES"<<endl;
// } else{
//     cout<<"NO"<<endl;
// }

// ei logic thik ache:
double D = (y2 - y1) * (x3 - x2) - (y3 - y2) * (x2 - x1);
if(D == 0){
    cout<<"YES"<<endl;
   } else{
    cout<<"NO"<<endl;
   }
    return 0;
}