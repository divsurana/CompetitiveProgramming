#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solve(string a, string b) {
    reverse(a.begin(), a.end());
    return a == b ? "YES" : "NO";
}

int main() {
    string a, b;
    cin >> a;
    cin >> b;
    cout << solve(a, b);
}