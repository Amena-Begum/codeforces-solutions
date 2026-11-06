/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long fact = 1;
    cin >> n;
    if (n < 0) {
        return 0;
    }
    if (n <= 1) {
        cout << "Number of digits of " << n << "! is " << 1 << endl;
        return 0;
    }
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    int count = 0;
    long long tmp_num = fact;
    while(tmp_num != 0){
        tmp_num /= 10;
        count++;
    }
    cout << "Number of digits of " << n << "! is " << count << endl;
    return 0;
}
*/

#include<bits/stdc++.h>
#include <cmath> 
using namespace std;
int main(){
    int n; 
    double digits_sum = 0.0;
    
    cin >> n;
    
    if (n <= 1) {
        cout << "Number of digits of " << n << "! is " << 1 << endl;
        return 0;
    }
    
    for(int i = 1; i <= n; i++){
        digits_sum += log10((double)i);
    }
    
    int count = (int)floor(digits_sum) + 1;
    
    cout << "Number of digits of " << n << "! is " << count << endl;
    return 0;
}
