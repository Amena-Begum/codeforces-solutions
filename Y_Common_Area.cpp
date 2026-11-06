#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

void solve(int case_num) {
    int n;
    cin >> n;

    if (n < 1) {
        cout << "Case #" << case_num << ": " << 0 << endl; 
        return;
    }

    int xl_intersection = INT_MIN; 
    int xr_intersection = INT_MAX; 
    int yl_intersection = INT_MIN;
    int yr_intersection = INT_MAX;

    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        int xl = min(x1, x2);
        int xr = max(x1, x2);
        int yl = min(y1, y2);
        int yr = max(y1, y2);

        xl_intersection = max(xl_intersection, xl); 
        xr_intersection = min(xr_intersection, xr); 
        yl_intersection = max(yl_intersection, yl); 
        yr_intersection = min(yr_intersection, yr); 
    }

    if (xl_intersection < xr_intersection && yl_intersection < yr_intersection) {
        long long intersection_area = (long long)(xr_intersection - xl_intersection) * (yr_intersection - yl_intersection);
        
        cout << "Case #" << case_num << ": " << intersection_area << endl;
    } else {
        cout << "Case #" << case_num << ": " << 0 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; 
    
    int case_counter = 1; 

    while (t--) {
        solve(case_counter); 
        case_counter++; 
    }

    return 0;
}