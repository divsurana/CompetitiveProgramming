#include <iostream>
using namespace std;
int main() {
    int n, x = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        x += s.find("+") != string::npos ? 1 : -1;
    }

    cout << x;
}