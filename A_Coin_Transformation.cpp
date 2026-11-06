// Approach - 1 :
//  #include <bits/stdc++.h>
//  using namespace std;

// int solve(long long n)
// {
//     long long x = n;
//     if (x <= 3)
//         return 1;
//     else if (x > 3)
//     {
//         return (2 * solve(x / 4));
//     }
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long n;
//         cin >> n;
//         cout << solve(n) << endl;
//     }
//     return 0;
// }

// Approach - 2 :
#include <bits/stdc++.h>
using namespace std;

map<long long, long long> mp;
int solve(long long n)
{
    if (n <= 3)
        return 1;
    else if (mp.count(n))
        return mp[n];

    return mp[n] = (2 * solve(n / 4));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}