#include <iostream>
using namespace std;
int main() {
    int n, curr = 0, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;

        cin >> a;
        cin >> b;

        curr += b - a;
        ans = max(ans, curr);
    }

    cout << ans;
}