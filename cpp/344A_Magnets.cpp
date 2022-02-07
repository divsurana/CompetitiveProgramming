#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string p = "";
    int c = 0;

    while (n-- > 0) {
        string s;
        cin >> s;

        if (s != p) {
            p = s;
            c += 1;
        }

    }

    cout << c;
}