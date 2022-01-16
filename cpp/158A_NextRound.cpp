#include <iostream>
using namespace std;
int main() {
    int n, k, val = 0, ans = 0;
    cin >> n;
    cin >> k;

    for (int i = 1; i <= n; i++) {
        int s;
        cin >> s;
        if (s <= 0) break; // break as soon as non-positive integer found
        if (i == k) val = s;
        ans += (i <= k || s == val) ? 1 : 0; // since array is non-increasing, check whether s appears before or if after then its equal to val
    }

    cout << ans;
}