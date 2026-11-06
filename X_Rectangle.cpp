#include<bits/stdc++.h>
using namespace std;

void solve() {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    if (!(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)) return;

    int n;
    if (!(cin >> n)) return;

    double Xminimum = min({x1, x2, x3, x4});
    double Xmaximum = max({x1, x2, x3, x4});
    double Yminimum = min({y1, y2, y3, y4});
    double Ymaximum = max({y1, y2, y3, y4});

    double x, y;
    while(n--) {
        if (!(cin >> x >> y)) break;
        
        if (Xminimum <= x && x <= Xmaximum && Yminimum <= y && y <= Ymaximum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}