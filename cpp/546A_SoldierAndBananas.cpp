#include <iostream>
using namespace std;
int main() {
    int k, n, w;
    cin >> k;
    cin >> n;
    cin >> w;

    int ans = (((w * (w + 1)) / 2) * k) - n;

    cout << (ans > 0 ? ans : 0);
}