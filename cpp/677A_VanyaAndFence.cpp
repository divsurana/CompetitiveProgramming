#include <iostream>
using namespace std;
int main() {
    int n ,f;
    cin >> n;
    cin >> f;
    int w = 0;

    while (n-- > 0) {
        int h;
        cin >> h;
        w += h > f ? 2 : 1;
    }

    cout << w;
}