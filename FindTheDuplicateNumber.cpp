#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> hash(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            hash[nums[i]]++;
        }

        for (int j = 1; j < hash.size(); j++)
        {
            if (hash[j] > 1)
            {
                return j;
            }
        }
        return -1;
    }
};