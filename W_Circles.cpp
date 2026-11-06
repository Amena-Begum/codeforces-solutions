#include <bits/stdc++.h>
#include <cmath> 

using namespace std;

void solve() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double x3, y3, x4, y4;
    cin >> x3 >> y3 >> x4 >> y4;

    double CAx = (x1 + x2) / 2.0;
    double CAy = (y1 + y2) / 2.0;
    double r1 = 0.5 * sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    double CBx = (x3 + x4) / 2.0;
    double CBy = (y3 + y4) / 2.0;
    double r2 = 0.5 * sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));

    double d = sqrt(pow(CBx - CAx, 2) + pow(CBy - CAy, 2));

    double r_sum = r1 + r2; 

    if (d > r_sum ) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}