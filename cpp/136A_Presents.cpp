#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n] = {0};

    for (int i = 1; i <= n; i++) {
        int c;
        cin >> c;

        a[c - 1] = i;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}