#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int countDistinct(string s) 
{ 

    unordered_map<char, int> m; 
  
    for (int i = 0; i < s.length(); i++) { 
        m[s[i]]++; 
    } 
  
    return m.size(); 
} 

int main() {
    string s;
    cin >> s;
    cout << ((countDistinct(s) % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");
}