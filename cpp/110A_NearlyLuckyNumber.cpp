#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solve(string s) {
    int c = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '4' || s.at(i) == '7') c++;
    }

    return (c == 4 || c == 7) ? "YES" : "NO";
}

int main() {
    string s;
    cin >> s;
    cout << solve(s);
}