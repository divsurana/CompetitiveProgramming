#include <iostream>
using namespace std;
int main() {
    // solution comes here
    int n, t = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int c = 0;
        for (int j = 0; j < 3; j++) {
            int s;
            cin >> s;
            c += s;
        }

        if (c > 1) t++;
    }

    cout << t;
}