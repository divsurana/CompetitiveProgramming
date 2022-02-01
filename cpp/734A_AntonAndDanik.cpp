#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solve(string s, int l) {
    size_t n = count(s.begin(), s.end(), 'A');
    return (((l % 2 == 0) && (n == l / 2)) ? "Friendship" : ((n > l / 2) ? "Anton" : "Danik"));
}

int main() {
    int l;
    string s;
    cin >> l;
    cin >> s;
    cout << solve(s, l);
}