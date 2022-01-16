#include <iostream>
using namespace std;
int main() {
    // solution comes here
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        int s = str.size();
        if (str.size() > 10) {
            cout << str.at(0) << (s - 2) << str.at(s - 1) << "\n";
        } else {
            cout << str << "\n";
        }
    }
}