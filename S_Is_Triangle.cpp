#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int long s=(a+b+c)/2 ;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));

    if(a+b>c && a+c>b && b+c>a){
        cout<<"Valid"<<endl;
        cout<<fixed<<setprecision(6)<<area;
    } else{
        cout<<"Invalid"<<endl;
    }
    
    return 0;
}