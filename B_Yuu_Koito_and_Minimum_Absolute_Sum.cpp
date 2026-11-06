#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long final_a0, final_an_1;
    long long min_diff_abs = 0;

    if (a[0] != -1 && a[n - 1] != -1) {
        final_a0 = a[0];
        final_an_1 = a[n - 1];
        min_diff_abs = abs(final_an_1 - final_a0);
    } 
    else {
        min_diff_abs = 0;

        if (a[0] == -1 && a[n - 1] == -1) {
            a[0] = 0;
            a[n - 1] = 0;
        } 
        else if (a[0] == -1) {
            a[0] = a[n - 1];
        } 
        else { 
            a[n - 1] = a[0];
        }
        
        final_a0 = a[0];
        final_an_1 = a[n - 1];
    }

    cout << min_diff_abs << "\n";

    for (int i = 1; i < n - 1; ++i) {
        if (a[i] == -1) {
            a[i] = 0;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        solve();
    }

    return 0;
}