#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int n = 0;

    for (int i = 0; i < 5; i++) {
        string l; getline(cin, l);
        int p = l.find("1");
        if (p != string::npos) {
            n += abs(2 - i) + abs(2 - (p / 2));
            break;
        }
    }

    cout << n;
}