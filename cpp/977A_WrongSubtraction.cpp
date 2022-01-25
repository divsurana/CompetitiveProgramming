#include <iostream>
using namespace std;
int main() {
    int i, n;
    cin >> i;
    cin >> n;

    while (n > 0) {
        int c = i % 10;
        if (c == 0) {
            i /= 10;
            n--;
        } else {
            c = min(c, n);
            i -= c;
            n -= c;
        }
    }

    cout << i;
}