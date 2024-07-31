#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int cnt = 0;
        for (const auto el : nums)
        {
            if (el < k)
                cnt++;
        }
        return cnt;
    }
};