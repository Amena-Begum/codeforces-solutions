#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;

    long long max_sum = 0;

    for (int i =1; i <= n; ++i) {
        long long current_base = i;
        
        for (long long k = 1; ; ++k) {
            
            if (current_base > m / i) {
                break;
            }
            
            current_base *= i; 
            
            max_sum++; 
        }
    }
    
    cout << max_sum << "\n";
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