#include <iostream>
using namespace std;
int main() {
    int i, j;
    cin >> i;
    cin >> j;
    int n = 0;

    while (i <= j) {
        i *= 3;
        j *= 2;
        n++;
    }

    cout << n;
}