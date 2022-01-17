#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << (string(1, toupper(s.at(0))) + s.substr(1, s.length()));
}