#include <iostream>
using namespace std;
void print_pattern(int count, char c) {
    if (count == 0) return;
    cout << c;
    print_pattern(count - 1, c);
}
void solve(int n, int current_row) {

    if (current_row > n) return;

    print_pattern(n - current_row, ' ');

    print_pattern(2 * current_row - 1, '*');

    cout << endl;
    solve(n, current_row + 1);
}
int main() {
    int n;
    if (!(cin >> n)) return 0;
    solve(n, 1); 
    return 0;
}