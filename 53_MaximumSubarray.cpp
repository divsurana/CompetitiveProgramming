#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, m = INT_MIN;
        for (int n: nums) {
            sum = max(n, sum + n);
            m = max(m, sum);
        }
        return m;
    }
};