#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> frequencySort(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        for (int num : nums)
        {
            freq[num]++;
        }
        sort(nums.begin(), nums.end(), [&](int n1, int n2)
            {
            if (freq[n1] != freq[n2]) {
                // If frequencies are different, sort by increasing frequency.
                return freq[n1] < freq[n2];
            } else {
                // If frequencies are the same, sort by decreasing number.
                return n2 < n1;
            } });

        return nums;
    }
};
