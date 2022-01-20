#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solve(string s, int n) {

    int ans = 0;
    char prev;

    for (int i = 0; i < n; i++) {
        if (s[i] == prev) ans++;
        else prev = s[i];
    }

    return ans;
}

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    cout << solve(s, n);
}