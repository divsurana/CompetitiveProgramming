#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b;

    cin >> a;
    cin >> b;

    transform(a.begin(), a.end(), a.begin(),
    [](unsigned char c){ return tolower(c); });

    transform(b.begin(), b.end(), b.begin(),
    [](unsigned char c){ return tolower(c); });

    cout << a.compare(b);
}