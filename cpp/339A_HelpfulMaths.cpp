#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solve(string s) {
    vector<int> a;
    string delimiter = "+";
    size_t pos = 0;
    string token;

    while ((pos = s.find(delimiter)) != string::npos) {
        token = s.substr(0, pos);
        a.push_back(stoi(token));
        s.erase(0, pos + delimiter.length());
    }
    a.push_back(stoi(s));
    sort(a.begin(), a.end());

    string r = "";
    for (int i: a) r += to_string(i) + delimiter;
    r.erase(r.length() - 1, r.length());

    return r;
}

int main() {
    string s;
    cin >> s;
    cout << solve(s);
}