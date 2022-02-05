#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int c = 0;

    while (n-- > 0) {
        int a, b;
        cin >> a;
        cin >> b;
        c += b - a >= 2 ? 1 : 0;
    }

    cout << c;
}