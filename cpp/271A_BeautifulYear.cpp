#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    n += 1;

    for (; n < 9012; n++) {
        int num = n;
        bool f[10] = {false};

        while (num > 0) {
            if (f[num % 10]) break;
            f[num % 10] = true;
            num /= 10;
        }
        if(num == 0) break;
    }

    cout << n;
}